#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

int main(){
	int n,a=0,b=1;
	cout << "Enter the number of fibonacci terms to print: ";
	cin >> n;
	
	cout << "Fibonacci sequence is: \n";
	
	for(int i=0; i<n;++i){
		if(i==0) {
			cout << a;
			a=b;
		}
		else if(i==1) {
			cout << b;	
		}
		else {
			int c= a;
			a=b;
			b+=c;
			cout << a;
		}
		cout << ".";
	}
	
	return 0;
}
