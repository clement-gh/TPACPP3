#pragma once
#include "subject.h"
#include "store.h"

class Controller: public Subject//, public Store
{
private:
	int currentScreen;
	Store& _mystore = *new Store();
public:
	Controller();
	void setScreen(const int& idViews);
	int getCurrentScreen();
	std::string setNameOfClient();
	void displayproductsOfStore();
	void updateQuantityOfProduct();
	void addProductToStore();
	void displayAllClient();
	void displayAllOrder();
	void confirmAOrder();
	void updateSatusOrder();
	void displayOrdersOfAClient();

};