/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:12:21 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/04/18 14:34:03 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int gcd(unsigned int a, unsigned int b)
{
    if (a == b)  
        return a;
    if (a > b)  
        return (gcd(a-b, b));  
    return (gcd(a, b-a));  
}
int    lcm(unsigned int x, unsigned int y)
{
    if (x == 0 || y == 0)
        return (0);
    return ((x * y)/gcd(x, y));  
}  
  
// TEST//
/*
#include <stdio.h>

int main()
{  
    unsigned int a = 15, b = 20;
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));  
    return 0;  
} */
