#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Input number of terms: ");
    scanf("%d", &n);
    printf("The odd numbers are:\n");
    for(int i = 1, count = 0; count < n; i += 2, count++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d\n", n, sum);
    return 0;
}
