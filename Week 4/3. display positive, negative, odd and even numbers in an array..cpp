#include <iostream>
using namespace std;

#define loop(a,b) for(int i=0;i<b;++i)cout<<a[i]<<" ";
#define val(ar,b) ar[b]=a[i];b++;

int main(){
	int n;
	cout << "Enter count of integers: ";
	cin >> n;
	int a[n],pos[n], neg[n], odd[n], even[n], pc=0, nc=0, oc=0, ec=0;
	
	cout<< "Enter the integers: \n";
	for(int i=0;i<n;++i){
		cin >> a[i];
		
		if(a[i] >= 0){
			val(pos,pc)
		}
		else {
			val(neg, nc)
		}
		if(a[i]%2) {
			val(odd,oc)
		}
		else {
			val(even,ec)
		}
	}
	
	cout << "Positive numbers are: \n";
	loop(pos, pc);
	cout << "\nNegative numbers are: \n";
	loop(neg, nc);
	cout << "\nEven numbers are: \n";
	loop(even,ec);
	cout << "\nOdd numbers are: \n";
	loop(odd, oc);
	
}
