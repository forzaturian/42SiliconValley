/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:35:05 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/05/12 16:35:10 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_count(char c)
{
    int rep;
    
    rep = 1;
    if (c >= 'a' && c <= 'z')
        return (rep += (c - 'a'));
    if (c >= 'A' && c <= 'Z')
        return (rep += (c - 'A'));
    else
        return (rep);
}
int main(int ac, char *av[ ])
{
    int i;
    int r;
    
    if (ac == 2)
    {
        i = 0;
        while(av[1][i])
        {
            r = ft_count(av[1][i]);
            while (r > 0)
            {
                write(1, &av[1][i], 1);
                r--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
