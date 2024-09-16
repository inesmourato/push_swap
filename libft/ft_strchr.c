/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:09:34 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:20:56 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// finds the first occurrence of c in str and returns str from there
// NULL if it doesnt find

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (!((char)c))
		return ((char *)&str[i]);
	return (NULL);
}
/*int main(void)
{
		char str[] = "bom dia";
		int c = 'l';

		char *test = ft_strchr(str, c);
		char *test2 = strchr(str, c);

		printf("%s\n", test);
			printf("%s\n", test2);
}*/