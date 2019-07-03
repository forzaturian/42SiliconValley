/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:15:10 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 17:16:15 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_putstr(char *str)
{
    int        i;
    
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int    main(int ac, char *av[ ])
{
    int i;
    int j;
    
    if (ac != 3)
    {
        write(1, "\n", 1);
    }
    else
    {
        i = 0;
        j = 0;
        while (av[2][j])
        {
            if (av[2][j] == av[1][i])
                i++;
            if (av[1][i] == '\0')
            {
                ft_putstr(av[1]);
                break;
            }
            j++;
        }
        write(1, "\n", 1);
    }
    return (0);
}
