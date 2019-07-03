/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 13:14:36 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/04/21 13:22:28 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	int		len;
	int     temp;
    int     flag;
	char	*str;

	if (nbr == -2147483648)
		return ("-2147483648");
    flag = 0;
    len = 0;
    temp = nbr;
	while (temp)
	{
        temp /= 10;
		len++;
	}
	if (nbr < 0)
	{
        len++;
		nbr *= -1;
        flag = 1;
	}
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] ='\0';
    len--;
	while (nbr)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
    if (flag == 1)
    {
        str[len] = '-';
    }
	return (str);
}

//TEST//
/*
#include <stdio.h>

int		main(void)
{
	int		x;

	x = 333;
	printf("%s\n", ft_itoa(x));
	return (0);
} */
