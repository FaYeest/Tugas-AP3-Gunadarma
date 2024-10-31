#include <stdio.h>

int main() {
  int myNumber = 25;  // variabel bertipe int, diinisialisasi dengan nilai 25
  int* numPtr = &myNumber;  // variabel pointer dengan nama numPtr, yang menyimpan alamat dari myNumber

  // Mmnampilkan nilai myNumber (25)
  printf("%d\n", myNumber);

  // menampilkan alamat memori dari myNumber
  printf("%p\n", &myNumber);

  // menampilkan alamat memori dari myNumber menggunakan pointer
  printf("%p\n", numPtr);

  return 0;
}