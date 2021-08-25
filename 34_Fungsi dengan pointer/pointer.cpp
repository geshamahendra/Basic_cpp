#include<iostream>
using namespace std;

// fungsi pointer tidak membutuhkan int main(), melainkan void

void fungsi(int *);
void kuadrat(int *);

int main()
{
    int a = 5;
    cout << "address a: " << &a << endl;
    cout << "  nilai a: " << a << endl;

    //fungsi(&a); // fungsi dengan input pointer
    kuadrat(&a);

    cout << "  nilai kuadrat a: " << a << endl;

    cin.get();
    return 0;
}

void fungsi(int *b)// b merupakan pointer
{
    cout << "address b: " << b << endl;
    cout << "  nilai b: " << *b << endl; //dereferenccing
}

void kuadrat(int *valPtr)
{
    *valPtr = (*valPtr) * (*valPtr);
}