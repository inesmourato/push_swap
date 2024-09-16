/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:59:01 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/05/03 10:23:37 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
	}
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static void	numbers(int len, unsigned int num, char *str)
{
	while (num)
	{
		str[--len] = (num % 10) + 48;
		num = num / 10;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	num;

	len = ft_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	else if (n < 0)
	{
		str[0] = '-';
		num = (unsigned int)(n * -1);
	}
	else
		num = (unsigned int)n;
	numbers(len, num, str);
	return (str);
}

/* int main()
{
		int c = -2147483648;

		char *str = ft_itoa(c);

		printf("%s\n", str);

} */