#include<iostream>
using namespace std;

// prototipe
int faktorial(int n);

int main()
{
    int angka, hasil;
    cout << "Menghitung faktorial dari: ";
    cin >> angka;

    hasil = faktorial(angka);
    cout << " Nilai faktorialnya adalah: " << hasil << endl;
    
    cin.get();
    return 0;
}

int faktorial(int n)
{
    if (n <= 1)
    {
        cout << n;
        return n; //fungsi terminasi
    } else
    {
        cout << n << "*";
        return n  * faktorial(n-1);
    }
}