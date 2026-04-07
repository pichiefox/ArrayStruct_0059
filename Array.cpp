#include <iostream>
using namespace std;

int main(){
    //Deklarasi Array dengan inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //Deklarasi tanpa inisialisasi
    int datamu[5];
    int x;
    //Cara membaca array dataku
    cout << "Data ke - 3 : " << dataku[2]<<endl;

    //Operasi Matematika
    x = dataku[2]*3;
    //Cara menulis atau mengisi array
    dataku[2] = 600;
    cout << "Data ke - 3 yang baru : " << dataku[2]<<endl;
    
}