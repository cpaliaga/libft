#include "libft.h"

int main()
{
	printf("BZERO() TESTER \n");
	printf("ORIGINAL FUNCTION BEHAVIOUR \n");
	char s[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t n = 0;
	bzero(s, n);
	printf("Cadena modificada con null '%zu' veces '%s' \n", n, s);
	char s1[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t n1 = 5;
	bzero(s1, n1);
	printf("Cadena modificada con null '%zu' veces '%s' \n", n1, s1+n1);	
	printf("CUSTOM FUNCTION BEHAVIOUR \n");
	char s2[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t n2 = 0;
	ft_bzero(s2, n2);
	printf("Cadena modificada con null '%zu' veces '%s' \n", n2, s2);
	char s3[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t n3 = 5;
	ft_bzero(s3, n3);
	printf("Cadena modificada con null '%zu' veces '%s' \n", n3, s3+n3);

	return(0);
}