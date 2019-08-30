#include <stdio.h>
#include <stdlib.h>
#include"TaskCiTwo.h"

int main()
{
    int select, num;
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
