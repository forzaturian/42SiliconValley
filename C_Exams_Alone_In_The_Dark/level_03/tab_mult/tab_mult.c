/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 23:19:32 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/04/18 23:20:23 by rtsaturi         ###   ########.fr       */
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

void    ft_putnbr (int nbr)
{
    char c;
    
    if (nbr >= 0 && nbr <= 9)
    {
        c = nbr + 48;
        write (1, &c, 1);
    }
    else
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}
void	tab_mult(int n)
{
	int i;
	int res;

	i = 1;
	while (i <= 9)
	{
		res = i * n;
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(res);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac < 2)
		write(1, "\n", 1);
	else
		tab_mult(ft_atoi(av[1]));
	return (0);
}

