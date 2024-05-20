#include <iostream>
using namespace std;

class Pesawat {
public:
    string nama, model, harga, kapasitas;

    void spesifikasi() {
        cout << "Nama: " << nama << endl;
        cout << "Model: " << model << endl;
        cout << "Harga: " << harga << endl;
        cout << "Kapasitas: " << kapasitas << endl;
        cout << endl;
    }
};

int main() {
    Pesawat r1;
    Pesawat r2;

    r1.nama = "Lion - Air";
    r1.model = "890";
    r1.harga = "2000000000";
    r1.kapasitas ="800";
    r1.spesifikasi();

    r2.nama = "Garuda - Air";
    r2.model = "900";
    r2.harga = "3000000000";
    r2.kapasitas = "1000";
    r2.spesifikasi();

    return 0;
}