#include<iostream>

using namespace std;

int main()
{
    int a;//kalau cuman int a maka nilai a = 0
    a = 10;
    cout << a << endl;

    int b;
    cout << "masukkan nilai : ";//c = console
    cin >> b; //masukkan data ke b
    cout << "nilai yang anda masukkan adalah : ";
    cout << b << endl;

    cin.get();
    return 0;
}