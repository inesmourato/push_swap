/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:00:53 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:21:55 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

/*int main(void)
{
		char s[] = "ola";
		char p[] = "\0";
		int len;
		int len2;
		int len3;
		int len4;

		len = ft_strlen(s);
		len2 = strlen(s);
		len3 = ft_strlen(p);
		len4 = strlen(p);


		printf("%d\n", len);
		printf("%d\n", len2);
		printf("%d\n", len3);
		printf("%d\n", len4);
}*/