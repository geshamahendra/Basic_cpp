#include<iostream>
using namespace std;

// nilai fibonacci ke-n

// prototipe
int fibonacci(int n);


int main()
{
    int angka, hasil;
    cout << "Menghitung fibonacci ke: ";
    cin >> angka;
    hasil = fibonacci(angka);

    cout << "Nilainya adalah: ";
    cout << hasil << endl;

    cin.get();
    return 0;
}

//Kekurangan fibonacci rekursif seperti ini memakan banyak memori
int fibonacci(int n)
{
    cout << "Fungsi fibonacci " << n << endl;
    if ((n == 0) || (n == 1))
    {
        return n;
    } else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
