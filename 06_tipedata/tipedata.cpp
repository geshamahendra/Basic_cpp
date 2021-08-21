#include <iostream>
#include <limits>//untuk memasukkan limit

using namespace std;

int main(){
    int a = 1; //data integer

    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;//jumlah data 
    cout << numeric_limits<int>::max() << endl;
    cin.get();
    return 0;
}

/*1 byte = 8 bit
sehingga integer bernilai 32-bit - +/- = 31 bit
2^31 = 2147483648
dikurangi 0 menjadi 
nilai maximum = 2147483647
nilai minimum = -2147483648*/