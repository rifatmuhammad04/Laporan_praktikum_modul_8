#include <stdio.h>
#include <stdbool.h>

struct Dompet { char nama[50]; int saldo; };

void topup(struct Dompet *d, int x) { d->saldo += x; }

bool bayar(struct Dompet *d, int x) {
    if (d->saldo < x) return false;
    d->saldo -= x;
    return true;
}

int main() {
    struct Dompet d;
    int n, nom[100];
    char jenis[100][5];

    scanf("%s %d %d", d.nama, &d.saldo, &n);
    for (int i = 0; i < n; i++) scanf("%s %d", jenis[i], &nom[i]);

    for (int i = 0; i < n; i++) {
        if (jenis[i][0] == 'T') {
            topup(&d, nom[i]);
            printf("Top up %d berhasil, saldo = %d\n", nom[i], d.saldo);
        } else if (bayar(&d, nom[i]))
            printf("Bayar %d berhasil, saldo = %d\n", nom[i], d.saldo);
        else
            printf("Bayar %d gagal, saldo tidak cukup\n", nom[i]);
    }
    printf("Saldo akhir %s = %d\n", d.nama, d.saldo);
    return 0;
}