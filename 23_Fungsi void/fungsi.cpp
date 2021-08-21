#include<iostream>

using namespace std;

// reporter
int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

// worker
void tampilkan(int input)
{
    cout << "menampilkan input dengan void\n";
    cout << input << endl;
} //void tidak menggunakan return karena tidak mengembalikan apapun, digunakan untuk sesuatu yang nilainya tidak perlu dikembalikan

int main()
{
    int input, hasil, a, b, hasil2;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    cin.get();
    return 0;
}