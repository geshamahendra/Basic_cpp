#include<iostream>

using namespace std;

    // komparasi, relaion expression

int main()
{
    int a = 2;
    int b = 3;

    bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;
    // 1 = true, 0 = false

    // sebanding (== = sebanding)
    cout << "sebanding \n";
    hasil1 = (a == b);
    cout << hasil1 << endl;
    
    // tidak sebanding (! = not)
    cout << "tidak sebanding \n";
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // kurang dari
    cout << "kurang dari \n";
    hasil3 = (a < b);
    cout << hasil3 << endl;
    
    // lebih dari
    cout << "lebih dari \n";
    hasil4 = (a > b);
    cout << hasil4 << endl;

    // kurang dari sama dengan
    cout << "kurang dari sama dengan \n";
    hasil5 = (a <= b);
    cout << hasil5 << endl;
    
    // lebih dari sama dengan
    cout << "lebih dari sama dengan \n";
    hasil6 = (a >= b);
    cout << hasil6 << endl;
        
    cin.get();
    return 0;
}