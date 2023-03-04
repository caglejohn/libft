/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:00:27 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 21:00:27 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	const char	*p;

	if (str == NULL)
		return ;
	p = str;
	while (*p != '\0')
		p++;
	write(fd, str, p - str);
}
