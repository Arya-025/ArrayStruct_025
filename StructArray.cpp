#include <iostream>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};

struct orang
{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    orang mhs;
    for (int i = 0; i <= 2; i++) {
    

    cout << "Nama Mahasiswa : ";
    getline(cin, mhs.nama);
    cout << "Alamat Desa : " << endl;
    getline(cin, mhs.alamat.desa);
    cout << "Alamat Kota : " << endl;
    getline(cin, mhs.alamat.kota);
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    }
    //Deklarasi object dari struct orang
   
    //isi object


    for (int i = 0; i <= 2; i++){
       
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
    }
    //Meampilkan Isi Object
    
}
