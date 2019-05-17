#ifndef PRACT_H_INCLUDED
#define PRACT_H_INCLUDED

typedef struct rational_fraction {
    int numerator; /* ��������� */
    int denominator; /* ����������� */
    } fraction; /* ��� */

    void input (fraction *pd);
    void out (fraction dr);
    fraction add (fraction dr1, fraction dr2);
    void sub (fraction dr1, fraction dr2, fraction *pdr);
    fraction *mult (fraction dr1, fraction dr2);
    fraction divide (fraction *pd1, fraction *pd2);
    int c(char *p);


#endif // PRACT_H_INCLUDED
