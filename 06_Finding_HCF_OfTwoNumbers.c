/* greatest common divisor or highest common factor */
/* for hcf, first number should be greater than second number*/
#include <stdio.h>
int hcf(int firstnumber, int secondnumber)
{
    if (secondnumber == 0)
    { /* base case */
        return firstnumber;
    }
    int x = hcf(secondnumber, firstnumber % secondnumber);
    return x;
}
int main()
{
    int firstnumber;
    printf("Enter firs tnumber : ");
    scanf("%d", &firstnumber);
    int secondnumber;
    printf("Enter second number : ");
    scanf("%d", &secondnumber);
    if (firstnumber < secondnumber)
    {
        printf("Invalid values");
    }
    else
    {
        printf("HCF of %d and %d is %d", firstnumber, secondnumber, hcf(firstnumber, secondnumber));
    }
    return 0;
}
