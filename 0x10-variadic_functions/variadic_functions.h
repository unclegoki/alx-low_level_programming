#include <stdarg.h>
#include <stdio.h>

/**
 * struct prin_t - prints type of print function
 * @t: prints type
 * @f: print function
 */
typedef struct prin_t
{
        char *t;
        void (*f)(va_list);
} prin_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
