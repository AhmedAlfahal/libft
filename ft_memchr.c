/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal < aalfahal@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:05:57 by aalfahal          #+#    #+#             */
/*   Updated: 2022/11/02 18:52:56 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		a;
	size_t		i;

	i = 0;
	a = (char )c;
	while (i < n)
	{
		if (((char *)s)[i] == a)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
