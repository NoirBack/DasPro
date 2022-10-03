#include <iostream>

using namespace std;
int main()
{
    char pil;
    char penyakit;
    do {
        cout <<"Silahkan Pilih Keluhan Anda !! \n";
        cout <<"Masukkan Satu Pilihan: \n";
        cout <<"======================================================\n";
        cout <<"| A=Pusing  | B=Gatal | C=sesak napas  | D=Sakit perut | \n";
        cout <<"|    E=flu   | F=Panas dingin | G=Demam | H=Radang     |\n";
        cout <<"|       I=Muntah Muntah  | J=Hidung Tersumbat          |\n";
        cout <<"====================================================== \n";
        cout <<"Masukan Kode Penyakit (A-G) :";
        cin>>penyakit;

        cout <<"-----------------------------" <<endl;
        cout <<""<<endl;
        switch (penyakit)
        {
            case 'A'  : case 'a' : cout <<"Anda Terinfeksi Mirgen"<<endl;
                break;
            case 'B'  : case 'b' : cout <<"Anda Mengalami terinveksivirus"<<endl;
                break;
            case 'C'  : case 'c' : cout <<"Anda Terfeksi Influenza"<<endl;
                break;
            case 'D'  : case 'd' : cout <<"Anda maaga"<<endl;
                break;
            case 'E'  : case 'e' : cout <<"Anda Mengidap Asma"<<endl;
                break;
            case 'F'  : case 'f' : cout <<"Anda Terinfeksi Malaria"<<endl;
                break;
            case 'G'  : case 'g' : cout <<"Anda Mengalami DBD"<<endl;
                break;
            case 'H'  : case 'h' : cout <<"Anda Mengalami Amandel"<<endl;
                break;
            case 'I'  : case 'i' : cout <<"Anda Mengalami Muntaber"<<endl;
                break;
            case 'J'  : case 'j' : cout <<"Anda Mengalami "<<endl;
                break;
            default   : cout <<"Maaf Penyakit Anda Tidak Terditeksi!! \n";
                break;
        }
        cout <<""<<endl;
        cout <<"============================="<<endl;
        cout <<"Apakah Anda ingin Mengulang ?"<<endl;
        cout <<"Pilihan (y/n)"; cin>>pil;
    }while (pil=='y'|| pil=='Y');
    cout <<"Anda Tidak Mengulang" <<endl;
    return 0;
}