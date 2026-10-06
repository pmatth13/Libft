#include "libft.h"

/* Verifie si le caractere c fait partie de la table ASCII (0-127) 
	return 1 if true 0 if false */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
