/*Tambahkan standar deviasi pada soal no 3! Rumus standar deviasi (sd)
	Sigma= sigma+sqr(data[i]-rata);
	Sd=sqrt(sigma/n);*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
    int i, n, data[50];
    float rata,jml;
    
    cout<<"Banyaknya Data = ";cin>>n;
    cout<<endl;
    
    for (i=0; i<n; i++) {
        cout<<" Data "<<"["<<i+1<<"]"<<" = ";cin>>data[i];
        jml += data[i];
    }
        
    rata=jml/n;
        
    cout<<endl;
    cout<<" Banyaknya data = "<<n<<endl;
    cout<<" Rata-rata = "<<rata<<endl;
    cout<<" Jumlah = "<<jml<<endl;
    
    double sigma = sigma+sqrt(data[i]-rata);
    double sd = sqrt(sigma/n);
    cout<<" Sigma = "<<sd;
    
	getch();
}
