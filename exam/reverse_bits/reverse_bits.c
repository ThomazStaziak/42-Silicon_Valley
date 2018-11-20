#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r;
	unsigned	len;
	
	r = 0;
	len = 8;
	while (len--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void	print_bits(unsigned char octet)
{
	int i;

	i = 256;
	while (i >>= 1)
	{
		(octet & i) ? write(1, "1", 1) : write(1, "0", 1);
	}
}

int	main(void)
{
	char c;

	c = 't';
	write(1, &c, 1);
	c = swap_bits(c);
	write(1, &c, 1);
	return (0);
}
