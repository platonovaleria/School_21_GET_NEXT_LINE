/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbloodax <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 13:28:42 by jbloodax          #+#    #+#             */
/*   Updated: 2019/09/22 16:01:57 by jbloodax         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_freestr(char **str)
{
	char *temp;
	char *rewrt;

	if (!str || !*str)
		return (NULL);
	rewrt = *str;
	while (*rewrt)
	{
		temp = rewrt++;
		free(temp);
	}
	free(str);
	return (NULL);
}
