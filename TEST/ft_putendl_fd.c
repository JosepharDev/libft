//#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
