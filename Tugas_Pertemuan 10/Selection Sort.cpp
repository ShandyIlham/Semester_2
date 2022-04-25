// Pragram C++ untuk selection sort
#include <iostream>
using namespace std;

// function untuk menukar array
void swap(int *xp, int *yp) {
	int temp = *xp;								// temp = tempat untuk menyimpan array yang akan dibandingkan
	*xp = *yp;
	*yp = temp;
}

// function yang berisi algoritma selection sort
void selectionSort(int array[], int n) {
	int i, j, minimum;

	//proses seleksi satu per satu
	for (i = 0; i < n-1; i++) {
		//untuk menemukan nilai minimum dari array yang belum di sorting
		minimum = i;
		for (j = i+1; j < n; j++)
		if (array[j] < array[minimum])
			minimum = j;

		// untuk menukar tempat atau indeks jika ditemukan angka yang lebih kecil dalam array
		swap(&array[minimum], &array[i]);
	}
}

// function print untuk mencetak hasil dari pengurutan array
void printArray(int array[], int size) {
	int i;
	for (i=0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}

// function utama program, untuk menjalankan semua function diatas
int main() {
	int n;									// variabel n = besar atau jumlah angka yang ingin dimasukkan
	int myArray[n];
	cout << "masukkan jumlah angka : ";
	cin >> n;
	cout << "masukkan " << n << " angka acak : " << endl;
	// iterasi untuk memasukkan angka sesuai dengan jumlahnya
	for (int i = 0; i < n; i++) {
		cin >> myArray[i];
	}
	cout << endl;
	
	// proses mengurutkan array dimulai
	selectionSort(myArray, n);
	
	// menampilkan output dari function print
	cout << "Hasil Array yang sudah di sorting adalah : " << endl;
	printArray(myArray, n);
	
	return 0;
}
