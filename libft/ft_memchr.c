/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:01:32 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:20:20 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// searches for the character c in the first n bytes of the string
// pointed by str
// returns the string after its first ocurrence

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
/*int main(void)
{
		char s[] = "Hello.world";
		int c = '.';
		size_t n = 7;
		char *str = ft_memchr(s, c, n);
		char *str2 = memchr(s, c, n);

		printf("%s\n", str);
		printf("%s\n", str2);
}*/