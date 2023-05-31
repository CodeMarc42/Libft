/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:18:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/05 12:18:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (dst < src)
	{
		count = 0;
		while (count < len)
		{	
			ptr1[count] = ptr2[count];
			count++;
		}
	}
	else if (src < dst)
	{
		while (len--)
			ptr1[len] = ptr2[len];
	}
	return (dst);
}
