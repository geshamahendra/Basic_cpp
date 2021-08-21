#include<iostream>
using namespace std;

// overloading : menimpa

int luas_kotak(int p, int l){
    int luas = p * l;
    return luas;
}

//overload function
int luas_kotak(int s){
    int luas = s * s;
    return luas;
}

double luas_kotak(double s){
    return s * s;
}
// fungsi overload memungkinkan memilih jika terdapat argumen yang berbeda

int main(){

    cout << "luas kotak 2x3 : " << luas_kotak(2,3) << endl;
    cout << "luas kotak 2.5x3.5 : " << luas_kotak(2.5,3.5) << endl;
    cout << "luas kotak 2x2 : " << luas_kotak(2) << endl;
    cin.get();
    return 0;
}
