#include <unistd.h>

#include <stdio.h>

//void print_memory(const void *addr, size_t size);

void print_memory(const void *addr, size_t size)
{
	unsigned char *p;
	size_t j = 0;
	size_t i = 0;
	char *str = "0123456789abcdef";

	p = (unsigned char *)addr;
	while (i < size)
	{
		j = 0;
		while (j < 16 && i + j < size)
		{
			write(1, &(str[(*(p + j + i) / 16) % 16]), 1);
			write(1, &(str[*(p + j + i) % 16]), 1 );
			if (j % 2)
				write(1, " ", 1);
			++j;
		}
		while (j < 16)
		{
			write(1, "  ", 2);
			if (j % 2)
				write(1, " ", 1);
			++j;
		}
		j = 0;
		while (j < 16 && i+j < size)
		{
			if (*(p + j + i) >= 32 && /*p[i + j]*/ *(p + i + j) <= 126)
				write(1, p + i + j, 1);
			else
				write(1, ".", 1);
			++j;
		}
		write(1, "\n", 1);
		i += 16;
	}
}
int main(int ac, char **av)
{
	int tab[10] = {0, 23, 150, 255, 12,16, 21, 42};
	printf("%ld", sizeof(tab));
	print_memory(tab, sizeof(tab));
	return (0);
}
