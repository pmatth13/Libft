/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:32:18 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 17:37:14 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cherche la PREMIERE occurrence du caractere c dans la chaine s.
	- c est converti en char avant la comparaison ;
	- le '\0' final fait partie de la recherche : chercher '\0'
	  renvoie un pointeur sur la fin de la chaine.
	Retour : un pointeur sur le caractere trouve, ou NULL s'il est
	absent. */

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
