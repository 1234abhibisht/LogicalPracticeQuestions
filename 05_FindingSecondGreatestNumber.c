#include <stdio.h>
int Secondgreatest(int n, int num[]) {
    int max = num[0];
    int max2 = 0;
    for(int i = 1; i <= n-1; i++) {
        if(num[i] > max) {
            max2 = max;
            max = num[i];
        }
        else if(max > num[i] && max != num[i]) {
            max2 == num[i];
        }
        else printf("Invalid Operation");
    }
    printf("Second Greatest number is : %d",max2);
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
    Secondgreatest(n,num);
    return 0   ;
}
