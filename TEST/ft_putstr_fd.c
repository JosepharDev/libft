#include "ft_putchar_fd.c"
#include <unistd.h>
#include <fcntl.h>
void	ft_putstr_fd(char *s, int fd)
{
	if(!s)
		return;
	while(*s)
		ft_putchar_fd(*s++ , fd);
}
int main()
{
	creat("test", S_IRWXU);
	int fd = open("test", O_RDWR);
	ft_putstr_fd("hello", fd);
	close(fd);
}