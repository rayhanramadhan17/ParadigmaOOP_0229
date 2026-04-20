#include <iostream>
using namespace std;

class Barang{
public :
    int jumlah;
    string nama;
    string kategori;
    string tanggalProduksi;

    void tampilkanSpesifikasi(){
        cout << "Nama           : " << nama << endl;
        cout << "Jumlah         : " << jumlah << endl;
        cout << "Kategori       : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
}; //batas class

int main(){
    Barang elektronik; //object
    elektronik.nama = "RedMagic Phone";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2025-02-10";

    Barang nonElektronik; //object
    nonElektronik.nama = "Kursi Kantor";
    nonElektronik.jumlah = 5;
    nonElektronik.kategori = "Non-Elektronik";
    nonElektronik.tanggalProduksi = "2024-09-22";

    elektronik.tampilkanSpesifikasi(); //memanggil method tampilkanSpesifikasi
    cout << endl;
    nonElektronik.tampilkanSpesifikasi(); //memanggil method tampilkanSpesifikasi
}