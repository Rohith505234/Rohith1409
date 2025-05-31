#include <stdio.h>
int main() {
    int a, res;
    printf("Enter value for a: ");
    scanf("%d", &a);
    res = a++;
    printf("a is %d and res is %d (a++)\n", a, res);
    res = a--;
    printf("a is %d and res is %d (a--)\n", a, res);
    res = ++a;
    printf("a is %d and res is %d (++a)\n", a, res);
    res = --a;
    printf("a is %d and res is %d (--a)\n", a, res);
    return 0;
}
