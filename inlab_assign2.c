/******************************************************************************

HANDS-ON LAB #2: Conditions
In-lab Assignment #2

*******************************************************************************/
#include <stdio.h>

void main()
{
    int int_num;

    printf("Enter a digit (0, 1, ..., 9): ");
    scanf("%d", &int_num);

    if ( ( 0 <= int_num ) &&
         ( int_num <= 9 ) ) {
        // Valid digit
        switch ( int_num )
        {
            case 0:
                printf("Entered digit is: ZERO");
                break;
            case 1:
                printf("Entered digit is: ONE");
                break;
            case 2:
                printf("Entered digit is: TWO");
                break;
            case 3:
                printf("Entered digit is: THREE");
                break;
            case 4:
                printf("Entered digit is: FOUR");
                break;
            case 5:
                printf("Entered digit is: FIVE");
                break;
            case 6:
                printf("Entered digit is: SIX");
                break;
            case 7:
                printf("Entered digit is: SEVEN");
                break;
            case 8:
                printf("Entered digit is: EIGHT");
                break;
            case 9:
                printf("Entered digit is: NINE");
                break;
            default:
                break;
        }
        
    } else {
        // Invalid digit
        printf("Warning: Entered number is not a digit.");
    }

}
