/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:28:14 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/04/23 11:55:27 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns always the lenght of the source
// meanwhile copies the string src to dest, but only until the size characters

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
	{
		return (len);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*int	main(void)
{
	char	src[10] = "diasbons";
	char	dest[3] = "ola";
	size_t	n;

	n = 5;
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, n));
	printf("dest: %s\n", dest);
}*/
