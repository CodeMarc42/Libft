/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:59:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/08 22:17:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	count2;

	count = ft_strlen(dst);
	if (dstsize < count)
		return (dstsize + ft_strlen(src));
	count2 = 0;
	if (dstsize)
	{
		dstsize--;
		while (src[count2] && count < dstsize)
			dst[count++] = src[count2++];
	}
	dst[count] = '\0';
	while (src[count2++])
		count++;
	return (count);
}
