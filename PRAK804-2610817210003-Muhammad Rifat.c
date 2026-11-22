#include <stdio.h>

struct Peserta {
    char nama[50];
    int umur;
    int skor;
};

int main() {
    struct Peserta data[10];
    int n, terbaik = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", data[i].nama, &data[i].umur, &data[i].skor);
    }

    for (int i = 1; i < n; i++) {
        if (data[i].skor > data[terbaik].skor) {
            terbaik = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n",
           data[terbaik].nama, data[terbaik].skor);
    return 0;
}