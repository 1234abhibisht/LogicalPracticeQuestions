#include <stdio.h>
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
    int arr[3];
    printf("Enter a binary number 'remember to add spaces after each number': ");
    for(int i = 0; i <= 2; i++) {
        scanf("%d",&arr[i]);
    }
    complement(arr);
    return 0;
}
