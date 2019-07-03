/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:03:26 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 17:03:28 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     max(int* tab, unsigned int len)
{
    int max;
    unsigned int i;

    if (len == 0)
        return (0);

    i = 1;
    max = tab[0];
    while (i < len)
    {
        if (max < tab[i])
                max = tab[i];
        i++; 
    }
    return (max);
}

//TEST//
/*
#include<stdio.h>
 
int main()
{
    int array[5] = {3,97,344,234,2};
    printf("%d\n", max(array, 5));
    return (0);
}
*/
