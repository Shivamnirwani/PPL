#include <bits/stdc++.h>
using std::cin;
using std::cout;

int main(){
	int a, b;
	char c;
	
	cout << "Input two numbers to calculate in the form a+b: ";
	cin >> a>>c>>b;
	
	cout << "Result is: ";
	switch(c){
		case '+':
			cout << a+b;
			break;
		case '/':
			cout << a/b;
			break;
		case '*':
			cout << a*b;
			break;
		case '-':
			cout << a-b;
			break;
		case '%':
			cout << a%b;
			break;
	}
	
	return 0;
}
