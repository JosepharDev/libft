#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_bzero.c"
void *ft_calloc(size_t count, size_t size)
{
       void *p;
       p = malloc(count * size);
       if(p == 0)
            return (p);
        else
            ft_bzero(p, count * size);
        return (p);
}

 int main() {
        int i, * ptr, sum = 0;
        ptr = ft_calloc(10, sizeof(int));
        if (ptr == NULL) {
            printf("Error! memory not allocated.");
            exit(0);
        }
        printf("Building and calculating the sequence sum of the first 10 terms  \n ");
        for (i = 0; i < 10; ++i) { * (ptr + i) = i;
            sum += * (ptr + i);
        }
        printf("Sum = %d", sum);
        free(ptr);
        return 0;
    }