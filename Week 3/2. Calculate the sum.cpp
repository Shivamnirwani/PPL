#include <bits/stdc++.h>
using std::cin;
using std::cout;

float power(int x, int num){
	int k =x;
	for(int i= 1; i< num; ++i) x = k*x;
	return x;
}

int fact(int n){
	return n==0 ? 1 : fact(n-1)*n;
}

int main(){
	int x;
	cout << "To calculate: 1- x^2/2! + x^4/4! - x^6/6! + x^8/8! - x^10/10! \nEnter x: ";
	cin >> x;
	
	cout << 1 - (power(x,2)/ fact(2)) + (power(x,4)/ fact(4)) - (power(x,6)/ fact(6)) + (power(x,8)/ fact(8)) - (power(x,10)/ fact(10)) ; 
	
	
	
	return 0;
}
