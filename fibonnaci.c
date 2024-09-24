#include <stdio.h>

int isFibonacci(int num) {
    int a = 0, b = 1, next = 0;

    if (num == 0 || num == 1) {
        return 1;
    }

    while (next < num) {
        next = a + b;
        a = b;
        b = next;
    }

    return (next == num);
}

int main() {
    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);

    if (isFibonacci(number)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", number);
    } else {
        printf("O numero %d NAO pertence a sequencia de Fibonacci.\n", number);
    }

    return 0;
}
