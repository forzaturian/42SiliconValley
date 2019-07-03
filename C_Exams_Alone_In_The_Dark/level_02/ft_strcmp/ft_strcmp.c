/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 16:50:59 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 16:51:05 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(char *s1, char *s2)
{
    
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}

 //TEST///
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	printf("FUNC: String %s and %s is %i\n", "ab", "aba", ft_strcmp("ab", "aba"));
	printf("LIB: String %s and %s is %i\n", "ab", "aba", strcmp("ab", "aba"));
    printf("FUNC: String %s and %s is %i\n", "hello", "hello", ft_strcmp("hello", "hello"));
    printf("LIB: String %s and %s is %i\n", "hello", "hello", strcmp("hello", "hello"));
	printf("FUNC: String %s and %s is %i\n", "hello", "   hello", ft_strcmp("hello", "  hello"));
	printf("LIB: String %s and %s is %i\n", "hello", "   hello", strcmp("hello", "  hello"));
	printf("FUNC: String %s and %s is %i\n", "acb", "add", ft_strcmp("acb", "add"));
	printf("LIB: String %s and %s is %i\n", "acb", "add", strcmp("acb", "add"));
}
*/
