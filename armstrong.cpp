#include<stdio.h>
#include<math.h>

int main() {
    int n, copy, digit = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    copy = n;

    while (copy > 0) {
        copy = copy / 10;
        digit++;
    }

    copy = n;
    while (copy > 0) {
        sum = pow(copy % 10, digit);
        copy = copy / 10;
    }

    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}

