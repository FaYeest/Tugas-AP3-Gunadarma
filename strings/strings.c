#include <stdio.h>
#include <string.h>

int main() {
    // mendeklarasikan dan menginisialisasi beberapa string
    char firstName[20] = "Muhammad"; // string pertama
    char lastName[20] = "Tubagus Farrasandi";    // string kedua
    char fullName[40];            // string untuk menyimpan nama lengkap

    // menggabungkan firstName dan lastName ke dalam fullName
    strcpy(fullName, firstName); // menyalin firstName ke fullName
    strcat(fullName, " ");        // menambahkan spasi
    strcat(fullName, lastName);   // menambahkan lastName ke fullName

    // menampilkan nama lengkap
    printf("Nama Lengkap: %s\n", fullName);
    
    // menghitung dan menampilkan panjang string
    printf("Panjang firstName: %lu\n", strlen(firstName)); // menggunakan strlen untuk menghitung panjang
    printf("Panjang lastName: %lu\n", strlen(lastName));
    printf("Panjang fullName: %lu\n", strlen(fullName));

    // membandingkan dua string
    char str1[] = "kucing";
    char str2[] = "singa";

    int comparisonResult = strcmp(str1, str2); // membandingkan str1 dan str2
    if (comparisonResult < 0) {
        printf("%s lebih kecil dari %s\n", str1, str2);
    } else if (comparisonResult > 0) {
        printf("%s lebih besar dari %s\n", str1, str2);
    } else {
        printf("%s sama dengan %s\n", str1, str2);
    }

    return 0;
}