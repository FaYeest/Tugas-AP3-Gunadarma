#include <stdio.h>

int main () {
    int num = 10; // Integer (bilangan bulat)
    float point = 5.55; // Floating point (bilangan koma)
    char lett = 'E'; // Character (huruf)
    double pi = 3.14; // Double (Bilangan desimal (lebih besar dari pada float))

    // print variabel
    printf("%d\n", num);
    printf("%f\n", point);
    printf("%.1f\n", point); // print sampai 1 angka dibelakang koma
    printf("%c\n", lett);
    printf("%f", pi);

    printf("\nMy Favorit number is %d\n", num);
    printf("My Favorit letter is %c\n", lett);
    printf("\nMy number is %d and my letter is %c\n", num, lett);
    printf("the number of phi is %f", pi);

    return 0;
}