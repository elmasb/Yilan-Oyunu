
#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle,size_t len)
{
    int i;
    int j;
    int count;

    count = 0;
    i = 0;

    while(haystack[i] && count < len)
    {
        j = 0;
        while(haystack[i + j] == needle[j] && count < len)
        {
            if(needle[j+1] == '\0')
                return (char *)(haystack + i);
            j++;
        }
        i++;
    }
    return (0);
}
