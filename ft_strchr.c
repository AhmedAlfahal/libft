/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal < aalfahal@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:17:21 by aalfahal          #+#    #+#             */
/*   Updated: 2022/10/13 17:57:13 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		tmp;

	i = 0;
	tmp = (char )c;
	while (i <= ft_strlen(s))
	{
		if (s[i] == tmp)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	return (NULL);
}
