#include "ft_putchar_fd.c"
void	ft_putnbr_fd(int n, int fd)
{
	long int nbr;
	nbr = n;
	if(n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if(nbr < 10)
		ft_putchar_fd(nbr + '0', fd);
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}