#include "libft.h"
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int main(){
    int arr[]={100,200,300};
    int arr2[]={20,30,50};

    ft_memcpy(arr,arr2,9);
    printf("%d %d %d", arr[0],arr[1],arr[2]);

}