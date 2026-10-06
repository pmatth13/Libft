/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:51:33 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 15:58:05 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Concatene la chaine src a la suite de la chaine dst, sans depasser dsize octets au total dans dst
	(resultat toujours termine par '\0')
	Retourne la taille totale que la chaine aurait du avoir (dst_len + src_len), utile pour detecter une troncature */

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	len;
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dst_len + src_len;
	i = 0;
	if (dsize <= dst_len)
		return (dsize + src_len);
	while (src[i] && dst_len < dsize - 1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (len);
}
