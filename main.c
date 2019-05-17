
#include "pract.h"

int main()
{
    fraction num1,num2,num3;
    fraction *num4;
    input(&num1);
    input(&num2);
    out(num1);
    out(num2);
    num3=add(num1,num2);
    printf("Summa = ");
    out(num3);

    sub(num1,num2,&num3);
    printf("Raznoct = ");
    out(num3);

    num4=mult(num1,num2);
    printf("Mult = ");
    out(*num4);
    free(num4);
    num3=divide(&num1,&num2);
    printf("Delenie = ");
    out(num3);
 
 return 0;
}
