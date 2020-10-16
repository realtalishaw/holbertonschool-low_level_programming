#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - fds
 * @argc: fds
 * @argv: ddfd
 *
 * Return: dsa
 */
int main(int argc, char *argv[])
{
    int i;
    for (i = 0; argv[1][i] != 0; i++)
    {
       
        if (_isdigit(argv[1][i]) == 0)
        {
            printf("Error\n");
            exit(98);
        }
    }
    for (i = 0; argv[2][i] != 0; i++)
    {
        if (_isdigit(argv[2][i]) == 0)
        {
            printf("Error\n");
            exit(98);
        }
    }
    if (argc == 3)
    {
        
        if (i > 10)
        {
            printf("Number is Huge!\n");
            mul(argv[1], argv[2]);
        }
         printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
    }
    else
    {
        printf("Error\n");
        exit(98);
    }
    return (0);
}
/**
 * _atoi - fdss
 * @str: dss
 *
 * Return: dsd
 */
int _atoi(char *str)
{
    \
    int res = 0;
    int i;
    for (i = 0; str[i] != 0; ++i)
        res = res * 10 + str[i] - '0';
    return (res);
}
/**
 * _isdigit - dasdsa
 * @c:fds
 *
 * Return: sdasdads
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}
void *mul(char *num1, char *num2)
{
    int len, len2, i, j, x, y;
    size_t sum;
    int *ptr;

    for (len2 = 0; num2[len2]; len2++)
        ;

    for (len = 0; num2[len]; len++)
        ;

    for (i = (len2 -1); i >= 0; i--)
    {
        x = num2[i];
        for (j = (len - 1); j >= 0; j-- && x * 10)
        {
            y = num1[j];
            sum += (x * y);
        }
    }
    ptr = malloc(sizeof(sum));
    for
    if (ptr == NULL)
    {
        free(ptr);
        return (NULL);
    }
    while(ptr++)
    {
        putchar(*ptr + '0');
    }
    free(ptr);
    return (0);
}
