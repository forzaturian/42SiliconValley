/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 17:10:26 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 17:10:28 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   reverse_bits(unsigned char octet)
{
    int i;
    unsigned char res;
    
    res = 0;
    i = 0;
    while (i < 8)
    {
        res <<= 1;
        res = (octet & 1) | res;
        octet >>= 1;
        i++;
    }
    return (res); 
}
