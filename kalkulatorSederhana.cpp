#include <iostream>

using namespace std;

int kali(int a,int b);
int bagi(int a,int b);
int tambah(int a,int b);
int kurang(int a,int b);


int main(){
	int a,b;
	char operasi;

	
	cout <<"===kalkulator sederhana===\n" << endl;
	cout <<"masukan angka pertama: ";
	cin >> a;

	//pilih operasi
	pilih:
	cout << "pilih operator[* / + -]? ";
	cin >> operasi;

	if ((operasi == '*') | (operasi == '/') | (operasi == '+') | (operasi == '-')){
		
	}
	else{
		goto pilih;
	}

		cout <<"masukan angka kedua: ";
	cin >> b;

	if(operasi == '*'){
		cout << "hasilnya adalah: ";
		cout << kali(a,b) << endl;
	}
	else if(operasi == '/'){
		cout << "hasilnya adalah: ";
		cout << bagi(a,b) << endl;
	}
	else if(operasi == '+'){
		cout << "hasilnya adalah: ";
		cout << tambah(a,b) << endl;
	}
	else if(operasi == '-'){
		cout << "hasilnya adalah: ";
		cout << kurang(a,b) << endl;
	}
	
	return 0;
}

int kali(int a,int b){
	int hasil = a * b;
	return hasil;
}

int bagi(int a,int b){
	int hasil = a / b;
	return hasil;
}

int tambah(int a,int b){
	int hasil = a + b;
	return hasil;
}

int kurang(int a,int b){
	int hasil = a * b;
	return hasil;
}