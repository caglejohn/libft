/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:45:00 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:45:00 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		while (n-- > 0)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n - 1;
		s += n - 1;
		while (n-- > 0)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
