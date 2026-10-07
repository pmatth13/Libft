/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaudell <psaudell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:35:31 by psaudell          #+#    #+#             */
/*   Updated: 2026/10/07 16:27:14 by psaudell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		len_s;
	char		*copy;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i + start];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*int	main(void)
{
	char *s;
	char *copy;

	s = "Hello World";
	copy =  ft_substr(s, 6, 12);
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
	copy =  ft_substr(s, 25, 12);
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
	copy =  ft_substr(s, 11, 12);
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
	copy =  ft_substr(s, 2, 12);
	if (!copy)
		return (1);
	printf("%s\n", copy);
	free(copy);
}*/