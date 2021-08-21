#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i <= 10)
    {
        i++;
        if (i==5)
        {
            continue;
            //break; //break membatasi, continue melanjutkan
        }
        
        cout << i << endl;
        //i++; increment untuk continue harus diletakkan diatas
    }

    cout << "program selesai" << endl;
    

    cin.get();
    return 0;
}

//hati2 menggunakan continue didalam while