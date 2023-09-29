#include <stdio.h>

int cal_power(int base, int power);
unsigned int binary_to_uint(const char *b);

int cal_power(int base, int power)
{
	int result = 1;
	
	while (power != 0)
	{
		result *= base;
       		power--;
	}

	return result;
}

unsigned int binary_to_uint(const char *b)
{
	int base, power, i, j, len;
	unsigned int result = 0;

	base = 2;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (j = 0; b[j] != '\0'; j++)
	{
		i = 0;
		power = len - 1;
		i = cal_power(base, power);
		i = i * (int)b[j];
		result += i;
		len--;
	}

	return (result);
}

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
