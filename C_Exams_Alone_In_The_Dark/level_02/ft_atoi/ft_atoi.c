/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:50:29 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 16:50:32 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
    return res * sign;
}

/*
int main (void)
{
    char test[] = "+-12345";
    printf("With func: %d\n", ft_atoi(test));
    printf("Real atoi: %d\n", atoi(test));
    return (0);
}
*/
