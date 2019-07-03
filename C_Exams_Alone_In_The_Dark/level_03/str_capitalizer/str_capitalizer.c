/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:29:18 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/05/21 01:02:37 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    capital(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (!str[i-1] || str[i-1] == ' ' ||
                                                 str[i-1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}
int    main(int ac, char *av[ ])
{
    int i;
    
    if (ac < 2)
    {
        write(1, "\n", 1);
    }
    else
    {
        i = 1;
        while (i < ac)
        {
            capital(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return (0);
}
