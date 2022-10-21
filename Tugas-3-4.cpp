/*
    4. Buat program untuk menyelesaikan rumus:
    Y = bx2 + 0,5x – c, dimana nilai b = 25, x=15, c=20
    Malik Syafi'i
    1D-INFORMATIKA
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    
    //deklarasi var
    float b = 25, x = 15, c = 20;
    float Y;
    //output teks
    cout << "Nilai b = " << b << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai c = " << c << endl;
    cout << "Selesai kan persamaan berikut Y = bx^2 + 0.5x - c " << endl;
    cout << "Y = 25(15)^2 + 0.5(15) - 20" << endl;
    //proses hitung
    Y = (b * x * x) + 0.5 * x - c;
    //output hasil
    cout << "Nilai Y = " << Y << endl;

    return 0;
}
