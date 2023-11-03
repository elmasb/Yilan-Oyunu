#include "libft.h"
#include <stdio.h>
void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *c;

    c = ptr;
    while(num > 0)
    {
        *c = value;
        c++;
        num--;
    }
    return ptr;
}


int main(){
	int arr[4]={3,256,5,6};
   

    ft_memset(arr,7,2);
    ft_memset(arr,231,1);
        printf("%d ",arr[0]);
	return (0);
}
