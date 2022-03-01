//Buatlah program untuk menghitung banyak data, rata-rata, jumlah dari sekumpulan data yang dimasukkan!
#include <iostream>
using namespace std;

int main(){
	int n, data;
	int jumlah = 0;
	double rata;
	
	cout<<"Masukkan banyak data = "; cin>>n;
	
	for (int i=1; i<=5; i++) {
		cout<<"Data ["<<i<<"] = "; cin>>data;
		jumlah += data;
	}
	
	cout<<"Banyaknya data = "<<n<<endl;
	
	rata = jumlah/n;
	
	cout<<"Rata-rata = "<<rata<<endl;
	cout<<"Jumlah = "<<jumlah<<endl;
}
