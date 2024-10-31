#include <stdio.h>

int main() {

    int myNumbers[] = {10, 20, 43, 55};

    // mengakses array bagian/index 0
    printf("Ini untuk mengakses atau memilih array:\n");
    printf("%d\n", myNumbers[0]);

    // mengakses array bagian/index 0 yang sudah diubah isi nya
    printf("\nIni untuk mengakses atau memilih array yang sudah diubah:\n");
    myNumbers[0] = 33;
    printf("%d\n", myNumbers[0]);

    // looping di dalam array
    int i;

    printf("\nIni adalah loop didalam array:\n");
    for (i = 0; i < 4; i++) {
        printf("Index %d: %d\n", i, myNumbers[i]);
    }

    // set array size 
    int arraySize[4];

    // menambahkan elemen di dalam array
    arraySize[0] = 25;
    arraySize[1] = 50;
    arraySize[2] = 75;
    arraySize[3] = 100;

    printf("\n%d\n", arraySize[0]);

    // print array size
    printf("\n%lu\n", sizeof(arraySize));

    // multi-dimensional array
    int matrix[2][3] = { {2, 5, 6}, {3, 9, 7} };
    printf("\n%d\n", matrix[0][2]);

    return 0;
}