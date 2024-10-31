#include <stdio.h>
int main() {
    int myNum; // mendeklarasikan variabel untuk menyimpan angka yang dimasukkan oleh pengguna
    int num1, num2, sum; // mendeklarasikan variabel untuk dua angka dan hasil penjumlahan

    // menampilkan pesan untuk meminta pengguna memasukkan angka
    printf("Type a number and press enter: \n");
    // membaca angka yang dimasukkan oleh pengguna dan menyimpannya di myNum
    scanf("%d", &myNum);
    // menampilkan angka yang telah dimasukkan oleh pengguna
    printf("Your number is: %d\n", myNum);

    // meminta pengguna untuk memasukkan dua angka
    printf("Masukkan dua angka, pisahkan dengan spasi: \n");
    // membaca dua angka yang dimasukkan oleh pengguna
    scanf("%d %d", &num1, &num2);
    // menghitung jumlah dari kedua angka
    sum = num1 + num2;
    // menampilkan hasil penjumlahan
    printf("Jumlah dari %d dan %d adalah: %d\n", num1, num2, sum);

    return 0;
}