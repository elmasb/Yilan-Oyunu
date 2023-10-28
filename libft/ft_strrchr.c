#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    const char *returnpointer = 0;
    while(*s)
    {
        if(*s == c)
            returnpointer = s;
        s++;
    }
    return (char*)returnpointer;
}