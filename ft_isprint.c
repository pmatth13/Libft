/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:51:38 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 13:51:39 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Verifie si c est un caractere affichable, espace compris
	(de 32 ' ' a 126 '~'). Les caracteres de controle (0-31) et
	DEL (127) ne sont pas affichables.
	Retour : 1 si c est affichable, 0 sinon. */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
