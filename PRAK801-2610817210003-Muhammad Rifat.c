#include <stdio.h>

int main() {
    int Nilai;
    int *P = &Nilai;

    scanf ("%d", &Nilai);

    printf("Nilai variabel = %d\n", Nilai);
    printf("Alamat variabel = %p\n", (void *)&Nilai);
    printf("Nilai melalui pointer = %d\n", *P);

    *P = *P * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", Nilai);
    return 0;
}