#include <iostream>
using namespace std;

#define a(x,y) a.substr(x, y)

int main(){
	
	string a, b, c;
	cout << "Enter the string: ";
	cin >> a;
	
	char ch;
	cout << "+ to add n characters\n- to delete n characters\n";
	cin >> ch;
	
	
	int n;
	cout << "Give position: ";
	cin >> n;
	
	switch(ch){
		case '+':
			cout << "Enter the string: ";
			cin >> b;
			
			c = a(0,n-1) + b + a(n,a.size()-1);
			break;
		case '-':
			c = a(n, a.size()-1);
	}
	
	cout << c;
}
