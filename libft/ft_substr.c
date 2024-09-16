/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:31:42 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/02 15:30:48 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// to create a substring starting in start with lenght len
// if start is bigger than the string,
// we need to return an empty string
// if parameter len is bigger than s + start,
// in order to dont waste space we can reduce it
// to only the necessary

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*little;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	little = ft_calloc(len + 1, sizeof(char));
	if (!little)
		return (NULL);
	while (i < len)
	{
		little[i] = s[start + i];
		i++;
	}
	return (little);
}

/*int main(void)
{
	char big[] = "ola tudo bem";
	char *little = ft_substr(big, 4, 4);

	printf("%s\n", little);
}*/