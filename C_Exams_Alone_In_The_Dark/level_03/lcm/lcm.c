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
        return gcd(a-b, b);  
    return gcd(a, b-a);  
}
unsigned int    lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a*b)/gcd(a, b);  
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
