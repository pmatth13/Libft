/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 12:22:17 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/07 12:50:23 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cree une copie de la chaine s dans une nouvelle zone allouee avec
	malloc (taille : ft_strlen(s) + 1 pour le '\0').
	La copie doit etre liberee avec free par l'appelant.
	Retour : un pointeur sur la nouvelle chaine, ou NULL si echec
	d'allocation. */

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s, len + 1);
	return (copy);
}
