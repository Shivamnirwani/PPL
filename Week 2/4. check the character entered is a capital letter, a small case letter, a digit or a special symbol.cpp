#include <bits/stdc++.h>
using std::cin;
using std::cout;

int main(){
	cout << "Enter a character: ";
	char a = getchar();
	
	if(a>=65 && a<=90 ) cout << a << " is a Capital Case Letter!";
	else if( a>=97 && a<=122) cout << a << " is a Small Case Letter!";
	else if(a>=48 && a<=57) cout << a << " is a Digit!";
	else if (a>=0 && a<= 47 || a >=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=127) cout << a << " is a Special Symbol!";
	
	return 0;
}
