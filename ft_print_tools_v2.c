/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgrossi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:48:06 by fgrossi           #+#    #+#             */
/*   Updated: 2022/02/08 15:55:21 by fgrossi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_digit(uintptr_t nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_digit(-nb, base);
	}
	if (nb >= 16)
	{
		ft_digit(nb / 16, base);
		ft_putchar(base[nb % 16]);
	}
	else if (nb >= 0)
	{
		ft_putchar(base[nb % 16]);
	}
}

unsigned int	ft_puthex(uintptr_t num, char lett)
{
	int		count;
	char	*base;

	count = ft_len(num);
	if (lett == 'p')
	{
		write(1, "0x", 2);
		count += 2;
		base = "0123456789abcdef";
		ft_digit(num, base);
	}
	else if (lett == 'X')
	{
		base = "0123456789ABCDEF";
		ft_digit(num, base);
	}
	else
	{
		base = "0123456789abcdef";
		ft_digit(num, base);
	}
	return (count);
}

int	ft_len(uintptr_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}
