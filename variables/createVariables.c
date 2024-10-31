#include <stdio.h>

// Catatan
/* Sebuah format spesifier dimulai dengan tanda % lalu diikuti dengan sebuah karakter seperti:
   d menjadi %d untuk format integer
   f menjadi %f untuk format float
   c menjadi %c untuk format char
   Semua format ini harus berada di dalam tanda kutip seperti printf("{formatspesifier}", variable)
*/

int main()
{
    int num = 21;            // integer
    int myNum = 15;          // integer (whole number)
    float myFloatNum = 5.99; // floating point number
    char myLetter = 'F';     // character
    int changeValue1 = 20;   // menyimpan value pertama yang nanti akan diganti atau ditukar dengan variabel kosong
    int changeValue2;        // yang nanti akan menyimpan value pertama
    int x = 9;
    int y = 3;
    int a = 1, b = 5, c = 9; // ini adalah multiple variable cara kerja nya sama seperti diatas

    // Print variables
    printf("Print Variable\n");
    printf("Angka = %d\n\n", num);

    // Print variable format spesifier
    printf("Format Spesifier\n");
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%.2f\n", myFloatNum); // untuk mencetak 2 angka di belakang koma
    printf("%c\n\n", myLetter);    // Perbaikan di sini: tambahkan tanda kurung pada printf

    // Print change values
    changeValue2 = changeValue1; // Memindahkan nilai dari changeValue1 ke changeValue2
    printf("Ini adalah variabel changeValue2 yang sudah menyimpan value dari variabel changeValue1 = %d \n\n", changeValue2);

    // Print operasi matematika pada variabel
    int sum = x + y;
    printf("Hasil dari operasi penjumlahan yaitu: %d\n\n", sum);

    // Print multiple variabel
    printf("hasil operasi dari multiple variabel: %d\n\n", a + b + c);

    return 0;
}