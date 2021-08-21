#include<iostream>

using namespace std;

int main(){

    int a = 6;
    int b = 4;
    
    int hasil; 

    // operator matematika +, -, *, /, %

    // penjumlahan
    hasil = a + b;
    cout << "penjumlahan \n";
    cout << a << " + " << b << " = " << hasil << endl;
    
    // pengurangan
    cout << "pengurangan \n";
    hasil = a - b;
    cout << a << " + " << b << " = " << hasil << endl;

    // perkalian
    cout << "perkalian \n";
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // pembagian
    cout << "pembagian \n";
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // modulus
    cout << "modulus \n";
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    /* untuk mengompile code gunakan g++ file.cpp -o (ganti nama)
lalu ketik nama file*/
/*untuk mendapatkan hasil menjadi desimal, maka salah satu data yang 
diinput harus berupa float dan memori juga harus float. Untuk 
mendapatkan pada modulo tidak bisa menggunakan int dan float bersamaan*/ 

    // operasi urutan eksekusi
    cout << "penambahan yang dikurung \n";
    hasil = (a + b) * a;
    cout << hasil << endl;

    cout << "tanpa dikurung \n";
    hasil = a + b * a;
    cout << hasil << endl;

    cin.get();
    return 0;

}

