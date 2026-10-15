/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:31:18 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 18:44:37 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cherche la premiere occurrence de la chaine little dans la chaine big,
	sans lire plus de len caracteres de big.
	- si little est vide, on retourne big ;
	- l'occurrence doit tenir ENTIEREMENT dans les len premiers
	  caracteres (d'ou le test i + j < len).
	Retour : un pointeur sur le debut de l'occurrence dans big, ou NULL
	si little n'est pas trouvee. */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
