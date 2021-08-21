#include<iostream>

using namespace std;

int main(){

    float a, b, hasil;
    char aritmatika;// kontainer simbol

    cout << "selamat datang di kalkulator" << endl;

    //memasukkan input dari user
    cout << "masukkan nilai pertama : ";
    cin >> a;
    cout << "pilih operator +,-,*,/: ";
    cin >> aritmatika;
    cout << "masukkan nilai kedua : ";
    cin >> b;

    cout << "\nhasil perhitungan: ";
    cout << a << aritmatika << b << endl;

    if (aritmatika == '+'){
        hasil = a + b;
    } else if (aritmatika == '-'){
        hasil = a - b;
    } else if (aritmatika == '*'){
        hasil = a * b;
    } else if (aritmatika == '/'){
        hasil = a / b;
    } else {
        cout << "operator tidak valid" << endl;
    }
    

    cout << " = " << hasil << endl;


    cin.get();
    return 0;
}
