/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmassol <cmassol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:38:02 by cmassol           #+#    #+#             */
/*   Updated: 2024/06/05 15:44:47 by cmassol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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
*/
static	size_t	ft_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	size_t	ft_nb_words(char const *s, char c)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nb++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nb);
}

static	char	**ft_free(char **s, size_t i)
{
	while (i > 0)
	{
		i--;
		free(s[i]);
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab_str;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	tab_str = (char **)malloc(sizeof(char *) * (ft_nb_words(s, c) + 1));
	if (!tab_str)
		return (NULL);
	while (++i < ft_nb_words(s, c))
	{
		while (s[j] && s[j] == c)
		j++;
		tab_str[i] = ft_substr(s, j, ft_word_len(&s[j], c));
		if (!tab_str[i])
			return (ft_free(tab_str, i));
		while (s[j] && s[j] != c)
			j++;
	}
	tab_str[i] = NULL;
	return (tab_str);
}
