/*
Week 1 #4
Write a C program to find the sum of individual digits of a 3 digit number.
*/

#include <iostream>
using std::cin;
using std::cout;

int main(){
	int a,sum=0, rem=0;
	do{
	cout << "Enter a 3 digit number: ";
	cin >> a;
	}while(a< 100 || a > 999);
	
	while(a){
		rem = a%10;
		sum += rem;
		a /=10;
	}
	
	cout << "Sum of digits is: "<< sum;
	return 0;
}
