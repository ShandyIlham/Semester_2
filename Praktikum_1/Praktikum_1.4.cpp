/*Buatlah program untuk mengalikan matriks ! Syarat perkalian matriks :
Jika matriks Am x n dan matriks Bp x q dikalikan, maka :
Banyaknya kolom matriks A harus sama dengan banyaknya baris matriks B, sehingga n = p
Matriks hasil perkalian antara A dan B adalah matriks dengan ordo m x q
Perkalian dilakukan dengan menjumlahkan hasil kali setiap elemen baris matriks
A dengan setiap elemen kolom matriks B yang sesuai*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  
	cout<<" --PROGRAM PENJUMLAHAN MATRIKS--"<<endl;
	cout<<"================================="<<endl;
	cout<<" Jumlah baris matriks : "; cin>>m;
	cout<<" Jumlah kolom matriks : "; cin>>n;
	
	cout << " Matrix pertama : \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>matriks1[i][j];
    	}
  	}
  	cout << " Matrix kedua : \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
      		cin>>matriks2[i][j];
    	}
  	}
  	cout<<" Hasil perkalian matrix : \n";
  	for(i=0; i<m; i++){
    	for(j=0; j<n; j++){
      		hasil[i][j]=matriks1[i][j]*matriks2[i][j];
      		cout<<hasil[i][j]<<"\t";
    	}
    cout<<endl;
	}
  
	getch();
	return 0;
}
