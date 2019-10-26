#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

typedef struct op
{
        char *op;
        void (*f)(va_list);
} op_t;



int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _printf(const char *format, ...);

void printchar(va_list lista);
void printint(va_list lista);
void printfloat(va_list lista);
void printstring(va_list lista);


#endif
