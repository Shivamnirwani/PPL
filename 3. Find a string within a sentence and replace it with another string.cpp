#include <iostream>
using namespace std;

#define input(a) getline(cin,a)

int main(){
	
	string a,b,c, d;
	cout << "Enter a string: ";
	input(a);
	
	cout << "String to find: ";
	input(b);
	
	cout << "String to replace with:";
	input(c);
	
	int sidx = a.find(b);
	int eidx = sidx + b.size();
	
	d = a.substr(0, sidx) + c + a.substr(eidx, a.size()-1);
	cout << d;
	
}
