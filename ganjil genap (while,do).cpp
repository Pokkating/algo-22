#include <iostream>
using namespace std;

int main (){
char jawab;
int angka;

 do {
 cout << "Masukkan angka : ";
 cin >> angka;
 cout << "Angka "<< angka << " adalah ";
 cout << ( (angka % 2 == 1) ? "ganjil" : "genap" );
 cout <<endl<< "Coba lagi (Y/T) ? "; cin >> jawab;
 }
 while (jawab == 'y' || jawab == 'Y');
 
return 0;
}
