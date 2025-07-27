#include <stdio.h>

int square_num();
int cube_num();
int pow4();
int pow5();
int pow6();
int pow7();
int pow8();
int pow9();
int pow10();

int main()
{
    long int input;

    printf("Give me a number to square: ");
    scanf("%d", &input);
    square_num(&input);
    printf("%d^2 = %d\n", input, square_num(&input));
    cube_num(&input);
    printf("%d^3 = %d\n", input, cube_num(&input));
    pow4(&input);
    printf("%d^4 = %d\n", input, pow4(input));
    pow5(&input);
    printf("%d^5 = %d\n", input, pow5(&input));
    pow6(&input);
    printf("%d^6 = %d\n", input, pow6(&input));
    pow7(&input);
    printf("%d^7 = %d\n", input, pow7(&input));
    pow8(&input);
    printf("%d^8 = %d\n", input, pow8(&input));
    pow9(&input);
    printf("%d^9 = %d\n", input, pow9(&input));
    pow10(&input);
    printf("%d^10 = %d\n", input, pow10(&input));

    return 0;
}

int square_num(int *input)
{
    int num1 = 0;

    num1 = *input * *input;

    return num1;
}

int cube_num(int *input)
{
    int num2 = 0;

    num2 = *input * *input * *input;

    return num2;
}

int pow4(int input)
{
    int num3 = 0;

    num3 = input * input * input * input;

    return num3;
}

int pow5(int *input)
{
    int num4 = 0;

    num4 = *input * *input * *input * *input * *input;

    return num4;
}

int pow6(int *input)
{
    int num5 = 0;

    num5 = *input * *input * *input * *input * *input * *input;

    return num5;
}

int pow7(int *input)
{
    int num6 = 0;

    num6 = *input * *input * *input * *input * *input * *input * *input;

    return num6;
}

int pow8(int *input)
{
    int num7 = 0;

    num7 = *input * *input * *input * *input * *input * *input * *input * *input;

    return num7;
}

int pow9(int *input)
{
    int num8 = 0;

    num8 = *input * *input * *input * *input * *input * *input * *input * *input * *input;

    return num8;
}

int pow10(int *input)
{
    int num9 = 0;

    num9 = *input * *input * *input * *input * *input * *input * *input * *input * *input * *input;

    return num9;
}