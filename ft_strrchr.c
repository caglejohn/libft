/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:46:58 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:46:58 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char const	*last;
	char		ch;

	ch = (char)c;
	last = NULL;
	while (*s != '\0')
	{
		if (*s == ch)
			last = s;
		s++;
	}
	if (*s == ch)
		return ((char *)s);
	return ((char *)last);
}
