//judul : Menghitung lama ngajar ngetik
//programmer : Heppy Sentoso
//19 sept 2022

#include <iostream>
using namespace std;
//kamus :
    int jamx,menitx,detikx,jamy,menity,detiky,totax,totay,totdurasi;

//deskripsi :
int main() {

    cout<<"Ajar Coding Ngitung Durasi Antar Waktu"<<endl;
    cout<<"=========================================="<<endl;
    cout<<"Masukkan Jam Pertama : "; getline(cin, jamx      );
    cout<<"Masukkan Menit Pertama : "; getline(cin, menitx   );
    cout<<"Masukkan Detik Pertama : "; getline(cin, detikx    );
    cout<<"Masukkan Jam Kedua : " ; getline(cin, jamy      );
    cout<<"Masukkan Menit Kedua :" ; getline(cin, menity   );
    cout<<"Masukkan Detik Kedua :" ; getline(cin, detiky    );

    totax = (jamx)+(menitx)+detikx;
    totay = (jamy)+(menity)+detiky;

    totdurasi = totax-totay;

    cout<<"Total Durasi"<<totdurasi;
    return 0;
}
