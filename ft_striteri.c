/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:38:49 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/12 20:03:03 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* parcourt s et, pour chaque caractère, appelle f en lui donnant l'index et 
	l'adresse de ce caractère dans s*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*static void ft_change_a(unsigned int i, char *c)
{
	(void)i;
	if (*c == 'a')
		*c = 'O';
}

int	main(void)
{
	char s[200] = "maison";

	ft_striteri(s, ft_change_a);
	printf("%s\n", s );
	return (0);
}*/