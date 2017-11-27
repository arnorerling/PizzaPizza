#include "menu.h"

int menu(){
	int input = 0;
	cout << "1: Management" << endl
		 << "2: Sales" << endl
		 << "3: Baker" << endl
		 << "4: Delivery" << endl
		 << "Choose:";
	cin >> input;
	return input;
}