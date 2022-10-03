//judul: Menentukan Terbesar dan Terkecil
//programer : Heppy Sentoso
//2 oktober 2022
#include <iostream>
using namespace std;
//kamus
int pilihan, i, a, b, angka[5], sort;
char pil;
//deskripsi
int main() {
    do {
        cout << "PROGRAM C++ RANKING 5 BILANGAN" << endl;

        for (i = 0; i < 5; i++) {
            cout << "Bilangan ke " << (i + 1) << " : ";
            cin >> angka[i];
        }
        cout << "<========== OPSI YANG HARUS DI PILIH ==========>"<<endl;
        cout << "1. Terkecil ke Terbesar" << endl;
        cout << "2. Terbesar ke Terkecil" << endl;
        cout << "PILIH NO : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: //Urutan Terkecil ke Terbesar
                for (a = 1; a < 5; a++) {
                    for (b = 0; b < 5 - a; b++) {
                        if (angka[b] > angka[b + 1]) {
                            sort = angka[b];
                            angka[b] = angka[b + 1];
                            angka[b + 1] = sort;
                        }
                    }
                }

                cout << endl << "\t\tHasil dari pengurutannya Adalah : ";
                for (i = 0; i < 5; i++) {
                    cout << " " << angka[i];
                }
                break;

            case 2: //Urutan Terbesar ke Terkecil
                for (a = 1; a < 5; a++) {
                    for (b = 0; b < 5 - a; b++) {
                        if (angka[b] < angka[b + 1]) {
                            sort = angka[b];
                            angka[b] = angka[b + 1];
                            angka[b + 1] = sort;
                        }
                    }
                }

                cout << endl << "\t\tHasil dari pengurutannya Adalah : ";
                for (i = 0; i < 5; i++) {
                    cout << " " << angka[i];
                }
                break;

        }
        cout << "" << endl;
        cout << "================================================================================" << endl;
        cout << "Apakah Anda ingin Mengulang ?" << endl;
        cout << "Pilihan (y/n) : ";
        cin >> pil;
    } while (pil == 'y' || pil == 'Y');
    cout << "Anda Tidak Mengulang" << endl;
    return 0;
}