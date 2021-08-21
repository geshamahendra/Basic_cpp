#include<iostream>
using namespace std;

// global scope

int x = 10; // variabel global

int ambil_global(){
    return x; // mengambil variabel global
}

int x_local(){
    int x = 5;
    return x; // variabel local scopenya x_local()
}
// variabel disini berlaku untuk global, namun disaat sebuah fungsi terdapat scope local, variabel local tidak akan mengganggu variabel global dan sebaliknya

int main(){
    
    cout << "1. variabel global: " << x << endl;
    int x = 8; // variabel local untuk main (local scope)
    cout << "2. variabel local main: " << x << endl;
    cout << "3. variabel ambil global: " << ambil_global() << endl;
    cout << "4. variabel local main: " << x << endl;
    cout << "5. variabel x_local: " << x_local() << endl;
    cout << "6. variabel local main: " << x << endl;

    cout << "7. variabel local main: " << x << endl;
    {
        cout << "8. variabel local main: " << x << endl;
        // block scope (seperti if else)
        int x = 1;
        cout << "9. variabel local block: " << x << endl;
        cout << "10. variabel ambil global: " << ambil_global() << endl;
        cout << "11. variabel ambil global: " << ::x << endl; // atau dengan titik dua (::) mengambil nilai global terjauh
    }
    cout << "12. variabel local main: " << x << endl;

    cin.get();
    return 0;
}