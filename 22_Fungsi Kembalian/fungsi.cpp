#include<iostream>

using namespace std;

int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

int bagi(int a, int b)
{
    int c;
    c = a / b;
    return c;
}

int main()
{
    int input, hasil, a, b, hasil2;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);

    cout << hasil << endl;

    cout << "masukkan nilai a: ";
    cin >> a;
    cout << "masukkan nilai b: ";
    cin >> b;

    hasil2 = bagi(a, b);

    cout << hasil2 << endl;

    cin.get();
    return 0;
}