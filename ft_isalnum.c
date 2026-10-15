/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:28:41 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/08 12:38:23 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Verifie si c est alphanumerique, c'est-a-dire une lettre OU un chiffre.
	Reutilise ft_isalpha et ft_isdigit pour ne pas dupliquer les tests.
	Retour : 1 si c est alphanumerique, 0 sinon. */

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
