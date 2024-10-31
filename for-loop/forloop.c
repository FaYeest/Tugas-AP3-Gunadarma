#include <stdio.h>

int main() {
    // for loop
    int k;

    printf("Ini adalah penggunaan loop menggunakan for:\n");
    for (k = 0; k < 10; k++) { // Loop ini dimulai dari k = 0 dan berlanjut hingga k kurang dari 10, dengan k bertambah 1 setiap iterasi.
        printf("%d\n", k);
    }

    // nested loop
    int i, j;

    printf("\nIni adalah penggunaan nested loop (loop didalam loop):\n");
    // loop pertama yang akan di eksekusi 5 kali
    for (i = 1; i <= 3; i++) {
        printf("outer: %d\n", i);
        // loop kedua yang akan di eksekusi 3 kali untuk setiap iterasi loop pertama
        for (j = 1; j <= 3; j++) {
            printf("inner: %d\n", j);
        }
    }

    // real-life example
    int x;

    printf("\nAngka Genap dari 0 hingga 20\n");
    for (x = 0; x <= 20; x += 2) {
        printf("%d\n", x);
    }

    return 0;
}