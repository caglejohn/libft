/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcagle <jcagle@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:58:26 by jcagle            #+#    #+#             */
/*   Updated: 2023/03/01 20:58:26 by jcagle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*fr;
	size_t	len;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	fr = malloc((len + 1) * sizeof(char));
	if (fr == NULL)
	{
		return (NULL);
	}
	fr[len] = '\0';
	while (s[i] != '\0')
	{
		fr[i] = (*f)(i, s[i]);
		i++;
	}
	return (fr);
}
