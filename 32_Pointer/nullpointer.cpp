#include<iostream>
using namespace std;

/* pointer : merubah nilai pada satu address sehingga mengurangi penggunaan memori, selalu bertipe data int
(alamat yang dapat digunakan untuk meletakkan suatu variabel)*/

int main()
{
    int a = 5;

    // nullpointer (pointer dengan address kosong)
    int *aPtr = nullptr;

    //masukkan nilai a
    //aPtr = &a; 

    // int a mempunyai nilai dan address (alamat)

    cout << "Nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPtr << endl;
    cout << "Ukuran: " << sizeof(int) << " byte" << endl;

    // deferrencing: mengambil data dari sebuah pointer
    cout << "Mengambil nilai dari pointer aPtr: " << *aPtr << endl;

    cin.get();
    return 0;
}