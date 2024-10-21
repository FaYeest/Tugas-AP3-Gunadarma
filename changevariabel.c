#include <stdio.h>

int main() {
    int myA = 1;
    int myanotherA = 3;

    // variabel myA akan sama dengan myanotherA
    myA = myanotherA;

    // yg tadinya myA = 1 sekarang jadi 3
    printf("%d\n", myA);

    return 0;
}