/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:59:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/08 22:17:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	count;
	size_t	count2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = malloc(sizeof(char) * (size +1));
	if (ptr == NULL)
		return (NULL);
	count = 0;
	while (s1[count])
	{
		ptr[count] = s1[count];
		count++;
	}
	count2 = 0;
	while (s2[count2])
	{
		ptr[count + count2] = s2[count2];
		count2++;
	}
	ptr[count + count2] = '\0';
	return (ptr);
}
