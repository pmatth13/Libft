/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:31:47 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/06 14:31:48 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Met a zero les n premiers octets de la zone memoire s.
	Equivalent a ft_memset(s, 0, n), qu'on reutilise directement.
	Si n vaut 0, rien n'est modifie.
	Pas de valeur de retour. */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
