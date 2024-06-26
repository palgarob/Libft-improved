/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepaloma <pepaloma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:04:50 by pepaloma          #+#    #+#             */
/*   Updated: 2024/04/27 23:37:37 by pepaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_hex_up(unsigned int n)
{
	if (n >= 16)
		write_hex_up(n / 16);
	write(1, &HEXADECIMAL_UP[n % 16], 1);
}

static void	write_hex_lo(unsigned int n)
{
	if (n >= 16)
		write_hex_lo(n / 16);
	write(1, &HEXADECIMAL_LO[n % 16], 1);
}

int	ft_print_hex(unsigned int n, int lcase)
{
	int	i;

	i = 0;
	if (lcase)
		write_hex_up(n);
	else
		write_hex_lo(n);
	while (n / 16)
	{
		i++;
		n /= 16;
	}
	return (i + 1);
}
