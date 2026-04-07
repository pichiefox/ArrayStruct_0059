#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
Struct orang{
    string nama; 
    DetailAlamat alamat;
    int umur;
};

int main(){
    //Deklarasi obyek dari struct orang
    orang mhs[3];
    //Isi Objek
    for(int i = 0; i <=2; i++)
    {
    cout << "Nama Mahasiswa: ";
    getline(cin, mhs[i].nama);
    cout << "Alamat Desa: ";
    getline(cin, mhs[i].alamat.desa);
    cout << "Alamat Kota: ";
    getline(cin, mhs[i].alamat.kota);
    cout << "Umur: ";
    cin >> mhs[i].umur;
    cin.ignore();
    }
    cout << endl;
    //Menampilkan isi obyek
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
    cout << endl;
}