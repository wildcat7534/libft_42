/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:38:02 by cmassol           #+#    #+#             */
/*   Updated: 2024/06/05 13:37:07 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_tab(char **tab, size_t j)
{
	while (j--)
		free(tab[j]);
	free(tab);
	return (NULL);
}

void	split_bis(char **tab, const char *s, char c, size_t *i, size_t *j)
{
	size_t	k;

	k = 0;
	while (s[*i + k] && s[*i + k] != c)
		k++;
	tab[*j] = (char *)malloc(sizeof(char) * (k + 1));
	if (!tab[*j])
	{
		ft_free_tab(tab, *j);
		return ;
	}
	ft_strlcpy(tab[*j], s + *i, k + 1);
	*i += k;
	*j = *j + 1;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;

	tab = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			split_bis(tab, s, c, &i, &j);
			if (!tab[j])
				return (NULL);
		}
	}
	tab[j] = NULL;
	return (tab);
}
