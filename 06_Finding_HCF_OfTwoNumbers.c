/* greatest common divisor or highest common factor */
#include <stdio.h>
int minimum(int firstnumber, int secondnumber)
{
    int x;
    if (firstnumber > secondnumber)
        x = firstnumber;
    else
        x = secondnumber;
    return x;
}
int hcf(int firstnumber, int secondnumber)
{
    int hcfab;
    for (int i = 1; i <= minimum(firstnumber, secondnumber); i++)
    {
        if (firstnumber % i == 0 && secondnumber % i == 0)
        {
            hcfab = i;
        }
    }
    printf("Highest common factor is : %d", hcfab);
}
int main()
{
    int firstnumber;
    printf("Enter firs tnumber : ");
    scanf("%d", &firstnumber);
    int secondnumber;
    printf("Enter second number : ");
    scanf("%d", &secondnumber);
    hcf(firstnumber, secondnumber);
    return 0;
}
