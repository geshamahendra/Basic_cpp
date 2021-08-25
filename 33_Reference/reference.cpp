#include<iostream>
using namespace std;

/* Reference : berguna jika terdapat variabel yang sifatnya sama, berguna untuk memory management*/

int main()
{
    // variabel 
    int a = 5;

    cout << "Address dari a: " << &a << endl;
    cout << "  nilai dari a: " << a << endl << endl;

    int &b = a;

    cout << "  nilai dari b: " << b << endl;
    cout << "Address dari b: " << &b << endl << endl;

    // pembuktian
    b = 10;
    cout << "  nilai dari a: " << a << endl;
    cout << "  nilai dari b: " << b << endl << endl;

    a = 20;
    cout << "  nilai dari a: " << a << endl;
    cout << "  nilai dari b: " << b << endl;    

    cin.get();
    return 0;
}