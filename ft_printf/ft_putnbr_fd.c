/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliali <aliali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:29:28 by aliali            #+#    #+#             */
/*   Updated: 2024/02/05 20:23:08 by aliali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf"

int	ft_putnbr_fd(int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	else if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}