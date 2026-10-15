/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:55:24 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/07 16:35:53 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Verifie si c est une lettre de l'alphabet ASCII ('a'-'z' ou 'A'-'Z').
	Parametre : c, le caractere a tester (passe en int, comme dans la libc).
	Retour : 1 si c est une lettre, 0 sinon. */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
