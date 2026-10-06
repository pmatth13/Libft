/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:36:49 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 14:45:07 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* copie n octet de la zone src vers la zone memoire dest.
	Les 2 zones ne doivent pas se chevaucher
	Retoune un pointeur vers dest */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
