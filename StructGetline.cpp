#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
struct orang{
    string nama; 
    DetailAlamat alamat;
    int umur;
};

int main(){
    //Deklarasi obyek dari struct orang
    orang mhs;
    //Isi Objek
    cout << "Nama Mahasiswa: ";
    getline(cin, mhs.nama);
    cout << "Alamat Desa: ";
    getline(cin, mhs.alamat.desa);
    cout << "Alamat Kota: ";
    getline(cin, mhs.alamat.kota);
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << endl;
    //Menampilkan isi obyek
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat Desa: " << mhs.alamat.desa << endl;
    cout << "Alamat Kota: " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
    cout << endl;
}