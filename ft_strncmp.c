/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:38:07 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 17:43:47 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compare au plus les n premiers caracteres des chaines s1 et s2.
	La comparaison s'arrete a la premiere difference, a la fin d'une
	des chaines ('\0') ou apres n caracteres.
	Les caracteres sont compares en unsigned char (comme la libc), pour
	que les caracteres > 127 soient consideres comme plus grands.
	Retour : 0 si egales, < 0 si s1 < s2, > 0 si s1 > s2. */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
