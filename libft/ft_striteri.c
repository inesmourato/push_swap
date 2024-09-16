/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:06:20 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/02 15:21:13 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// applies the function to every character of the string

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*void my_function(unsigned int index, char *character)
{
	(void) index;
	*character = *character + 1;
}

int	main(void)
{
	char str[] = "Hello";
	printf("Input string: %s\n", str);

	ft_striteri(str, &my_function);

	printf("Result: %s\n", str);
}*/