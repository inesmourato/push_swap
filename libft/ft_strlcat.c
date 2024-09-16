/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:16:48 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/02 15:21:41 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// it concatenates two strings up to size
//-1,because its necessary space for the null terminator
// but returns the lenght
// if size is smaller than the original dest, it returns size + len src

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size <= d_len)
	{
		return (size + s_len);
	}
	while (src[i] && (i + d_len < size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

/*int main(void)
{
		char dest[] = "bons";
		char src[] = "dia";

		printf("dst: %s\n", dest);
		printf("src: %s\n\n\n", src);
		int test = ft_strlcat(dest, src, 3);
		printf("dst: %s\n", dest);
		printf("src: %s\n\n\n", src);
		printf("Resultado: %d\n", test);
}*/
