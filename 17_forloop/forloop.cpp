#include<iostream>
using namespace std;

int main()
{
    cout << "Loop 1 \n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    
    cout << "\n Loop 2 \n";
    for (int i = 1; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    cout << "\n Loop 3 \n";
    for (int i = 1; i >= -10; i -- )
    {
        cout << i << endl;
    }

    cout << "\n Loop 4 \n";
    int total1 = 0;
    for (int i = 1; i <= 10; i ++, total1 += i)
    {
        //total += i; dapat dipindah keatas
        cout << i << "||" << total1 << endl;
    }

    cout << "\n Loop 5 \n";
    int total2 = 0;
    for (int i = 1; i <= 10; total2 += i, i ++)
    {
        //total += i; dapat dipindah keatas
        cout << i << "||" << total2 << endl;
    }
    //ingat bahwa peletakan i++ berpengaruh baik sebelum atau sesudah
    cin.get();
    return 0;
}