/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 05:31:47 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/11 05:31:47 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Fonction d'aide : compte le nombre de caracteres necessaires pour
	ecrire n en base 10, signe '-' compris. 0 s'ecrit avec 1 caractere.
	n est un long pour pouvoir faire -n sur INT_MIN sans overflow. */

static int	ft_len(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/* Alloue et retourne la chaine qui represente l'entier n en base 10.
	- n est copie dans un long, car -INT_MIN ne tient pas dans un int ;
	- la chaine est remplie de la droite vers la gauche avec n % 10
	  (le dernier chiffre), puis n / 10 ;
	- le '-' est place en premiere case si n est negatif.
	Ex : ft_itoa(-42) donne "-42".
	Retour : la chaine, ou NULL si l'allocation echoue. */

char	*ft_itoa(int n)
{
	long	i;
	int		len;
	char	*str;

	i = n;
	if (i < 0)
		i = -i;
	len = ft_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (i == 0)
		str[0] = '0';
	str[len] = '\0';
	while (i != 0)
	{
		len--;
		str[len] = i % 10 + '0';
		i = i / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-123));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
}*/
