/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:39:09 by inesmourato       #+#    #+#             */
/*   Updated: 2024/05/02 15:21:59 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// applies the function f to each character of the string s

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char function_f_mapi(unsigned int i, char c)
	{
		(void)i;
		return(c + 1);
	}

int	main(void)
{
	char *str = "AbCd";
	char *result = ft_strmapi(str, function_f_mapi);
	printf("Original: %s\n", str);
	printf("New: %s\n", result);
	free(result);
}*/
