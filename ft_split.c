/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:35:42 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/08 17:05:40 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue et retourne un tableau de chaines obtenu en decoupant s
	selon le caractere separateur c. Le tableau est termine par NULL.
	Retourne le tableau, ou NULL si echec d'allocation */

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**ft_free_tab(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static size_t	ft_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	nb_str;
	char	**tab;

	i = 0;
	j = 0;
	nb_str = ft_count(s, c);
	tab = malloc((sizeof(char *)) * (nb_str + 1));
	if (!tab)
		return (NULL);
	while (j < nb_str)
	{
		while (s[i] && s[i] == c)
			i++;
		len = ft_len(&s[i], c);
		tab[j] = ft_substr(s, i, len);
		i += len;
		if (!tab[j])
			return (ft_free_tab(tab, j));
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

/*int	main(void)
{
	char	**tab;
	int		k;

	tab = ft_split("Hello World", ' ');
	k = 0;
	while (tab[k])
	{
		printf("%s\n", tab[k]);
		free(tab[k]);
		k++;
	}
	free(tab);
	return (0);
} */
