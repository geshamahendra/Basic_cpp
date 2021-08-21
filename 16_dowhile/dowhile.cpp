#include<iostream>
using namespace std;

int main()
{
    int a = 1;
    
    do
    {
        cout << "Pernyataan benar yaitu a < 5 " <<endl;
        cout << a << endl;
        a++; //gunakan increment untuk menginterupsi variabel
    } while (a < 5);
    
    cout << "program selesai" << endl;
    cin.get();
    return 0;
}

//dowhile memungkinkan pernyataan dilakukan minimal sekali