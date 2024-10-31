#include <stdio.h>

int main() {
    // operator aritmatika
    int a = 10;
    int b = 5;

    printf("===| OPERATOR ARITMATIKA |===\n");
    printf("Penjumlahan: %d\n", a + b); // hasil: 15
    printf("Pengurangan: %d\n", a - b); // hasil: 5
    printf("Perkalian: %d\n", a * b);   // hasil: 50
    printf("Pembagian: %d\n", a / b);    // hasil: 2
    printf("Sisa Pembagian: %d\n", a % b); // hasil: 0
    printf("\n\n");

    // operator penugasan
    int x = 10; // penugasan
    x += 5;     // sama saja dengan x = x + 5
    printf("===| OPERATOR PENUGASAN |===\n");
    printf("Nilai x setelah penugasan: %d\n", x); // hasil: 15
    printf("\n\n");

    // operator perbandingan
    printf("===| OPERATOR PERBANDINGAN |===\n");
    printf("Apakah a lebih besar dari b? %d\n", a > b); // hasil: 1 (true)
    printf("Apakah a lebih kecil dari b? %d\n", a < b); // hasil: 0 (false)
    printf("Apakah a sama dengan b? %d\n", a == b);    // hasil: 0 (false)
    printf("\n\n");

    // operator logika
    int c = 1; // true
    int d = 0; // false

    printf("===| OPERATOR LOGIKA |===\n");
    printf("c AND d: %d\n", c && d); // hasil: 0 (false)
    printf("c OR d: %d\n", c || d);  // hasil: 1 (true)
    printf("NOT c: %d\n", !c);        // hasil: 0 (false)
    printf("\n\n");

    // operator bitwise
    int e = 9;  // dalam biner: 1001
    int f = 2;  // dalam biner: 0010

    printf("===| OPERATOR BITWISE |===\n");
    printf("AND Bitwise: %d\n", e & f); // hasil: 0 (0000)
    printf("OR Bitwise: %d\n", e | f);  // hasil: 11 (1011)
    printf("XOR Bitwise: %d\n", e ^ f); // hasil: 11 (1011)

    return 0;
}