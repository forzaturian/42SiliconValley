#include<unistd.h>

void	ft_putnbr (int nbr)
{
	char c;
	
	if (nbr >= 0 && nbr <= 9)
	{
		c = nbr + 48;
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}
int	main()
{
    int num;
    
    num = 1;
    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (num % 3 == 0)
            write(1, "fizz", 4);
        else if (num % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnbr(num);
        write(1, "\n", 1);
        num++;
    }
    return (0);
}
