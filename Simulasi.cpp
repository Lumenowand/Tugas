#include <iostream>
using namespace std;
int main(){
	int luas,keliling;
	int alas,tinggi,sisi;
	cout<< "Aplikasi Hitung Luas+keliling Segitiga"<<endl;
	cout<< "Masukkan Alas";cin>>alas;
	cout<< "Masukkan Tinggi";cin>>tinggi;
	luas = 0.5*alas*tinggi;
	cout<< "Luas Segitiga"<<luas;
	
	cout<< "Masukkan Sisi = "; cin>> sisi;
	keliling = sisi+sisi+sisi;
	cout<< "Keliling Segitiga = "<<keliling;
}
	
