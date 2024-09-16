/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:26:09 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:22:13 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// finds the first occurence of c, starting in the end of the string.

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (int)ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	const char str[] = "bom dmia";
// 	int ch = 0;

// 	printf("%s\n", ft_strrchr(str, ch));
// 	printf("%s\n", strrchr(str, ch));
// }