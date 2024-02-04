#include <stdarg.h>
#include <stdio.h>
#include "VariableArgument.h"

void printNumbers(int count, ...)
{
    va_list ap;
    va_start(ap, count);
    for (int i = 0; i < count; ++i) {
        int num = va_arg(ap, int);
        printf("%d ", num);
    }
    va_end(ap);
    printf("\n");
}