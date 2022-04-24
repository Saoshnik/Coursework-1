#include "Informer.h"


void Informer::Buy(User& user, Lot& lot) {
	double price = lot.GetDiscountPrice(user);
	user.ReduceBalance(price);
	lot.setQuantity(lot.getQuantity() - 1);

	cout << user.getName() << " купил " << lot.getName() << " за " << lot.GetDiscountPrice(user)
		<< ". Заказ был отправлен по адресу " << user.getAdress() << '\n';
}