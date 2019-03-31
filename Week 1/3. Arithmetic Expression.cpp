/*
Week 1 - #3
Write a C program to evaluate the arithmetic expression ((a + b / c * d - e) * (f - g)).
Read the values a, b, c, d, e, f, g from the standard input device.
*/

#include <iostream>
using std::cin;
using std::cout;

int main(){
	int a,b,c,d,e,f,g;
	cout << "Expression is: ((a+b/c*d-e)*(f-g))!\n" ;
	cout << "Input the values: ";
	cin >> a>> b>> c>> d>> e>> f>> g;
	
	cout << "Answer is: " << ((a+b/c*d-e)*(f-g));
	
	return 0;
}
