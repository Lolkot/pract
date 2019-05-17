 #include "C:\\ddd\\fff\\pract.h"
 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
  void input (fraction   *pd)
 {
     setlocale(LC_ALL,"rus");
       printf("Input numerator : ");
     scanf("%d",&(pd->numerator));

      printf("Input denominator : ");
     scanf("%d",&(pd->denominator));

     if (pd->denominator == 0)
     {
         printf("Error");
         exit(0);
     }
 }

 void out(fraction dr)
  {
      printf("\n drop :%d/%d \n",dr.numerator,dr.denominator);
  }
  fraction add(fraction dr1 , fraction dr2)
  {
      fraction dr;
       if (dr1.denominator!=dr2.denominator){
        dr.numerator=dr1.numerator*dr2.denominator+dr2.numerator*dr1.denominator;
       dr.denominator=dr1.denominator*dr2.denominator;
       } else{
       dr.denominator=dr1.denominator;
       dr.numerator=dr1.numerator+dr2.numerator;
       }
       return dr;
  }
   void sub (fraction dr1, fraction dr2, fraction *pdr)
   {
       if (dr1.denominator != dr2.denominator)
       {
           pdr -> numerator = dr1.numerator*dr2.denominator-dr2.numerator*dr1.denominator;
           pdr -> denominator = dr1.denominator*dr2.denominator;
       } else
       {
           pdr -> numerator = dr1.numerator - dr2.numerator;
           pdr -> denominator = dr1.denominator;
       }
   }
fraction *mult (fraction dr1, fraction dr2)
{
    fraction *p;
    p=(fraction*)malloc(sizeof(fraction));
    p -> numerator = dr1.numerator*dr2.numerator;
    p -> denominator = dr1.denominator*dr2.denominator;
    return p;
}
    fraction divide (fraction *pd1, fraction *pd2)
    {
        fraction p;
        p.numerator=pd1 -> numerator * pd2 -> denominator;
        p.denominator = pd1 -> denominator * pd2 -> numerator;
        return p;

    }


