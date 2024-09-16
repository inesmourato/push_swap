/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:56:54 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/09/16 12:58:11 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_gnl(char *s)
{
	char			*str;
	unsigned int	i;

	str = malloc((ft_strlen_gnl(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

size_t	ft_strlen_gnl (char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr_gnl(char *s, unsigned int start, size_t len)
{
	char	*little;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen_gnl(s))
		return (malloc(1));
	if (len > ft_strlen_gnl(s + start))
		len = ft_strlen_gnl(s + start);
	little = malloc((len + 1) * sizeof(char));
	if (!little)
		return (NULL);
	i = 0;
	while (i < len)
	{
		little[i] = s[start + i];
		i++;
	}
	little[i] = 0;
	return (little);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*dest;

	dest = (char *)malloc((ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	fill_str(dest, s1, s2);
	return (dest);
}

void	fill_str(char *dest, char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[j])
		dest[i++] = s1[j++];
	j = 0;
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
}
