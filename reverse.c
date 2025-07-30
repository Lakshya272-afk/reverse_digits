#include <stdio.h>

int main() {
    int number, reversed;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    reversed = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100);
    
    printf("Reversed number: %d\n", reversed);

    return 0;
}

