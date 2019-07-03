/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 18:06:04 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 18:06:07 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == '\t' || str[i] == '\v' ||
		str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++; 
	}
	return (res * sign);
}
void	ft_putnbr (int nbr)
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
void	add_prime(int num)
{
	int i;
	int j;
	int sum;
	int prime;

	i = 2;
	sum = 0;
	while (i <= num)
	{
		j = 2;
		prime = 1;
		while (j <= i / 2)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
			j++;
		} 
		if (prime == 1)
		{
			sum += i;
		}
		i++;
	}
		ft_putnbr(sum);
}
int	main(int ac, char *av[ ])
{
	if (ac != 2)
	{
		write(1, "0", 1);
	}	
	else
		{
			add_prime(ft_atoi(av[1]));
		}
		write(1, "\n", 1);
		return (0);
}
