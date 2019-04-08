#include <iostream>
#include <vector>
using namespace std;

#define vect(a,b) (a, vector<int>(b, 0))

bool checkAddition(int a, int b, int c, int d){
	if(a!=c) return false;
	if(b!=d) return false;
}

bool checkMultiplication(int a, int b, int c, int d){
	if(b!=c) return false;
}

void TakeMatrix(vector<vector<int> > &mat){
	for(int i=0; i< mat.size();++i){
		cout << "Enter elements from row " << i+1 << ", space seperately:";
		for(int j=0; j<mat[i].size() ; ++j) cin >> mat[i][j];
	}
}

void printMatrix(vector<vector<int> > &mat){
	for(int i=0; i<mat.size();++i){
		cout << "\t| ";
		for(int j = 0; j<mat[i].size(); ++j) cout << mat[i][j] << " ";
		cout << "|\n";
	}
}

void Addition(int a, int b){
	vector<vector<int> > matA vect(a,b), matB vect(a,b), matC vect(a,b);
	
	cout << "Enter Matrix A: \n"; TakeMatrix(matA);
	cout << "Enter Matrix B: \n"; TakeMatrix(matB);
	
	for(int i=0; i<a; ++i) for(int j=0; j<b;++j) matC[i][j] = matA[i][j] + matB[i][j];
	
	cout << "\nMatrix A + Matrix B :\n" ; printMatrix(matC);
	
}

void Multiplication(int a, int b, int d){
	vector<vector<int> > matA vect(a,b), matB vect(b,d), matC vect(a,d);
	
	cout << "Enter Matrix A: \n"; TakeMatrix(matA);
	cout << "Enter Matrix B: \n"; TakeMatrix(matB);
	
	for(int i=0; i<a; ++i) for(int j=0; j<d;++j) for(int k=0; k<b;++k) matC[i][j] += matA[i][k] * matB[k][j];
	
	cout << "\nMatrix A x Matrix B :\n" ; printMatrix(matC);
}

int main(){
  int a, b , c , d;
  cout << "Enter Order of the Matrix A (m x n): ";
	cin >> a >> b;
	cout << "Enter Order of the Matrix B (m x n): ";
	cin >> c >> d;
	char op;
	cout << "Enter + for Addition\nEnter * for Multiplication\n";
	cin >> op;
	
	switch(op){
		case '+':
			if(!checkAddition(a,b,c,d)) {
				cout << "Addition not possible!";
				return -1;	
			}
			Addition(a,b);
			break;
		case '*':
			if(!checkMultiplication(a,b,c,d)){
				cout << "Multiplication not possible!";
				return -1;	
			}
			Multiplication(a,b,d);
			break;
	}
}
