#include<iostream>
using namespace std;

int main()
{
    // rumus f_n = f_n1 + f_n2
    int n ;
    int f_n, f_n1, f_n2;

    cout << "Program Deret Fibonacci\n";
    cout << "Masukkan nilai ke-n: ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    cout << f_n2 << " ";
    cout << f_n1 << " ";
    for (int i = 1; i < n; i++)
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " ";
    }
    
    cout << " ";
    cin.get();
    return 0;
}