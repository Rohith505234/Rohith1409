#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter number of natural terms do you want: ");
    scanf("%d", &n);
    printf("The first %d natural numbers are:\n", n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nThe Sum of Natural Number upto %d terms : %d\n", n, sum);
    return 0;
}
