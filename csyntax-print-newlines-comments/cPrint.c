#include <stdio.h>

    /* this is a multi-lines comment in c. 
    if theres a text or a line in here this is will be ignored by the compiler */

    // this is a single-lines comment in c. if you create a newlines it will not be a comments but a code
    
int main() {
    // String ini akan menjadi array jadi panjang kesamping bukan ke bawah
    printf("Hello World!");
    printf("Nama saya Farras!");
    printf("Salam Kenal! :)");

    // \n akan membuat new line, jika \n\n akan membuat new line yang kosong/tidak ada isinya
    printf("\n\nHello World!\n");
    printf("Nama saya Farras!\n");
    printf("Salam Kenal! :)\n\n");
    return 0;
}