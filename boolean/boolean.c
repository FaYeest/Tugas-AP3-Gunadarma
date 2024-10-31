#include <stdio.h>
#include <stdbool.h> // untuk menggunakan tipe data bool

int main() {
    int number = 7; 
    bool isEven;    // variabel boolean untuk menyimpan hasil

    // memeriksa apakah angka genap atau ganjil
    if (number % 2 == 0) {
        isEven = true;  // jika sisa bagi 2 adalah 0, maka angka genap
    } else {
        isEven = false; // jika tidak, maka angka ganjil
    }

    // akan menampilkan hasil jika syarat terpenuhi
    if (isEven) {
        printf("%d adalah angka genap.\n", number);
    } else {
        printf("%d adalah angka ganjil.\n", number);
    }

    return 0;
}