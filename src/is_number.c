/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepaloma <pepaloma@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:53:59 by pepaloma          #+#    #+#             */
/*   Updated: 2024/11/28 17:45:40 by pepaloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	is_number(char *str)
{
	str += count_spaces(str);
	return (
		ft_isdigit(*str) ||
		((*str == '+' || *str == '-') && ft_isdigit(*(str + 1)))
	);
}
