/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliali <aliali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 15:24:50 by aliali            #+#    #+#             */
/*   Updated: 2024/02/05 20:24:57 by aliali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf"

int	ft_putstr(char *s, int)

{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
	return(s);
}
