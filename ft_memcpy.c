/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:18:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/05 12:18:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (!dst && !src)
		return (dst);
	if (n)
	{
		ptr1 = (unsigned char *)dst;
		ptr2 = (unsigned char *)src;
		count = 0;
		while (count < n)
		{	
			ptr1[count] = ptr2[count];
			count++;
		}
	}
	return (dst);
}
