/* ncr = n!/r!(n-r)! */
#include <stdio.h>
int nfact(int n, int r) {
    int mul = 1;  /* mul = n! */
    for(int i = n; i >= 1; i--) {
        mul = mul * i;
    } 
    return mul;
}
int rfact(int n, int r) {
    int mul2 = 1;  
    for(int j = r; j >= 1; j--) {
        mul2 = mul2 * j;  /* mul2 = r! */
    }
    return mul2;
}
int nrfact(int n, int r) {
    /* (n-r)! */
    int a = n - r;
    int mul3 = 1;
    for(int k =a ; k >= 1; k--) {
        mul3 = mul3 * k;
    }
    return mul3;
}
int main() {
    int n;
    printf("Enter number of items : ");
    scanf("%d",&n);
    int r;
    printf("Enter number of selected items from n: ");
    scanf("%d",&r);
    int x = nfact(n,r);
    int y = rfact(n,r) * nrfact(n,r);
    printf("Combination of %d and %d is : %d",n, r, x/y);
    return 0;
}
