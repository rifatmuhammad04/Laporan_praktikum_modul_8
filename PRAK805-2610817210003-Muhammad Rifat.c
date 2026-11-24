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
    int n, nom[100], hasil[100], sisa[100];
    char jenis;

    scanf("%s %d %d", d.nama, &d.saldo, &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c %d", &jenis, &nom[i]);

        if (jenis == 'T') {
            topup(&d, nom[i]);
            hasil[i] = 1;
        } else if (bayar(&d, nom[i])) {
            hasil[i] = 2;
        } else {
            hasil[i] = 3;
        }
        sisa[i] = d.saldo;
    }

    for (int i = 0; i < n; i++) {
        if (hasil[i] == 1) {
            printf("Top up %d berhasil, saldo = %d\n", nom[i], sisa[i]);
        } else if (hasil[i] == 2) {
            printf("Bayar %d berhasil, saldo = %d\n", nom[i], sisa[i]);
        } else {
            printf("Bayar %d gagal, saldo tidak cukup\n", nom[i]);
        }
    }
    printf("Saldo akhir %s = %d\n", d.nama, d.saldo);
    return 0;
}
