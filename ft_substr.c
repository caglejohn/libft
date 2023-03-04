/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:57:23 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:57:23 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*substr;

	if (str == NULL)
	{
		return (NULL);
	}
	if (start >= ft_strlen(str))
	{
		return (ft_strdup(""));
	}
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
	{
		return (NULL);
	}
	ft_memcpy(substr, str + start, len);
	substr[len] = '\0';
	return (substr);
}
