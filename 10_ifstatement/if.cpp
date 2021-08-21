#include<iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan angka = ";
    cin >> a;

    // if statement
    // kondisi dalam bentuk boolean
    if (a<3) //() : kondisi
    {
        cout << "Pernyataan benar" << endl;
    }
    
    cout << "selesai" << endl;

    cin.get();
    return 0;
}