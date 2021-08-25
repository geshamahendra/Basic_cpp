#include<iostream>
using namespace std;

// pointer : merubah nilai pada satu address sehingga mengurangi penggunaan memori, selalu bertipe data int

int main()
{
    int a = 5;

    // pointer (selalu int)
    int *aPtr = &a; //tidak bisa terdapat 2 tipe data yang bernama sama

    // int a mempunyai nilai dan address (alamat)

    cout << "Nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPtr << endl;
    cout << "Ukuran: " << sizeof(int) << " byte" << endl;

    cin.get();
    return 0;
}