/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:45:10 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:45:10 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (n-- > 0)
	{
		*ptr++ = (unsigned char)value;
	}
	return (dest);
}
