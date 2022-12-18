/*
    3. Buatlah program untuk menghitung Arus(I), Tegangan (V) dan Hambatan (R)
    Malik Syafi'i
    1D-INFORMATIKA
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    //deklarasi var
    float V,I,R;

    //Perhitungan Arus Listrik
    cout << "Mencari Arus Listrik" << endl;
    cout << "Masukkan Tegangan (V) : ";
    cin >> V;

    cout << "Masukkan Hambatan (R) ; ";
    cin >> R;

    I = V/R;

    cout << "Nilai Arus Listrik = " << I << endl;
    cout << " " << endl;

    //Perhitungan mencari tegangan
    cout << "Mencari Tegangan" << endl;
    cout << "Masukkan Arus Listrik (I) ; ";
    cin >> I;

    cout << "Masukkan Hambatan (R) : ";
    cin >> R;

    V = I*R;

    cout << "Nilai tegangan = " << V << endl;
    cout << " " << endl;

    //Perhitungan Mencari Hambatan
    cout << "Mencari Nilai Hambatan" << endl;
    cout << "Masukkan Tegangan (V) : ";
    cin >> V;

    cout << "Masukkan Arus Listrik (I) : ";
    cin >> I;

    R = V/I;

    cout << "Nilai Hambatan = " << R << endl;

    return 0;
}
