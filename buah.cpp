#include <iostream>
using namespace std;

int main ()
{
cout <<"menghitung buah"<<endl;
cout <<"1. jeruk"<<endl;
cout <<"2. anggur"<<endl;
cout <<"3. mangga"<<endl;
cout <<"4. apel"<<endl;

int jeruk, anggur, mangga, apel, hasil, harga;

cout <<"masukan jumlah jeruk"<<endl;
cin >> jeruk;
cout <<"masukan jumlah anggur"<<endl;
cin >> anggur;
cout <<"masukan jumlah mangga"<<endl;
cin >> mangga;
cout <<"masukan jumlah apel"<<endl;
cin >> apel;

jeruk = jeruk * 5000;
anggur = anggur * 3000;
mangga = mangga * 6000;
apel = apel * 10000;

cout << "hasil"<<endl;
hasil = jeruk + anggur + mangga + apel;
cout << hasil;
}
