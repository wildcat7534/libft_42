/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:37:50 by cmassol           #+#    #+#             */
/*   Updated: 2024/06/05 14:12:45 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

	int main()
{
	int		n;
	char	*str;

	n = 42;
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	n = -42;
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	n = 0;
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	n = 2147483647;
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	n = -2147483648;
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
