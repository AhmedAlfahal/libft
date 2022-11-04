/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal < aalfahal@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 22:59:19 by aalfahal          #+#    #+#             */
/*   Updated: 2022/10/08 23:30:17 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	size_t			i;

	i = 0;
	a = (unsigned char )c;
	while (i < len)
	{
		((char *)b)[i] = a;
		i++;
	}
	return (b);
}
