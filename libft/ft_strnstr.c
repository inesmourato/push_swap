/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:05:55 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:25:44 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates the little string inside the big string,
//during the first len characters

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str_big;
	char	*str_little;

	str_big = (char *)big;
	str_little = (char *)little;
	i = 0;
	if (!*little)
		return (str_big);
	while (str_big[i] && i < len)
	{
		j = 0;
		while (str_big[i + j] == str_little[j] && little[j] && i + j < len)
		{
			if (str_little[j + 1] == '\0')
				return ((char *)str_big + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*int main (void)
{
		char big[] = "hello world";
		char little [] = "ola";
		size_t len = 10;

		printf("%s\n", ft_strnstr(big, little, len));
}*/