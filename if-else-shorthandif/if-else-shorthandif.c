#include <stdio.h>

int main() {
    // if statement 
    int a = 23;
    int b = 8;

    printf("Ini adalah contoh dari if statement: \n\n");
    if (a > b ) {
        printf("%d Lebih besar dari %d\n\n", a, b);
    }

    // else statement
    int c = 43;
    int d = 22;

    printf("Ini adalah contoh dari else statement:\n");
    if (c == d) {
        printf("%d Sama dengan %d\n\n", c, d);
    }
    else {
        printf("%d Tidak sama dengan %d\n\n", c, d);
    }

    // else if statement
    int e = 20;

    printf("Ini adalah contoh dari else if statement:\n");
    if (e > 9) {
        printf("%d lebih besar dari 20\n\n", e);
    }
    else if (e == 20) {
        printf("%d sama dengan 20\n\n", e);
    }
    else {
        printf("%d kurang dari 20\n\n", e);
    }

    // short hand if statement
    int x = 10;
    int y = 20;

    printf("Ini adalah contoh dari short hand if statement:\n");
    int max = (x > y) ? x : y;
    printf("Nilai maksimum dari %d dan %d adalah %d\n\n", x, y, max);

    // real-life examples
    int suhu = 25;
    
    printf("Ini adalah contoh dari real-life examples dengan pengaturan suhu ruangan:\n");
    if (suhu <= 20) {
        printf("Suhu terlalu dingin, hidupkan pemanas.\n\n");
    } else if (suhu >= 25) {
        printf("Suhu terlalu panas, hidupkan pendingin udara.\n\n");
    } else {
        printf("Suhu ideal, tidak perlu tindakan.\n\n");
    }

    return 0;
}