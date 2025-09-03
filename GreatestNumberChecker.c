#include <stdio.h>
int greatest(int n, int num[]) {
    int max = num[0];
    for(int i = 1; i <= n-1; i++) {
        if(num[i] > max) max = num[i];
    }
    printf("Greatest number is : %d",max);
    return max;
}
int main() {
    int n;
    printf("Enter how many numbers you want to compare : ");
    scanf("%d",&n);
    int num[n];
    printf("Enter your numbers : ");
    for(int i = 0; i <= n-1; i++) {
        scanf("%d",&num[i]);
    }
    greatest(n,num);
    return 0   ;
}
