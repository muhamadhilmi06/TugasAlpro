#include <iostream>
using namespace std;

// Deklarasi kelas
class Robot{
public:
    string nama;
    int umur;
    string mbti;

    // Metode untuk menampilkan informasi
    void perkenalan_diri() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "MBTI: " << mbti << endl;
    }
};

int main() {
    // Membuat objek dari kelas Manusia
    Robot r1;
    Robot r2;

    // Memberi nilai atribut objek
    r1.nama = "Muhidin";
    r1.umur = 30;
    r1.mbti = "INFJ";

    // Memanggil metode untuk menampilkan informasi
    r1.perkenalan_diri();
    r2.perkenalan_diri();

    return 0;
}