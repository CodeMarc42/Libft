/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:59:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/08 22:17:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	array_lenght;
	size_t	count;
	char	*ptr;

	if (!s)
		return (NULL);
	array_lenght = ft_strlen(s);
	ptr = malloc(sizeof(char) * array_lenght + 1);
	if (!ptr)
		return (NULL);
	count = 0;
	while (s[count])
	{
		ptr[count] = f(count, s[count]);
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
