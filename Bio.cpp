//judul : PROGRAM BIODATA
//progammer : Heppy Sentoso
//15 sept 2022

#include <iostream>
using namespace std;
int main()
{
//kamus:

    string namax;
    string kelaminx; 
    string ttlx; 
    string agamax;
    string emailx;
    string tlpnx;

//deskripsi:
	cout << "PROGRAM BIODATA" << endl;
	cout << "Masukkan Nama Anda : "; getline(cin, namax );
	cout << "Masukkan Jenis Kelamin Anda :"; getline(cin, kelaminx );
	cout << "Masukkan Tempat, Tangga Lahir Anda : "; getline(cin, ttlx );
	cout << "Masukkan Agama Anda : "; getline(cin, agamax );
	cout << "Masukkan Email Anda : "; getline(cin, emailx );
	cout << "Masukkan No Telp. Anda : "; getline(cin, tlpnx );
cout << ">======================================<" << endl;
cout << "BIODATA ANDA" << endl;
	cout << "Nama : " << namax << endl;
	cout << "Jenis Kelamin : "<< kelaminx << endl;
	cout << "TTL : " << ttlx << endl; 
	cout << "Agama : " << agamax << endl;
	cout << "No Telp. : " << tlpnx << endl;
	cout << "Email : " << emailx << endl;
cout << ">======================================<" << endl;
return 0;
}