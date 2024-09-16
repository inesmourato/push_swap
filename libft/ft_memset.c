/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:08:07 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:25:28 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies the character c to the first 
//num characters of the sring pointed by ptr

void	*ft_memset(void *ptr, int c, size_t num)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < num)
	{
		str[i] = c;
		i++;
	}
	return (ptr);
}
/*int main(void)
{
		char str[] = "bom dia";
		int c = 'o';
		size_t num = 3;

		char *test = ft_memset(str, c, num);
		char *test2 = memset(str, c, num);
		printf("%s\n", test);
		printf("%s\n", test2);
}*/