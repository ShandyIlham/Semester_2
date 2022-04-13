#include <iostream>
using namespace std;

int Fibonacci (int num){
	if (num == 0 || num == 1){
		return num;
	} else {
		return Fibonacci(num-1) + Fibonacci(num-2);
	}
}

int main(){
	int n, i, j = 0;
	
	cout<<"masukkan jumlah bilangan fibonacci = "; cin>>n;
	cout<<"Hasil bilangan fibonacci : "<<endl;
		for (i = 1; i <= n; i++){
			cout<<"  "<<Fibonacci(j);
			j++;
		}
	return 0;
}
