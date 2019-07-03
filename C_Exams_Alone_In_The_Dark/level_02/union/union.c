/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:12:37 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 17:12:42 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    int i;
    int j;
    char temp[127] = {0};

    if (ac == 3)
    {   
        i = 0;
        while (av[1][i])
        {   
            if (temp[(int)av[1][i]] == 0)
                {
                    write(1, &av[1][i], 1);
                    temp[(int)av[1][i]] = 1;           
                }
                i++;
        }
        j = 0;
        while (av[2][j])
        {
            if (temp[(int)av[2][j]] == 0)
                {
                    write(1, &av[2][j], 1);
                    temp[(int)av[2][j]] = 1;
                }
                j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
