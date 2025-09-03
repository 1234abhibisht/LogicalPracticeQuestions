#include <stdio.h>
int PrimeComposite(int n) {
    int a=0;
    for(int i=2; i<=n-1; i++) {
        if(n%i==0) a=1;
        else a=0;
        break;
    }
    if(n==1) printf("%d is neither prime nor composite",n);
    else if(a==1) printf("%d is composite",n);
    else printf("%d is prime",n);
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    PrimeComposite(n);
    return 0;
}
