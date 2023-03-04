/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:45:28 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:45:28 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	while (*s != '\0')
	{
		ch = (char)c;
		if (*s == ch)
		{
			return ((char *)s);
		}
		s++;
	}
	ch = (char)c;
	if (*s == ch)
	{
		return ((char *)s);
	}
	else
	{
		return (NULL);
	}
}
