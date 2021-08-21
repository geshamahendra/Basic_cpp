#include<iostream>
#include<cstdlib>//mengandung fungsi random

using namespace std;

int main()
{

    char lanjut;
    for (int i = 0; i < 10; i++)
    {
        cout << "Lempar dadu? (y/n): ";
        cin >> lanjut;

        if (lanjut == 'y')
        {
            cout << 1 + rand() % 6 << endl;//gunakan mod 6 untuk mendapat nilai terakhir hingga 6 digit, jangan sampai ada nilai 0, sehingga diperlukan penambahan 1
        } else if (lanjut == 'n')
        {
            break;
        } else
        {
            cout << "Perintah yang anda masukkan salah!\n";
        }
    }
    
    cin.get();
    return 0;
}