// ucp2.cpp : This file contains the 'main' function. Program execution begins and ends there.


//
//


#include <iostream>
#include <string>

using namespace std;

// Struct untuk menyimpan data 
struct daftar lokasi {
    string name;
    int tanggerang;
    int bekasi;
    bool accepted;
};

// Deklarasi fungsi untuk menentukan status sehat/tidak sehat
bool isAccepted(int tanggerang, int bekasi) {
    double averageScore = (tanggerang + bekasi) / 2.0;
    return (averageScore >= 70 || tanggerang > 80);
}

// Prosedur untuk menampilkan lokasi sehat dan tidak sehat
void printStatus(const daftar lokasi& daftar lokasi) {
    cout << daftar lokasi.name << " ";
    if (daftar lokasi.accepted) {
        cout << "sehat" << endl;
    }
    else {
        cout << "tidak sehat" << endl;
    }
}

int main() {
    // Array untuk menyimpan data nama kota
    tanggerang bekasi [20];

    // Pengisian data daftar lokasi
    daftar lokasi[0] = { "nama kota", 45, 75, false };
    daftar lokasi[1] = { "tanggerang", 75, 45, false };
    daftar lokasi[2] = { "bekasi", 75, 45, false };
    // Lanjutkan pengisian daftar lokasi 

    // Penentuan tampilkan total lokasi udara 'sehat'/'tidak sehat'
    for (int i = 0; i < 20; ++i) {
        total lokasi[i].accepted = isAccepted(total lokasi[i].sehat, total lokasi [i].tidak sehat);
    }
   
    // terdapat sebuah kondisi dimana apakah akan mengulang program atau tidak
    cout << "Nama   Status" << endl;
    for (int i = 0; i < 20; ++i) {
        printStatus(total lokasi[i]);
    }

    return 0;
}

