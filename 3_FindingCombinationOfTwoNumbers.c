/* ncr = n!/r!(n-r)! */
/* ncr = n!/r!(n-r)! */
#include <stdio.h>
int fact(int n) {  /* this function is for factoral loop */
   int mul = 1;
    for(int i = n; i >= 1; i--) {
        mul = mul * i;
    }
    return mul;
}
int Combination(int n, int r) {   /* this function is for using loop in formula */
    int x = fact(n);
    int y = fact(r) * fact(n-r);
    printf("Combination of %d and %d is : %d",n, r, x/y);
}
int main() {
    int n;
    printf("Enter number of items : ");
    scanf("%d",&n);
    int r;
    printf("Enter number of selected items from n: ");
    scanf("%d",&r);
    fact(n);
    Combination(n,r);
    return 0;
}
