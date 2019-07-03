/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:06:36 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 17:06:47 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_bits(unsigned char octet)
{
	int i;
	
	i = 7;
	while (i >= 0)
	{
		if ((octet & (1 << i)) != 0)
			write (1, "1", 1);
		else
            write (1, "0", 1);
		i--;
	}
}

//TEST//
/*
#include<unistd.h>

int main()
{
	unsigned char x = 42;

	print_bits(x);

	return (0);	
} */
