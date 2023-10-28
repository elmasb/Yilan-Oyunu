/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcakirog <gcakirog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:36:06 by gcakirog          #+#    #+#             */
/*   Updated: 2023/10/28 14:58:06 by gcakirog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(char *src)
{
	char	*returnarr;
	int		i;

	i = 0;
	while (src[i])
		i++;
	i++;
	returnarr = (char *) malloc(i * sizeof(char));
	if (!returnarr)
		return (0);
	i = 0;
	while (src[i])
	{
		returnarr[i] = src[i];
		i++;
	}
	returnarr[i] = '\0';
	return (returnarr);
}
