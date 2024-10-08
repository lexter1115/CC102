#include <iostream>
using namespace std;

int main ()
{
    int age;
	string nickname;
	string cyl;
	string school;
	
	cout << "Nickname: ";
	cin >> nickname;
	cout << "Course-Year Level: ";
	cin >> cyl;
	cout << "School: ";
	cin >> school;
	
	cout << " Wow Congrats "  << nickname <<  " ! "  << cyl <<  " is a nice course. And you are studying in "  << school <<  " which is one of the Center of Excellence in Tertiary Education";
	
    return 0;
}