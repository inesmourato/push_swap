/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:32:20 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/09/16 12:37:10 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_arguments(char s, va_list ap)
{
	if (s == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (s == 'p')
		return (ft_pointer(va_arg(ap, unsigned long), "0123456789abcdef", 0));
	else if (s == 'i' || s == 'd')
		return (ft_printnum(va_arg(ap, int), 10, "0123456789"));
	else if (s == 'u')
		return (ft_printnum(va_arg(ap, unsigned int), 10, "0123456789"));
	else if (s == 'x')
		return (ft_printnum(va_arg(ap, unsigned int), 16, "0123456789abcdef"));
	else if (s == 'X')
		return (ft_printnum(va_arg(ap, unsigned int), 16, "0123456789ABCDEF"));
	else if (s == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(ap, str);
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count = count + ft_arguments(str[i + 1], ap);
			i++;
		}
		else
			count = count + ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	int		x;
// 	void	*ptr;
// 	int		teste;
// 	int		teste2;

// 	x = 4;
// 	ptr = &x;
// 	ft_printf("%d \n", ft_printf("ola\n"));
// 	ft_printf("%d \n", ft_printf(NULL));
// 	teste = printf("hello world\n");
// 	printf("imprimiu: %d\n", teste);
// 	teste2 = ft_printf("hello world\n");
// 	ft_printf("imprimiu: %d\n", teste2);
// 	ft_printf("ola%%% \n");
// 	ft_printf("Prints a single character: %c\n", 'a');
// 	ft_printf("Prints a string: %s\n", "ola");
// 	ft_printf("Prints a decimal: %d\n", 21);
// 	ft_printf("Pointer argument in hexadecimal format: %p\n", ptr);
// 	ft_printf("Prints an integer base 10: %i\n", 2147483647);
// 	ft_printf("Prints an unsigned decimal (base 10) number: %u\n", 4294967295);
// 	ft_printf("Prints a number in hexadecimal (base 16) lowercase format: %x\n",
// 		7843);
// 	ft_printf("Prints a number in hexadecimal (base 16) uppercase format: %X\n",
// 		7843);
// 	ft_printf("Prints a percent sign: %%\n", 1);
// 	ft_printf("Prints all together: %c %s %d %i %u %x %X %%\n", 'a', "ola", 21,
// 		2147483647, 4294967295, 7843, 7843, 1);
// 	ft_printf("\n");
// 	printf("Prints a single character: %c\n", 'a');
// 	printf("Prints a string: %s\n", "ola");
// 	printf("Prints a decimal: %d\n", 21);
// 	printf("Pointer argument in hexadecimal format: %p\n", ptr);
// 	printf("Prints an integer base 10: %i\n", 2147483647);
// 	printf("Prints an unsigned decimal (base 10) number: %u\n", UINT_MAX);
// 	printf("Prints a number in hexadecimal (base 16) lowercase format: %x\n",
// 		7843);
// 	printf("Prints a number in hexadecimal (base 16) uppercase format: %X\n",
// 		7843);
// 	printf("Prints a percent sign: %%\n");
// 	printf("Prints all together: %c %s %d %i %u %x %X %%\n", 'a', "ola", 21,
// 		2147483647, UINT_MAX, 7843, 7843);
// }
