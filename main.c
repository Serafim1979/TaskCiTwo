#include <stdio.h>
#include <stdlib.h>
#include"TaskCiTwo.h"

int main()
{
    int select;
    menu();

    while((select = get_int()) != 27)
    {
        switch(select)
        {
            case 1 : printf("paragraph 1\n");
                    calculation();
                break;
            case 2 : printf("paragraph 2\n");
                break;
            case 3 : printf("paragraph 3\n");
                break;

            default: printf("Oops. Something went wrong\n");
                break;
        }
    }
    printf("Good bye!\n");
    return 0;
}
