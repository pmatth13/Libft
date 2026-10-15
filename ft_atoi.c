/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:36:50 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/07 11:53:17 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convertit le debut de la chaine nptr en int, comme atoi :
	1. ignore les espaces blancs initiaux (' ', '\t', '\n', '\v',
	   '\f', '\r', soit 32 et 9 a 13) ;
	2. lit UN signe optionnel '+' ou '-' ("+-5" donne 0) ;
	3. lit les chiffres et s'arrete au premier caractere non chiffre.
	Le depassement d'int n'est pas gere (comportement indefini, comme
	l'original).
	Retour : l'entier obtenu, ou 0 si aucun chiffre n'est lu. */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	return (number * sign);
}
