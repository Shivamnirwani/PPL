#include <bits/stdc++.h>
using std::cin;
using std::cout;

int checkroots(int desc){
    if(desc==0) return 1;
    else if(desc>0) return 2;
    else return 3;
}

int main(){
	float a,b,c;
	cout << "A quadratic equation is in the form of: ax^2+bx+c=0\n";
	cout << "Enter values for a, b and c: ";
	cin >> a >> b >> c;
	cout << endl;
	
	int desc = (b*b) - (4*a*c);
	
	switch(checkroots(desc)){
	    case 1 :
	        cout << "Real and Equal Roots:\n";
	        cout << "x = " << -b/(2*a);
	        break;
	    case 2:
	        cout << "Real and Different Roots\n";
	        cout << "x1 = " << (-b + std::sqrt(desc))/(2*a) << "\tx2 = " << (-b - std::sqrt(desc))/(2*a);
	        break;
	    case 3:
	        cout << "Imaginary Roots:\n";
	        cout << "x1 = " << -b/ (2*a) << "+" << std::sqrt(-desc)/(2*a)<< "i\t";
	        cout << "x2 = " << -b/ (2*a) << "-" << std::sqrt(-desc)/(2*a)<< "i";
	}
	
	
}
