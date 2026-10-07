/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:25:06 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/07 12:45:14 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copie n octets de la zone memoire src vers la zone memoire dest
	meme si les 2 zones se chevauchent (copie dans le bon sens selon
	les positions relatives de dest et src).
	Retourne un pointeur vers dest. */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n-- > i)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "abcdefghij";
	char	nb[] = "0123456789";

	ft_memmove(str + 2, str, 5);
	printf("%s\n", str);
	ft_memmove(nb, nb + 2, 5);
	printf("%s\n", nb);
	return (0);
} */
