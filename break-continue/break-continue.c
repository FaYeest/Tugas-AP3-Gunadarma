#include <stdio.h>

int main() {
    int i;

    // contoh penggunaan 'break' dalam loop
    printf("Ini adalah contoh break dalam loop:\n");
    for (i = 0; i < 20; i++) {
        // jika i sama dengan 7, hentikan loop
        if (i == 7) {
            break; // menghentikan loop
        }
        printf("%d\n", i);
    }

    // contoh penggunaan 'continue'
    printf("\nIni adalah contoh continue dalam loop:\n");
    for (i = 0; i < 20; i++) {
        // jika i sama dengan 7, lewati iterasi ini
        if (i == 7) {
            continue; // melewatkan/skip kode di loop ini lalu melanjutkan nya lagi
        }
        printf("%d\n", i);
    }

    return 0;
}