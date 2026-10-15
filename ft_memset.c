/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:31:50 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/07 12:09:07 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Remplit les n premiers octets de la zone memoire s avec la valeur c.
	- c est converti en unsigned char : seul l'octet de poids faible
	  est utilise (ex : 300 donne 44).
	- on travaille octet par octet via un pointeur unsigned char,
	  car on ne peut pas dereferencer un void *.
	Retour : le pointeur s. */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
