/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal <aalfahal@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:31:35 by aalfahal          #+#    #+#             */
/*   Updated: 2022/10/21 18:57:39 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *scr, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize < 1)
		return (ft_strlen(scr));
	while (i < dstsize - 1 && scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(scr));
}
