/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:42:24 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:42:24 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	result;

	result = 0;
	if (c >= '0' && c <= '9')
		result = 1;
	if (c >= 'A' && c <= 'Z')
		result = 1;
	if (c >= 'a' && c <= 'z')
	result = 1;
	return (result);
}
