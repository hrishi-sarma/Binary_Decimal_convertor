#include <stdio.h>
#include <math.h>


int btod(long long numB) {
    int numD = 0;
    int base = 1;
    while (numB > 0) {
        int a = numB % 10;
        numB /= 10;
        numD += a * base;
        base *= 2;
    }
    return numD;
}

long long dtob(int numD) {
    long long numB = 0;
    long long base = 1;
    while (numD > 0) {
        int rem = numD % 2;
        numD /= 2;
        numB += rem * base;
        base *= 10;
    }
    return numB;
}

int main() {
    int c;
    long long numB;
    int numD;

    while (1) {
        printf("Press 1 for Binary to Decimal, 2 for Decimal to Binary.");
        scanf("%d", &c);

        switch (c) {
            case 1:
                printf("Enter a Binary number: ");
                scanf("%lld", &numB);
                printf("Decimal conversion of %lld is: %d\n", numB,btod(numB));
                break;
            case 2:
                printf("Enter a decimal number: ");
                scanf("%d", &numD);
                printf("Binary conversion of %d is: %lld\n", numD,dtob(numD));
                break;
            default:
                printf("Invalid Input\n");
        }
    }

    return 0;
}
