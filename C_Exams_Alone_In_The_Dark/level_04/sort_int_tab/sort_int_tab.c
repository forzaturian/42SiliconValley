/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsaturi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 18:39:45 by rtsaturi          #+#    #+#             */
/*   Updated: 2019/07/02 18:39:48 by rtsaturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    sort_int_tab(int *tab, unsigned int size)
{
    int tmp;
    unsigned int i;
    unsigned int j;
    
    i = 0;
    while (i < size - 1)
    {
        j = i;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

//TEST//
/*
 #include<stdio.h>
int		main(void)
{
	int x[10] = {2, 4, 6, 3, 1, 8, 9, 5, 7, 11};
	unsigned int	len = 10;
	unsigned int i = 0;

	sort_int_tab(x, len);
	while (i < len)
	{
		printf("%d\n", x[i]);
		i++;
	}
	return (0);
}*/
