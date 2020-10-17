#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
int _strlen(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_memcpy(char *dest, char *src, unsigned int n);
int _printf(const char *format, ...);
int _atoi(char* str);
int _isdigit(int c);
char *mul(char *num1, char *num2);

#endif
