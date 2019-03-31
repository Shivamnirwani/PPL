/*
Week 1 #5
Write a C program to read the values of x and y and print the results of the following expressions in one line:
i.	(x + y) / (x - y)
ii.	(x + y)(x - y)

*/

#include <iostream>
using std::cout;
using std::cin;

int main(){
	double x,y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	
	cout << "i. (x+y)/(x-y) = " << (x+y)/(x-y)<<"\n";
	
	cout << "ii. (x+y)(x-y) = " << (x+y)*(x-y);
	return 0;
}
