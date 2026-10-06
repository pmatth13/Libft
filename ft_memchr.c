/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 17:46:05 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 18:06:25 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Recherche la premiere occurence de l'octet c dans les n premiers 
	octets de la zone memoire s.
	Retourne un pointeur vers cette occurence, ou NULL si non trouve */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	carac;
	unsigned char	*str;

	i = 0;
	carac = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == carac)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
