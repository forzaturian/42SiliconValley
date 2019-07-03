/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:50:02 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 16:50:03 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int num1;
    int num2;
    int res;

    if (ac == 4)
    {
        num1 = atoi(av[1]);
        num2 = atoi(av[3]);
        res = 0;

        if (av[2][0] == '+')
            res = num1 + num2;
        else if (av[2][0] == '-')
            res = num1 - num2;
        else if ( av[2][0] == '*')
            res = num1 * num2;
        else if (av[2][0] == '/')
            res = num1 / num2;
        else if (av[2][0] == '%')
            res = num1 % num2;
        printf("%d", res);
    }
    printf("\n");
    return (0);
}
