/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:19:23 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/08 12:30:49 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Verifie si le caractere c fait partie de l'ensemble set
	return 1 if true, 0 if false */

static size_t	ft_flag(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/* Alloue et retourne une copie de s1, sans les caracteres de set
	au debut et a la fin de la chaine.
	Retourne la chaine trimmee, ou NULL si echec d'allocation */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	end;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[i] && ft_flag(s1[i], set))
		i++;
	while (end > i && ft_flag(s1[end -1], set))
		end--;
	str = malloc(sizeof(char) * (end - i + 1));
	if (!str)
		return (NULL);
	while (i < end)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*s1;
	char	*set;
	char	*str;

	s1 = "123Hello World123";
	set = "123";
	str = ft_strtrim(s1, set);
	if (!str)
		return (1);
	printf("%s\n", str);
	free(str);
} */
