/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:58:12 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:58:12 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*trimmed_str;
	const char	*start;
	const char	*end;

	if (s1 == NULL)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	len = ft_strlen(start);
	end = start + len - 1;
	while (len && ft_strchr(set, *end))
	{
		end--;
		len--;
	}
	trimmed_str = (char *)malloc (len + 1);
	if (trimmed_str == NULL)
		return (NULL);
	ft_memcpy(trimmed_str, start, len);
	trimmed_str[len] = '\0';
	return (trimmed_str);
}
