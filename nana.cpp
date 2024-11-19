#include <iostream>
using namespace std;
int main (){
	int age;
	double money;
	bool parent;
	string toPrinshow, toPrintmoney;
	cout << "Enter age: ";
	cin >> age;
	if(age<13) {
	cout << "With parent? ";
	cin >> parent;
	if(parent)
		toPrinshow = "PG & G show.";
	else
		toPrinshow = "G show.";
	}
	else if(age<16) {
		cout << "With parent? ";
		cin >> parent;
		if(parent)
			toPrinshow = "R, PG & G show.";
	else
		toPrinshow = "PG & G show.";
	}
	else
		toPrinshow = "R, PG & G show.";
	cout << "Enter money: ";
	cin >> money;
	if(money<7.5)
		toPrintmoney = "Not enough money.";
	else if(money<10.5)
		toPrintmoney = "Can go to matine show.";
	else
		toPrintmoney = "Can go to evening & matine show.";
	cout << toPrinshow << endl;
	cout << toPrinshow << endl;
	return 0;
}