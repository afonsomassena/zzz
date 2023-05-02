/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <afgoncal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:16:34 by afgoncal          #+#    #+#             */
/*   Updated: 2023/05/02 19:27:30 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	void	*s2;

	n = size * count;
	s2 = malloc(n);
	if (!s2)
		return (0);
	ft_memset(s2, 0, n);
	return (s2);
}
