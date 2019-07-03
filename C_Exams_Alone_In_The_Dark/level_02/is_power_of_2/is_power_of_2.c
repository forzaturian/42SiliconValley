/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:57:34 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 16:58:20 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     is_power_of_2(unsigned int n)
{ 
    if (n == 0)
        return 0; 
    while (n >= 2)
    {
        if (n % 2 != 0)
                return (0);
        n = n / 2;
    }
    return (1);
} 

//TEST//
/*       
#include <stdio.h>
int main()
{
    printf("%d\n", is_power_of_2(1));
    printf("%d\n", is_power_of_2(8));
    printf("%d\n", is_power_of_2(32));
    printf("%d\n", is_power_of_2(64));
    printf("%d\n", is_power_of_2(0));
    printf("%d\n", is_power_of_2(1));
    printf("%d\n", is_power_of_2(40));
    printf("%d\n", is_power_of_2(21));
    return (0);
}
*/
