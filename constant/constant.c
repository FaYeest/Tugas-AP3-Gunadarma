#include <stdio.h>

    /* ketika kamu menggunakan kata kunci const dalam bahasa pemrograman C, 
    itu artinya kamu mau membuat sebuah variabel yang nilainya tidak bisa 
    diubah setelah dideklarasikan. Jadi singkat nya ini kayak memberi tahu kepada
    kita sendiri yang membuat program bahwa value yang ada di const tidak bisa diubah,
    jika diubah value nya akan terjadi error contoh:
    const int myNum = 15;  // myNum pasti akan selalu 15
    myNum = 10; // akan terjadi error jika diubah */

int main() {
    // konstanta
    const int LENGTH = 10;    // panjang
    const int WIDTH = 5;      // lebar
    const float PI = 3.14159; // konstanta untuk pi

    // variabel
    int area;                 // luas
    float circle;      // keliling lingkaran

    // menghitung luas persegi panjang
    area = LENGTH * WIDTH;
    
    // menghitung keliling lingkaran
    circle = 2 * PI * LENGTH;

    // menampilkan hasil
    printf("Panjang: %d\n", LENGTH);
    printf("Lebar: %d\n", WIDTH);
    printf("Luas Persegi Panjang: %d\n", area);
    printf("Keliling Lingkaran dengan radius %d: %.2f\n", LENGTH, circle);

    return 0;
}