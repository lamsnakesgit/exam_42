/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exlevx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:18:06 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/02 14:32:09 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_print_z(char z)
{
	ft_putchar('z');
//	ft_putchar('\n');
	return (0);
}

int			main(void)
{
	char z;

	ft_print_z(z);
	return (0);
}
