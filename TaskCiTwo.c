#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include"TaskCiTwo.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu()
{
    printf("\n\n\t\t\tSelect the desired action from the menu item.\n");
    printf("1. Calculate the sum, difference, product and quotient of two values x1 and x2.\n");
    printf("2. Calculate the sum, difference, product and quotient of two natural fractions (a/b) and (c/d). \n");
    printf("Print the results as natural fractions.\n");
    printf("3. Calculate the sum of two-digit, three-digit and four-digit numbers.\n");
    printf("4. Check for four-digit numbers divisibility rules for 3 and 9.\n");
    printf("5. Check for four-digit numbers signs of divisibility by 11.\n");
    printf("6. Print a four-digit integer (with spaces between the digits).\n");
    printf("7. Replace a four-digit integer with a number obtained by writing its digits in reverse order.\n");
    printf("8. Enter time in HH:mm:SS format, convert to seconds.\n");
    printf("9. Enter time in seconds, convert to HH:mm:SS format.\n");
    printf("10.Print the length of the interval between two points of time within a day (all format HH: mm: SS)\n");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int get_int(void)
{
    int input;
    char ch;
    while(scanf("%d", &input) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
            printf(" is not integer\n");
            printf("Please enter an integer");
    }
    return input;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void calculation(void)
{
    double a, b;
    printf("Enter a value of x1: ");
    a = get_double();
    printf("Enter a value of x2: ");
    b = get_double();
    if(b != 0)
    {
        printf("%lg + %lg = %lg\n", a, b, a + b);
        printf("%lg - %lg = %lg\n", a, b, a - b);
        printf("%lg * %lg = %lg\n", a, b, a * b);
        printf("%lg / %lg = %lg\n", a, b, a / b);
    }
    else
    {
        printf("%lg + %lg = %lg\n", a, b, a + b);
        printf("%lg - %lg = %lg\n", a, b, a - b);
        printf("%lg * %lg = %lg\n", a, b, a * b);
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double get_double(void)
{
    double input;
    char ch;
    while(scanf("%lg", &input) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
            printf(" it's not a number\n");
            printf("Please enter a number\n");
    }
    return input;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fraction_calc(void)
{
    int a, b, c, d, num, denom, nod;
    char ch;
    printf("Enter a value for the first fraction in the x/x format:\n");
    scanf("%d%c%d", &a, &ch, &b);
    printf("%d%c%d\n", a, ch, b);
    printf("Enter a value for the second fraction in the x/x format:\n");
    scanf("%d%c%d", &c, &ch, &d);

    //addition
    num = (a * d) + (c * b);
    denom = b * d;
    nod = nod_fraction(num, denom);
    if(nod)
    {
        num = num/nod;
        denom = denom/nod;
    }
    printf("%d%c%d + %d%c%d = %d%c%d\n", a, ch, b, c, ch, d, num, ch, denom);

    //difference
    num = (a * d) - (c * b);
    denom = b * d;
    nod = nod_fraction(num, denom);
    if(nod)
    {
        num = num/nod;
        denom = denom/nod;
    }
    printf("%d%c%d - %d%c%d = %d%c%d\n", a, ch, b, c, ch, d, num, ch, denom);

    //multiplication
    num = a * c;
    denom = b * d;
    nod = nod_fraction(num, denom);
    if(nod)
    {
        num = num/nod;
        denom = denom/nod;
    }
    printf("%d%c%d * %d%c%d = %d%c%d\n", a, ch, b, c, ch, d, num, ch, denom);

    //division
    num = a * d;
    denom = b * c;
    nod = nod_fraction(num, denom);
    if(nod)
    {
        num = num/nod;
        denom = denom/nod;
    }
    printf("%d%c%d / %d%c%d = %d%c%d\n", a, ch, b, c, ch, d, num, ch, denom);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int nod_fraction(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int sum_of_digits(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int reversed_number(int n)
{
    int remainder, rnum = 0;
    while(n != 0)
    {
        remainder = n % 10;
        rnum = rnum * 10 + remainder;
        n /= 10;
    }
    return rnum;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int check_for_divisibility_by_three_and_nine(int n)
{
    int sum;
    sum = sum_of_digits(n);
    if (sum % 3 == 0 || n % 9 == 0)
        return 1;
    else
        return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int countOfDigits(int n)
{
    int count = 0;
    while(n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
