#include <stdio.h>
int main() {
    int a, b, UCLN;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);
    if (a == 0 || b == 0) {
        UCLN = a + b;
    } else {
        while (a != b) {
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }
        UCLN = a;
    }
    printf("Uoc chung lon nhat la: %d\n", UCLN);
    return 0;
}
