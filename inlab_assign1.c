/******************************************************************************

HANDS-ON LAB #2: Conditions
In-lab Assignment #1

*******************************************************************************/
#include <stdio.h>

void main()
{
    double dbl_num;

    printf("Enter a real number: ");
    scanf("%lf", &dbl_num);


    printf("%lf matches conditions: ", dbl_num);

    // Condition A: 3 <= x < 8.5
    if ( ( 3 <= dbl_num ) &&
         ( dbl_num < 8.5 ) ) {
        printf("A, ");
    } else {
        printf("not A, ");
    }

    // Condition B: (x < 3) OR (5.4 < x <= 7.3) OR (x > 13)
    if ( ( dbl_num < 3 ) ||
         ( ( 5.4 < dbl_num ) &&
           ( dbl_num <= 7.3 ) ) ||
         ( dbl_num > 13 ) ) {
        printf("B, ");
    } else {
        printf("not B, ");
    }

    // Condition C: (x != 3) AND (x < 9.75)
    if ( ( dbl_num != 3 ) &&
         ( dbl_num < 9.75 ) ) {
        printf("C");
    } else {
        printf("not C");
    }


}
