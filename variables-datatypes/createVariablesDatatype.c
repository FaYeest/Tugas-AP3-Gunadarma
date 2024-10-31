#include <stdio.h>

// Catatan
/* Sebuah format spesifier dimulai dengan tanda % lalu diikuti dengan sebuah karakter seperti:
   d menjadi %d untuk format integer
   f menjadi %f untuk format float
   c menjadi %c untuk format char
   s menjadi %s untuk format string
   Semua format ini harus berada di dalam tanda kutip seperti printf("{formatspesifier}", variable)
*/

int main()
{
    // deklarasi variabel
    int num = 21;            // integer
    int myNum = 15;          // integer (whole number)
    float myFloatNum = 5.99; // floating point number
    char myLetter = 'F';     // character

    // print variables
    printf("Print Variable\n");
    printf("Angka = %d\n\n", num);

    // print variable format spesifier
    printf("\nFormat Spesifier\n");
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%.2f\n", myFloatNum); // untuk mencetak 2 angka di belakang koma
    printf("%c\n\n", myLetter);


    // change values
    int changeValue1 = 20;   // menyimpan value pertama yang nanti akan diganti atau ditukar dengan variabel kosong
    int changeValue2;        // yang nanti akan menyimpan value pertama

    // print change values
    changeValue2 = changeValue1; // Memindahkan nilai dari changeValue1 ke changeValue2
    printf("\nIni adalah variabel changeValue2 yang sudah menyimpan value dari variabel changeValue1 = %d \n\n", changeValue2);


    // operasi matematika pada variabel
    int x = 9;
    int y = 3;

    // print operasi matematika pada variabel
    int sum = x + y;
    printf("Hasil dari operasi penjumlahan yaitu: %d\n\n", sum);


    // multiple variabel
    int a = 1, b = 5, c = 9; 

    // print multiple variabel
    printf("hasil operasi dari multiple variabel: %d\n\n", a + b + c);


    // real-life Example
    char personName[] = "Muhammad Tubagus Farrasandi";
    int personAge = 19;                                                                 // umur
    float personHeight = 1.75;                                                          // satuan meter
    char personGender = 'M';                                                            // jenis kelamin
    char personAddress[] = "472-1042, Shimonara Naramoto, Yawata-shi, Kyoto, Japan";   // alamat

    // print real-life example
    printf("\nInformasi Pribadi\n");
    printf("Nama            : %s\n", personName);
    printf("Umur            : %d\n", personAge);
    printf("Tinggi Badan    : %.2f\n", personHeight);
    printf("Jenis Kelamin   : %c\n", personGender);
    printf("Alamat          : %s\n\n", personAddress);


    // ukuran memori yang dipakai dari setiap jenis data type
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    // print ukuran memori setiap tipe data (bytes)
    printf("\nUkuran Memori Dari Setiap Tipe Data\n");
    printf("Int     :%lu\n", sizeof(myInt));
    printf("Float   :%lu\n", sizeof(myFloat));
    printf("Double  :%lu\n", sizeof(myDouble));
    printf("Char    :%lu\n", sizeof(myChar));

    return 0;
}