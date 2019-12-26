/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 07:31:11 by ddratini          #+#    #+#             */
/*   Updated: 2019/05/17 18:55:47 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void pr_hex(int n)
{
	int ne;
	ne = n;
//	ne /= 16;
	if (ne >= 16)
		pr_hex(ne / 16);
	ne %= 16;
//	n = n - 10 + 48;
/////	ft_putchar(ne - 10 + 48);
////	ft_putchar((ne - 10) % 10 + 48);
	ne += ne < 10 ? '0' : 'a' - 10;
//well pnbr /	ft_putchar(ne % 10 + '0');
	write(1, &ne, 1);
}
int main()
{
	int n;
	n = 0;
	n = 15;
	pr_hex(n);
//	write(1, &n, 1);
//	ft_putchar(n);
	return (0);
}
