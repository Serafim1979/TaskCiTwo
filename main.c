#include <stdio.h>
#include <stdlib.h>
#include"TaskCiTwo.h"

int main()
{
    int select, num, count;
    menu();

    while((select = get_int()) != 27)
    {
        switch(select)
        {
            case 1 : printf("paragraph 1\n");
                    calculation();
                break;
            case 2 : printf("paragraph 2\n");
                    fraction_calc();
                break;
            case 3 : printf("paragraph 3\n");
                    printf("Enter an integer: \n");
                    num = get_int();
                    num = sum_of_digits(num);
                    printf("The sum of the digits of the number you entered: %d", num);
                break;
            case 4 : printf("Enter a four-digit number: \n");
                     num = get_int();
                     count = countOfDigits(num);
                     if(count == 4)
                     {
                         num = check_for_divisibility_by_three_and_nine(num);
                         if(num == 1)
                            printf("The number is divided by three or nine.\n");
                         else
                            printf("The number is not divisible by three or nine.\n");
                     }
                     else
                     {
                         printf("Input format error. You entered a non-four digit number.\n");
                     }
                break;
            case 5 : printf("paragraph 5\n");
                break;
            case 6 : printf("paragraph 6\n");
                break;
            case 7 : printf("paragraph 3\n");
                    printf("Enter an integer: \n");
                    num = get_int();
                    num = reversed_number(num);
                    printf("Inverse number: %d\n", num);
                break;

            default: printf("Oops. Something went wrong\n");
                break;
        }
    }
    printf("Good bye!\n");
    return 0;
}
