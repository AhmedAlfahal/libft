/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalfahal < aalfahal@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:16:52 by aalfahal          #+#    #+#             */
/*   Updated: 2022/10/02 00:49:57 by aalfahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int s)
{
	if (s >= 0 && s <= 127)
		return (1);
	return (0);
}
