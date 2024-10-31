#include <stdio.h> // Mengimpor pustaka standar input-output

int main() {
    // Deklarasi variabel
    int nilai = 85; // Mendeklarasikan variabel 'nilai' dan menginisialisasinya dengan 85

    // Menggunakan struktur switch untuk menentukan nilai berdasarkan nilai
    switch (nilai / 10) { // Membagi nilai dengan 10 untuk mendapatkan nilai
        case 10: // kasus untuk nilai 100
        case 9:  // kasus untuk nilai 90-99
            printf("Kategori: A\n"); // menampilkan nilai A
            break; // keluar dari switch setelah menampilkan nilai
        case 8:    // kasus untuk nilai 80-89
            printf("Kategori: B\n"); // menampilkan nilai B
            break; // keluar dari switch setelah menampilkan nilai
        case 7:    // kasus untuk nilai 70-79
            printf("Kategori: C\n"); // menampilkan nilai C
            break; // keluar dari switch setelah menampilkan nilai
        case 6:    // kasus untuk nilai 60-69
            printf("Kategori: D\n"); // menampilkan nilai D
            break; // keluar dari switch setelah menampilkan nilai
        case 5:    // kasus untuk nilai 50-59
            printf("Kategori: E\n"); // menampilkan nilai E
            break; // keluar dari switch setelah menampilkan nilai
        default:   // jika tidak ada kasus yang cocok
            printf("Kategori: F\n"); // menampilkan nilai F
    }

    return 0;
}