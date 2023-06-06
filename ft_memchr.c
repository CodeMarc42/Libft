/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:59:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/08 22:17:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*ptr_s;
	unsigned char	character;

	ptr_s = (unsigned char *)s;
	character = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		if (ptr_s[count] == character)
			return (&ptr_s[count]);
		count++;
	}
	return (NULL);
}
