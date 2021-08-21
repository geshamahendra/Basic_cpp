#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x;
    cout << "Menghitung akar dari x: ";
    cin >> x;

    double y = sqrt(x); //double == float
    cout << "akarnya adalah:" << y << endl;
    cin.get();
    return 0;
}