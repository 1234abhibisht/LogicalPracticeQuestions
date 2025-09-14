#include <stdio.h>
int countnumber(int a) {
    int count = 0;
    while(a != 0) {
        a = a / 10;
        count++;
    }
    return count;
}
void complement(int arr[]) { 
    for(int j = 0; j <= 2; j++) {
        if(arr[j] == 1) {
            arr[j] = 0;
        }
        else if(arr[j] == 0) {
            arr[j] = 1;
        }
        printf("%d ",arr[j]);
    }
}
int main() {
    /* I have asked user a number of any digit and stored it in a variable named n*/
    int n;
    printf("Enter a binary number : ");
    scanf("%d",&n);
    /* now I have counted number of digits in the number and made an array having containers 
       according to the number of digits */
    int arr[countnumber(n)];
    int lastdigit = 0;
    /* then I have stored number entered in variable n in that array, each index having one element of that number*/
    for(int i = countnumber(n) - 1; i >= 0; i--) {
        lastdigit = n % 10;
        arr[i] = lastdigit;
        n = n / 10;
    }
    complement(arr);
    return 0;
}
