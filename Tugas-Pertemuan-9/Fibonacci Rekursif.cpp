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
	int num, i, j=0;
	
	cout<<"masukkan jumlah bilangan fibonacci = ";
	cin>>num;
	cout<<"bilangan fibonacci dari "<<num<<" = "<<Fibonacci(num);
	return 0;
}
