/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:59:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/08 22:17:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_lenght;
	size_t	count;

	if (dstsize > 0)
	{
		count = 0;
		dstsize--;
		while (src[count] && count < dstsize)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	src_lenght = ft_strlen(src);
	return (src_lenght);
}
