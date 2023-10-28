#include "libft.h"
int ft_isalnum(int c)
{
    if((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a') || (c <= '9' && c >= '0'))
        return (1);
    else
        return (0);
}