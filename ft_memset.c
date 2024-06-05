/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:18:24 by cmassol           #+#    #+#             */
/*   Updated: 2024/05/30 15:38:19 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (size)
	{
		size--;
		p[size] = (unsigned char)value;
	}
	return (ptr);
}
