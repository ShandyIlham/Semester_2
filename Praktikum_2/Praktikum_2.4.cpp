//perkalian array A dan B
#include <iostream>
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
	
	cout<<"Array B"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Hasil Perkalian Array A dan B = "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<A[i][j]*B[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
