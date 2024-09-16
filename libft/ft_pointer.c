/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:20:51 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/09/16 12:36:48 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pointer(unsigned long long ptr, char *base, int f)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		return (write(1, "(nil)", 5));
	}
	if (f == 0)
	{
		write(1, "0x", 2);
		count += 2;
	}
	if (ptr / 16 > 0)
	{
		count += ft_pointer((ptr / 16), base, 1);
	}
	ft_putchar(base[ptr % 16]);
	count++;
	return (count);
}
