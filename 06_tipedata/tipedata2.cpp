#include <iostream>
#include <limits>//untuk memasukkan limits

using namespace std;

int main()
{
    //bilangan bulat 
    int a = 5; //32-bit
    unsigned int h = 9;// unsign = tidak bertanda positif/negatif 
    long long b = 6;
    short c = 7;
    //gunakan diantara ketiga diatas untuk menghemat memori

    //bilangan desimal
    float d = 1.0;
    double e = 2.5;

    //character
    char f = 'a';

    //boolean
    bool g = true; //true/false

    cout << a << endl;
    cout << sizeof(a) << " byte" << endl;//jumlah data 
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;
    cout << "\n";
    cout << h << endl;
    cout << sizeof(h) << " byte" << endl;//jumlah data 
    cout << numeric_limits<unsigned int>::max() << endl;
    cout << numeric_limits<unsigned int>::min() << endl;
    cout << "\n";
    cout << b << endl;
    cout << sizeof(b) << " byte" << endl;//jumlah data 
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<long long>::min() << endl;
    cout << "\n";
    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;//jumlah data 
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    cin.get();
    return 0;
}

/*1 byte = 8 bit
sehingga integer bernilai 32-bit - +/- = 31 bit
2^31 = 2147483648
dikurangi 0 menjadi 
nilai maximum = 2147483647
nilai minimum = -2147483648*/