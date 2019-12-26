/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_reverse_be=its.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:17:39 by ddratini          #+#    #+#             */
/*   Updated: 2019/06/18 19:24:24 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char		reverse_bits(unsigned char octet)
{
	int tmp;

	tmp = octet;
	tmp = (octet << 7) | 1;
	tmp = tmp & octet;
	tmp = (octet << 5)
}

int main() //FUNC only
{
	unsigned char octet;

	octet = (int)5;
	reverse_bits(octet);
	return (0);
}
