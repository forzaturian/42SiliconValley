/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:49:33 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 16:49:36 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void    cts(char *str)
{
    int i;
    int j;
    int under;
    char *str2;
    
    i = 0;
    under = 0;
    while(str[i])
    {
            if (str[i] >= 'A' && str[i] <= 'Z')
                under++;
        i++;
    }
    str2 = (char *)malloc(sizeof(char) * (i + under) + 1);
    j = 0;
    while(str[j])
    {
        str2[j] = str[j];
        if (str[j] >= 'A' && str[j] <= 'Z')
        {
            write(1, "_", 1);
            str2[j] += 32;
        }
        write(1, &str2[j], 1);
        j++;
    }
}

int main (int ac, char *av[])
{
    
    if (ac == 2)
    {
        cts(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}
