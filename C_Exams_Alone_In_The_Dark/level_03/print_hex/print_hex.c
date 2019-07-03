/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 19:03:23 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/04/18 19:07:35 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int res;
    int sign;
    
    i = 0;
    res = 0;
    sign = 1;
    while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r'||
           str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        sign = 1;
        i++;
    }
    while(str[i] <= '9' && str[i] >= '0')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}

void	print_hex(int num)
{
	char *str;

	str = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(num / 16);
	write(1, &str[num % 16], 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		print_hex(ft_atoi(av[1]));
	}
		write(1, "\n", 1);
	return (0);
}

/*
 int        main()
 {
 int i = 33;
 print_hex(i);
 return (0);
 }
 */
