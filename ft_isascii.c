/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:44:14 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 12:44:15 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Verifie si c appartient a la table ASCII standard (valeurs 0 a 127).
	Les valeurs negatives et superieures a 127 ne sont pas ASCII.
	Retour : 1 si c est un caractere ASCII, 0 sinon. */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
