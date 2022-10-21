/*
    1. Buatlah sebuah program dengan menggunakan rumus phitagoras
    untuk menghitung sisi miring segitiga

    Malik Syafi'i
    1D-INFORMATIKA
*/
#include <iostream>
#include <cmath>
using namespace std;

int main (){

    float a = 8, b = 10;
    float c;

    cout << "Nilai Alas = " << a << "\n";
    cout << "Nilai tinggi = " << b << "\n";
    //
    c = sqrt(pow(a,2) + pow(b,2));

    cout << "Nilai sisi miring = " << c;

    return 0;
}
