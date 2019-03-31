#include <bits/stdc++.h>
using std::cin;
using std::cout;

int main(){
    int x;
    cout << "Enter the number of lines to print: ";
    cin >> x;
    int r=0;
    while(++r<=x){
    	for(int i=1;i<=r;++i){
    		cout << i << " ";
		}
		cout << std::endl;
	}
    
}
