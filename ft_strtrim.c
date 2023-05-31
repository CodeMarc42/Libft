/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:59:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/08 22:17:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	count2;
	size_t	size_s1;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	count = 0;
	count2 = 0;
	size_s1 = ft_strlen(s1);
	while (s1[count] != '\0' && ft_strchr(set, s1[count]))
		count++;
	while (size_s1 > count && ft_strchr(set, s1[size_s1 - 1]))
		size_s1--;
	ptr = malloc(sizeof(char) * (size_s1 - count + 1));
	if (ptr == NULL)
		return (NULL);
	while (count < size_s1)
		ptr[count2++] = s1[count++];
	ptr[count2] = '\0';
	return (ptr);
}
