#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, max, smax;
    cout << "Enter the count of numbers: ";
    cin >> n;
    int a[n];
    cout << "Enter the integers: \n";
    for(int i=0; i<n;++i){
    	cin >> a[i];
    	if(i==0) max = a[i];
    	
		if(a[i] > max) smax = max,max = a[i] ;
		else if(i==1) smax = a[i];
		else if(a[i] > smax) smax = a[i];
		
	/*
	else if(i==1) {
    		if(a[i] > max) smax = max,max = a[i] ;
    		else smax = a[i];
	}
    	else {
		if(a[i] > max) smax = max,max = a[i] ;
		else if ( a[i] > smax) smax = a[i];
	}
	*/
    }
	cout << "Second Maximum number is: " << smax;
}
