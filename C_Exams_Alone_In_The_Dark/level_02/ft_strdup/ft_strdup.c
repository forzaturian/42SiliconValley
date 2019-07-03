/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:51:35 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 16:51:37 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(char *src)
{
    int i;
    int j;
    char *src2;

    i = 0;
    while (src[i])
    {
        i++;
    }

    src2 = malloc(sizeof(char) * (i + 1));
    
    j = 0;
    while (src[j])
    {
        src2[j] = src[j];
        j++;
    }   
    src2[j]= '\0';
    return(src2);

}

///TEST///
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%s\n", ft_strdup("hello"));
    return (0);
} 
*/
