#include<iostream>
using namespace std;

int main()
{

    for (int i = 0; i <= 10; i++)
    {
        if (i==5)
        {
            continue;
            //break; //break membatasi continue melanjutkan
        }
        
        cout << i << endl;
    }

    cout << "program selesai" << endl;
    

    cin.get();
    return 0;
}