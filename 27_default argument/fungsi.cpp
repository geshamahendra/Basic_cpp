#include<iostream>
using namespace std;

// fungsi prototipe
double volume_persegipanjang(double p = 1, double l = 1, double t = 1);
//t = 1 merupakan default argument jika nilai dalam fungsi tidak memenuhi argumen


int main(){

    cout << "Volume persegi panjang: " << volume_persegipanjang(3,4,5) << endl;
    cout << "persegi panjang: " << volume_persegipanjang(3,4) << endl;
    cout << "persegi panjang: " << volume_persegipanjang(3) << endl;
    cout << "persegi panjang: " << volume_persegipanjang() << endl;
    cin.get();
    return 0;
}

// default argument (nilai standar)
double volume_persegipanjang(double p, double l, double t){
    return p * l * t;
}