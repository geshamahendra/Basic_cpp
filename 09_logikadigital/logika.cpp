#include<iostream>

// operator logika standar ( and, or, not)

using namespace std;

int main()
{
    int a = 3;
    int b = 2;

    bool hasil;

    //not
    cout << "not \n";
    hasil = !(a == 3);//! menandakan not
    cout << hasil << endl;

    //and
    cout << "and \n";
    cout << "true and true \n";
    hasil = (a == 3) and (b == 2);
    cout << hasil << endl;
    cout << "false and true \n";
    hasil = (a == 4) and (b == 2);
    cout << hasil << endl;
    cout << "true and false \n";
    hasil = (a == 3) && (b == 3);
    cout << hasil << endl;
    cout << "fasle and false \n";
    hasil = (a == 4) && (b == 3);
    cout << hasil << endl;
    cout << "\n";

    //kedua nilai harus true untuk menghasilkan true

    //or
    cout << "or \n";
    cout << "true and true \n";
    hasil = (a == 3) or (b == 2);
    cout << hasil << endl;
    cout << "false and true \n";
    hasil = (a == 4) or (b == 2);
    cout << hasil << endl;
    cout << "true and false \n";
    hasil = (a == 3) || (b == 3);
    cout << hasil << endl;
    cout << "fasle and false \n";
    hasil = (a == 4) || (b == 3);
    cout << hasil << endl;

    //salah satu nilai true maka hasil akan tetap true

    cin.get();
    return 0;
}