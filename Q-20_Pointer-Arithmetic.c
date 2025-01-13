#include <stdio.h>

int main()  {
    //1. Arithemetic between integer and pointer
    int a=10; //Int occupies 4 bytes
    int *p_int;
    p_int = &a;

    printf("\nValue of a = %d & Address of a = %p",a,&a);
    printf("\nValue of pointer-to-a = %p & Address of pointer-to-a = %p",p_int,&p_int);

    p_int = p_int + 2;
    printf("\nEg-1:ADDITION --> Adding 2 to pointer-to-a\n Value of pointer-to-a: %p & Address of pointer-to-a: %p",p_int,&p_int);
    
    p_int = p_int - 5;
    printf("\nEg-2:SUBSTRACTION --> Subtracting 5 from pointer-to-a\n Value of pointer-to-a: %p & Address of pointer-to-a: %p",p_int,&p_int);


    //2. Arithmetic between 2 pointers
    double p=3.2, q=4.8; //Double occupies 8 bytes
    double *pointer_p, *pointer_q;

    pointer_p=&p;
    pointer_q=&q; 

    printf("\n\nValue of pointer-to-p: %p & Address of pointer-to-p: %p",pointer_p,&pointer_p);
    printf("\nValue of pointer-to-q: %p & Address of poitner-to-q: %p",pointer_q,&pointer_q);

    long int subtract = pointer_q - pointer_p;  //NOTE - Pointers can only be subtracted from each other, and no other arithmetic operation between 2 pointers is valid
    printf("\nNumber of double blocks between pointer-to-q and pointer-to-p (or) subtraction of pointer-to-p form pointer-to-q : %ld",subtract);

    return 0;
}
