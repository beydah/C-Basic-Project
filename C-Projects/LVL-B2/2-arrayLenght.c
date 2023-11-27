#include <stdio.h>

int main() {
    int arr[100];
    int n, i = 0;

    printf("Enter a Number (0 to Exit)\n");

    do {
        printf("Enter %d. Number: ", i + 1);
        scanf("%d", &n);

        if (n != 0 && i < 100) {
            arr[i] = n;
            i++;
        }
    } while (n != 0);

    printf("Number of Elements in the Array: %d", i);

    return 0;
}

