#include<iostream>
using namespace std;

int main()
{
    int a = 5;

    while (a < 10)
    {
        cout << "Yay Pernyataan benar a < 10" << endl;
        a += 2; //gunakan assignment untuk menginterupsi variabel
        cout << "Hasil Penjumlahan sebelumnya: " << a << endl;
    }
    
    cout << "program selesai" << endl;

    cin.get();
    return 0;
}