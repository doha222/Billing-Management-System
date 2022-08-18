#include <iostream>
#include <algorithm>
#include <cmath>
#include<string>
using namespace std;
int* enter_data(int no_items[6]) {
	static int arr[6];
	cout << "please ,enter your order" << endl;
	cout << "Bread :";
	cin >> no_items[0];
	cout << "Rice :";
	cin >> no_items[1];
	cout << "Milk :";
	cin >> no_items[2];
	cout << "Juice :";
	cin >> no_items[3];
	cout << "Cola :";
	cin >> no_items[4];
	cout << "Chees :";
	cin >> no_items[5];
	return arr;
}
double get_total(double price[6], int no_items[6]) {
	double total = 0;
	for (int i = 0; i < 6; i++) {
		total += no_items[i] * price[i];
	}
	return total;
}
void reset(int no_items[6]) {
	for (int i = 0; i < 6; i++) {
		no_items[i] = 0;
	}
	cout << "data has been deleted " << endl;
	cout << "         **********************************        " << endl;
	cout << "do you want to enter new order (y/n)" << endl;
	char c;
	cin >> c;
	if (c == 'y') {
		enter_data(no_items);
	}
	else if (c == 'n') {
		return ;
	}
	else {
		cout << "Invalid Choice" << endl;
	}
}

void menu() {
	cout << "1.Total" << endl;
	cout << "2.Receipt" << endl;
	cout << "3.Reset" << endl;
	cout << "4.Exit" << endl;
	cout << "Please enter your choice number" << endl;
}
void print(double price[6], int no_items[6]){
	cout << "Item   Number of item    price" << endl;
	cout << "Bread :  " << no_items[0] << "    :        " << price[0] << endl;
	cout << "Rice :  " << no_items[1] << "    :        " << price[1] << endl;
	cout << "Milk :  " << no_items[2] << "    :        " << price[2] << endl;
	cout << "Juice :  " << no_items[3] << "    :        " << price[3] << endl;
	cout << "Cola :  " << no_items[4] << "    :        " << price[4] << endl;
	cout << "Chees :  " << no_items[5] << "    :        " << price[5] << endl;
	cout << "Total :  " << get_total(price, no_items) << endl;
	cout << "         **********************************        " << endl;
}
int main() 
{

	double price[6] = { 10,10,10,10,10,10 };
	int no_items[6] = { 0,0,0,0,0,0 };
	cout << "         **********************************        " << endl;
	cout << "          Welcome to Billing Management System " << endl;

	enter_data(no_items);

	cout << "         **********************************        " << endl;
	while (true) {

		menu();
		int ch;
		cin >> ch;
		
		if (ch == 1) {
			double res = get_total(price, no_items);
			cout << "Total is :" << res << endl;
			cout << "         **********************************        " << endl;
		}
		
		else if (ch == 2) {
			print(price, no_items);
		}

		else if (ch == 3) {
			reset(no_items);
		}

		else if (ch == 4) {
			cout << " Good Bye :) " << endl;
			return 0;
		}

		else {
			cout << "Invalid choice ,Try again" << endl;
		}
	}
}