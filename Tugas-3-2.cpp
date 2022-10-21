/*
    2. Buatlah program untuk menghitung nilai akhr mahasiswa tersebut,
    jika diketahui nilai
    praktikum = 75, nilai UTS = 70, nilai UAS = 88!

    Malik Syafi'i
    1D-INFORMATIKA
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    
    //deklarasi var
    float praktikum = 75, UTS = 70, UAS = 88;
    float NilaiAkhir;
    //output teks
    cout << "Nilai praktikum = " << praktikum << "\n";
    cout << "Nilai UTS = " << UTS << "\n";
    cout << "Nilai UAS = " << UAS << "\n";
    //proses hitung
    NilaiAkhir = (praktikum * 20/100) + (uts * 30/100) + (uas * 50/100);
    //output hasik
    cout << "Nilai akhirnya adalah = " << NilaiAkhir << "\n";

    return 0;
}
