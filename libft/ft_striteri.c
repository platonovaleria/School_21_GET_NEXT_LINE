/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbloodax <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:01:45 by jbloodax          #+#    #+#             */
/*   Updated: 2019/09/13 16:27:50 by jbloodax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned unt, char *))
{
	char	*str;
	int		i;

	str = (char*)s;
	if (str && f)
	{
		i = 0;
		while (str[i])
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
}
