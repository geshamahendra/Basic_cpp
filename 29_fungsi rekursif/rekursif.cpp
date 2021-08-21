#include<iostream>
using namespace std;

// fungsi rekursif terbatas
int pangkat_iter(int a, int b)
{
    int hasil = a;
    for (int i = 0; i < b; i++)
    {
        hasil = hasil * a;
    }
    return hasil;
}

int pangkat_rekursif(int a, int b)
{   
    if (b <= 1)
    {
        cout << "akhir dari rekursif\n";
        return a;
    } else
    {
        cout << "rekursif\n";
        return a * pangkat_rekursif(a,(b - 1));//x^y, x^y-1, x^y-2,...
    }
}

int main()
{
    int a;
    int b;
    cout << "angka: ";
    cin >> a;
    cout << "pangkat: ";
    cin >> b;
    cout << "hasil iterasi = " << pangkat_iter(a,b) << endl;
    cout << "hasil rekursif = " << pangkat_rekursif(a,b) << endl;

    cin.get();
    return 0;
}