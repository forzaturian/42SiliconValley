/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:52:01 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 16:52:05 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    char    temp;
    int     i;
    int     j;
    
    i = 0;
    while (str[i])
        i++;
    i--;
    b = 0;
    while (i > j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    return (str);
}

/*
 #include <stdio.h>
 #include <stdlib.h>

 int main()
{
    char r[100] = "dlrowolleh";
    printf("%s\n", ft_strrev(r));
    return (0);
} */
