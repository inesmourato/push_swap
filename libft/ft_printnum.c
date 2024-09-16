/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:45:39 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/09/16 12:37:27 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printnum(long num, int base, char *symbols)
{
	int	count;

	if (num < 0)
	{
		write(1, "-", 1);
		return (ft_printnum(-num, base, symbols) + 1);
	}
	else if (num < base)
	{
		return (ft_putchar(symbols[num]));
	}
	else
	{
		count = ft_printnum(num / base, base, symbols);
		return (count + ft_printnum(num % base, base, symbols));
	}
}
