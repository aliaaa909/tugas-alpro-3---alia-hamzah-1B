#include <iostream>
using namespace std;

 int main() {
    int nilai;
    cout<< "Selamat datang di program konversi nilai!" << endl;
    cout<< "Silahkan masukkan nilai anda : " ;
    cin>> nilai;

    if (nilai == 90)
        cout<< "Selamat anda mendapat nilai A" ;
    else if (nilai >= 80 && nilai <= 89 )
        cout<< "Anda mendapat nilai B " ;
    else if (nilai >= 70 && nilai <= 69 )
        cout<< "Anda mendapat nilai C " ;
    else if (nilai >= 60 && nilai  <= 69)
        cout<< "Anda mendapat nilai D ";
    else if (nilai <= 60 )
        cout<< "Anda mendapat nilai E ";

return 0;
    }
