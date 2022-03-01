//perkalian array A dengan eksponen 5
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int A[2][2]={4, 8, 2, 10};
	int B[2][2]={-5, 4, 8, -12};
	
	cout<<"Array A"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Hasil Perkalian Array A dengan eksponen 5 = "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<A[i][j]*A[i][j]*A[i][j]*A[i][j]*A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
