/*
Week 1 #2
Write a C program to perform the addition of two numbers without using + operator.
*/

#include <iostream>
using std::cout;
using std::cin;

int main(){
	int a,b;
	cout << ~-4;
	cout << "Enter number 1: ";
	cin >> a;
	cout << "Enter number 2: ";
	cin >> b;
	
	cout << "Addition is: " << a-(~b) - 1;
	
	return 0;
}
