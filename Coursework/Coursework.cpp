#include <iostream>
#include <vector>
#include <string>
#include "Lot.h"
#include "File.h"
#include "Define.h"
#include "Informer.h"
#include "MainFunc.h"
using namespace std;





int main() {
    setlocale(LC_ALL, "ru");
    /*locale::global(locale("ru"));*/

    User user;
    string name;

    cout << "Пожалуйста авторизируйтесь.\n";
    while (true) {
        string password;

        cout << "Введите имя пользователя или (end) чтобы завершить программу, и нажмите Enter: "; cin >> name;
        if (name == "end") return 0;

        cout << "Введите пароль и нажмите Enter: "; cin >> password;

        if (!UsersFile::CheckPassword(name, password))
            cout << "Неверное имя пользователя или пароль.\n";
        else {
            user = UsersFile::GetUser(name);
            break;
        }
    }


    vector<ROM> v_rom = LotsFile::GetV_ROM();
    vector <RAM> v_ram = LotsFile::GetV_RAM();
    vector<Keyboard> v_key = LotsFile::GetV_Keyboard();
    vector<CPU> v_cpu = LotsFile::GetV_CPU();
    vector<GPU> v_gpu = LotsFile::GetV_GPU();

    setlocale(LC_ALL, "ru");
    vector<Lot*> lots = MainFunc::Unite(v_rom, v_ram, v_key, v_cpu, v_gpu);



    Informer informer;
    vector<string> CategoryList = LotsFile::CategoryList();

    while (true) {
        cout << "\nЗдравствуйте " << user.getName() << ", ваш баланс " << user.getBalance() << '\n'
            << "Ваш коэффициент стоимости товара " << lots[0]->GetDiscountPrice(user) / lots[0]->getPrice() << '\n';
        cout << "Категории товаров:\n";
        MainFunc::ShowCategories(CategoryList);

        string vvod;
        cout << "Введите номер категории товара или (end) чтобы завершить программу, и нажмите Enter: "; cin >> vvod;
        if (vvod == "end") return 0;


        int category = stoi(vvod) - 1;

        if (category >= 0 && category < CategoryList.size()) 
        {
            for (int i = 0; i < lots.size(); ++i) {
                if (lots[i]->getCategory() == CategoryList[category]) {
                    cout << "Товар [" << lots[i]->getID() << "] " << lots[i]->getName() << " цена " << lots[i]->GetDiscountPrice(user) << '\n';
                    if (lots[i]->getQuantity() == 0) cout << "Товар [" << lots[i]->getID() << "]" << "- нет на складе\n";

                    cout << "next\n";
                }
            }

            string input;
            while (true) {
                cout << "\nВведите номер действия и нажмите Enter:\n" << "1) Показать дополнительную информацию.\n2) Купить.\n"
                    << "3) Вернуться к выбору категории товара.\n0) Выйти из программы.\n"; cin >> input;

                if (stoi(input) < 0 || stoi(input) > 3) cout << "Неверный ввод\n";
                else break;
            }
            
            if (stoi(input) >= 0 && stoi(input) <= 3) {
                int way = stoi(input);


                if (way == 0) return 0;
                if (way == 3) continue;

                if (way == 1)
                {
                    for (int i = 0; i < lots.size(); ++i) {
                        if (lots[i]->getCategory() == CategoryList[category]) {
                            lots[i]->ToConsole(user);
                            cout << '\n';
                        }
                    }
                }

                if (way == 2)
                {
                    string vvod;
                    cout << "Введите существующий id товара и нажмите Enter:\n";
                    cin >> vvod;

                    if (stoi(vvod) > 0 && stoi(vvod) < lots.size()) {
                        int num = stoi(vvod) - 1;

                        if (num >= 0 && num < lots.size())
                        {
                            if (lots[num]->getQuantity() >= 1)
                            {
                                if (user.getBalance() > lots[num]->GetDiscountPrice(user))
                                    informer.Buy(user, *lots[num]);

                                else cout << "Недостаточно средств\n";
                            }

                            else cout << "Нет на складе\n";
                        }

                        else cout << "Таких товаров нет\n";
                    }

                    else cout << "Неверный id\n";
                }
            }
        }

        else cout << "Такой категории товаров нет\n";
    }

    return 0;
}