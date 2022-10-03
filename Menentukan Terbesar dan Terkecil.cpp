//judul: Menentukan Terbesar dan Terkecil
//programer : Heppy Sentoso
//2 oktober 2022
#include <iostream>
using namespace std;
//kamus
int terkecil, terbesar, bil1, bil2, bil3, bil4,bil5 , input;
//deskripsi
int main() {

    cout<<"PROGRAM C++ BILANGAN TERKECIL DAN TERBESAR"<<endl;

    cout<<"\nMasukan Bilangan ke-1 : ";
    cin>>bil1;
    cout<<"Masukan Bilangan ke-2 : ";
    cin>>bil2;
    cout<<"Masukan Bilangan ke-3 : ";
    cin>>bil3;
    cout<<"Masukan Bilangan ke-4 : ";
    cin>>bil4;
    cout<<"Masukan Bilangan ke-5 : ";
    cin>>bil5;
    cout << "\t 1. BILANGAN TERKECIL " << endl;
    cout << "\t 2. BILANGAN TERBESAR" << endl;
    cout << " \t PILIH NO : ";
    cin >> input;

    switch (input) {
        //Menentukan nilai terkecil
        case 1:
            terkecil = bil1;

            if (bil2 < terkecil) {
                terkecil = bil2;
            }
            if (bil3 < terkecil) {
                terkecil = bil3;
            }
            if (bil4 < terkecil) {
                terkecil = bil4;
            }
            if (bil5 < terkecil) {
                terkecil = bil5;
            }
            cout << "Nilai Terkecil adalah " << terkecil << endl;
            break;
            //Menentukan nilai terbesar
        case 2:
            terbesar = bil1;

            if (bil2 > terbesar) {
                terbesar = bil2;
            }
            if (bil3 > terbesar) {
                terbesar = bil3;
            }
            if (bil4 > terbesar) {
                terbesar = bil4;
            }
            if (bil5 > terbesar) {
                terbesar = bil5;
            }
            cout << "Nilai Terbesar adalah " << terbesar << endl;
            break;
    }
    return 0;
}
