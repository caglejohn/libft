/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:46:48 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:46:48 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t str_len)
{
	size_t	substr_len;

	substr_len = ft_strlen(substr);
	if (substr_len == 0)
		return ((char *)str);
	while (*str != '\0' && str_len >= substr_len)
	{
		if (ft_strncmp(str, substr, substr_len) == 0)
			return ((char *)str);
		str++;
		str_len--;
	}
	return (NULL);
}
