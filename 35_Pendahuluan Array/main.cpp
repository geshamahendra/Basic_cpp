#include<iostream>
using namespace std;

//Array => Kumpulan dari kumpulan data dengan address memoriberurutan

int main()
{
    // Membuat array
    int nilai[5]; //atau = {0, 1, 2, 3, 4};
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    cout << &nilai[0] << ", nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << ", nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << ", nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << ", nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << ", nilainya adalah: " << nilai[4] << endl;

    cout << endl;
    int *ptr = nilai;
    *(ptr + 2) = 6;

    cout << &nilai[0] << ", nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << ", nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << ", nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << ", nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << ", nilainya adalah: " << nilai[4] << endl;

    // Mengganti array
    cout << endl;
    nilai[3] = 7;
    cout << &nilai[3] << ", nilainya adalah: " << nilai[3] << endl;

    // Ukuran Array
    cout << endl;
    cout << "Ukuran array: " << sizeof(nilai) << " byte" << endl;
    cout << "jumlah member array: " << sizeof(nilai)/sizeof(int) << endl;

    cin.get();
    return 0;
}