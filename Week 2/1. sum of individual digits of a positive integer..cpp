#include <iostream>
using std::cin;
using std::cout;

int main(){
	int a,rem=1, sum=0;
	do{
		cout << "Enter a number: ";
		cin >> a;
	}while(a<0);
	
	while(a){
		rem = a % 10;
		a/=10;
		sum+=rem;
	}
	
	cout << "Sum of digits is: " << sum;
}
