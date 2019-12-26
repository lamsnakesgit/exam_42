/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 20:46:23 by ddratini          #+#    #+#             */
/*   Updated: 2019/03/18 21:52:06 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{//af:---;\fun
	return(octet >> 4 | octet << 4);
}
int main()
{
	unsigned char a;

	a = '1';
	swap_bits(a);
	return (0);
}
