#include <stdio.h>

int main() {
    int myAge = 19; // mendeklarasikan variabel myAge dan menginisialisasinya dengan nilai 19

    // menampilkan alamat memori dari variabel myAge
    // %p adalah format spesifier untuk mencetak alamat pointer
    printf("%p", &myAge); // menggunakan %p untuk menampilkan alamat

    return 0; // mengembalikan nilai 0 untuk menunjukkan bahwa program telah selesai dengan sukses
}