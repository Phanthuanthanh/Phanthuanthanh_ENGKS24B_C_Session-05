#include <stdio.h>

int main() {
    int n, sum = 0; 

    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So phai lon hon 0. Vui long nhap lai. \n");
        }
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        sum += i; 
    }
	printf("Tong cac so tu 1 den %d là: %d\n", n, sum);

    return 0;
}


