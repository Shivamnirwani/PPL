#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

int main(){
	int cp, sp, profit=0, loss=0;
	cout << "Enter Cost Price: ";
	cin >> cp;
	cout << "Enter Selling Price: ";
	cin >> sp;
	
	if(sp>cp) {
		cout << "Profit Earned: " << sp-cp << " Percentage: " << ((float)(sp-cp)/cp)*100 << "%";
	}
	else cout << "Lost Incurred: " << cp-sp << " Percentage: " << ((float)(cp-sp)/cp)*100 << "%";
}
