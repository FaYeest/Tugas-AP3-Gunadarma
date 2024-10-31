#include <stdio.h>

int main() {
    // while loop
    int i = 0;

    printf("While loop:\n");
    while (i < 6) {
        printf("Angka %d\n", i);
        i++;
    }

    // do-while loop
    int j = 0;

    printf("\nDo-While loop:\n");
    do {
        printf("Angka %d\n", j);
        j++;
    } while (j < 6);

    // real-life example
    int k = 0;

    printf("\n\nDeret angka genap dari 0 hingga 10:\n");
    do {
        printf("%d\n", k);
        k += 2; // k + 2 untuk mendapatkan angka genap berikut nya karena ini dimulai dari 0
    } while  (k <= 10);

    return 0;
}