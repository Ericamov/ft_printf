/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uns_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eanella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:15:03 by eanella           #+#    #+#             */
/*   Updated: 2025/01/24 18:15:03 by eanella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_uns_num(unsigned int n, int *count)
{
	char	*str_num;

	str_num = uns_itoa(n);
	ft_putstr_fd(str_num, 1);
	(*count) += ft_strlen(str_num);
	free(str_num);
}
