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

    switch(aritmatika){
        case '+':
            hasil = a + b;
            break;//agar program selanjutnya tidak berjalan
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            hasil = a / b;
            break;
        default:
            cout << "operator anda salah" << endl;
            break;
    }
    

    cout << " = " << hasil << endl;


    cin.get();
    return 0;
}
