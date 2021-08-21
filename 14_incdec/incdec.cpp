#include<iostream>
using namespace std;

int main()
{
    // increment dan decrement
    // preincrement dan post increment

    int a = 5;
    int b = 5;

    // postincrement
    cout << "postincrement\n";
    cout << a << endl;
    cout << a++ << endl; // a++ : a = a + 1 (diprint dahulu kemuddian ditambahkan)
    cout << a << endl << endl; //menambah baris baru sama dengan \n

    // preincrement
    cout << "pretincrement\n";
    cout << b << endl;
    cout << ++b << endl; // (ditambahkan dahulu kemudian diprint)
    cout << b << endl;

    cout << "\n";

    // postdecrement
    cout << "postdecrement\n";
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl << endl;

    // predecrement
    cout << "pretdecrement\n";
    cout << b << endl;
    cout << --b << endl;
    cout << b << endl;

    cin.get();
    return 0;
}