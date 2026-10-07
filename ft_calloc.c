/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 11:55:07 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/07 15:48:38 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue de la memoire pour un tableau de nmemb elements de size octets chacun,
	et met a zero la memoire allouee.
	Retourne un ptr vers la memoire allouee, ou NULL si echec d'allocation */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

//#include <stdio.h>

/*int	main(void)
{
	char		*tab;
	size_t	i;

	tab = ft_calloc(5, sizeof(char));
	if (!tab)
	{
		printf("Echec d'allocation\n");
		return (1);
	}
	i = 0;
	while (i < 5)
	{
		printf("tab[%zu] = %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/