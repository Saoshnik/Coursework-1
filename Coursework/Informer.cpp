#include "Informer.h"


void Informer::Buy(User& user, Lot& lot) {
	double price = lot.GetDiscountPrice(user);
	user.ReduceBalance(price);
	lot.setQuantity(lot.getQuantity() - 1);

	cout << user.getName() << " ����� " << lot.getName() << " �� " << lot.GetDiscountPrice(user)
		<< ". ����� ��� ��������� �� ������ " << user.getAdress() << '\n';
}