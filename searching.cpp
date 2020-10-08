#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

//LINEAR SEARCHING

//prosedur untuk menjalankan searching
void searching(int banyak, int cari, int A[])
{
    bool ketemu = false;
    for (int i = 0; i <= banyak; i++)
    {
        if (A[i] == cari)
        {
            ketemu = true;
            cout << "Data Ditemukan Pada Indeks Ke-" << i;
            cout << endl;
        }
    }

    if (ketemu == false)
    {
        cout << "Data tidak ditemukan";
    }
}

//method utama
int main()
{
    //deklarasi variabel statis
    int banyak, cari;

    //memasukkan banyak nilai yang ditampung
    cout << "Masukkan banyak nilai pada elemen array : ";
    cin >> banyak;

    //deklarasi variabel dinamis
    int A[banyak];

    //memasukkan nilai sebelum diurutkan
    cout << "Masukkan nilai pada elemen array :" << endl;
    for (int i = 0; i < banyak; i++)
    {
        cout << "A[" << i << "] =";
        cin >> A[i];
    }

    cout << endl;
    cout << "Input Bilangan yang dicari : ";
    cin >> cari;
    cout << "--------------------------" << endl;
    cout << endl;

    //memanggil prosedur searching()
    searching(banyak, cari, A);
}