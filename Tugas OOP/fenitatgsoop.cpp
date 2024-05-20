#include <iostream>
using namespace std;

// Deklarasi kelas
class Tanaman {
public:
    string nama; 
    string jenis;
    int umur;
    float tinggi;

    //Metode untuk menampilkan informasi
   void hasil_tanaman () { 
        cout << "Nama tanaman SS: " << nama  <<endl;
        cout << "jenis tanaman: " << jenis <<endl;
        cout << "umur tanaman: " << umur <<endl;
        cout << "tinggi tanaman: " << tinggi <<endl;
    }

};

int main() {
    // Membuat objek dari kelas Tanaman
    Tanaman t1;
    Tanaman t2;

    // Memberi nilai atribut objek
    t1.nama = "Bunga";
    t1.jenis = "Mawar";
    t1.umur = 9;
    t1.tinggi = 0.5;

   // Memberi nilai atribut objek
    t2.nama = "Mangga";
    t2.jenis = "Buah";
    t2.umur = 5;
    t2.tinggi = 3.2;

    // Memanggil metode untuk menampilkan informasi
    t1.hasil_tanaman();
    t2.hasil_tanaman();
    
     return 0;
}