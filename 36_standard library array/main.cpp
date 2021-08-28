#include<iostream>
#include<array>

int main()
{
    // membuat array dengan menggunakan standard library
    //array<int, jumlah array> nama array

    std::array <int, 5> nilai;

    for (int i = 0; i <= 4; i++)
    {
        nilai[i] = i;
        std::cout << " nilai [" << i << "] = " << nilai[i] << " dengan address: " << &nilai[i] << std::endl;
    }
    std::cout << std::endl;
    // ukuran array
    std::cout << "ukuran: " << nilai.size() << std::endl;
    // address awal dari array
    std::cout << "address awal: " << nilai.begin() << std:: endl;
    // address akhir dari array
    std::cout << "address akhir: " << nilai.end() << std::endl; //batasan address
    // nilai dengan index
    std::cout << "nilai ke 2 : " << nilai.at(2) << std::endl;


    std::cin.get();
    return 0;
}