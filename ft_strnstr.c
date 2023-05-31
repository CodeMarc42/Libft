/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:59:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/08 22:17:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_match(const char *haystack, const char *needle, size_t len)
{
	while (*haystack != '\0' && *haystack == *needle && len != 0)
	{
		haystack++;
		needle++;
		len--;
	}
	if (*needle == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*found_pointer;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len != 0)
	{
		if (*haystack == *needle)
		{
			found_pointer = (char *)haystack;
			if (is_match(found_pointer, needle, len))
				return (found_pointer);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
