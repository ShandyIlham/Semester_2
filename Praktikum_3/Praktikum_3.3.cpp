// Buatlah sebuah program yang digunakan untuk mengambil memory address nilai maksimum dari beberapa angka yang diinputkan user.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int n, i, nilai, maks;
	int *ptr_maks;
	ptr_maks=&maks;
	
	cout<<"Input : "<<endl<<endl;
	cout<<" Banyak nilai yang ingin diinput : "; cin>>n;
	
	for(i=1; i<=n; i++){
		cout<<" Masukkan nilai ke-"<<i<<" : "; cin>>nilai;
		if(nilai>maks){
			maks=nilai;
		}
	}
	
	cout<<endl;
	cout<<" Nilai Maksimum = "<<maks<<" dengan alamat = "<<&maks<<endl;
	
	getch();
}
