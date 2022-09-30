#include "libft.h"

int main()
{
	printf("MEMCPY() TESTER \n");
	printf("ORIGINAL FUNCTION BEHAVIOUR \n");

	char	src[] = "01234567890123456789";
	char	dst[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t	n = 0;
	char *point = memcpy(dst, src, n);
	printf("Devuelto '%s' copiado n veccs '%zu' \n", point, n);

	char	src1[] = "01234567890123456789";
	char	dst1[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t	n1 = 10;
	char *point1 = memcpy(dst1, src1, n1);
	printf("Devuelto '%s' copiado n veccs '%zu' \n", point1, n1);
/*
	char	src1[40] = "01234567890123456789";
	size_t	len1 = 4;
	char *point1 = memset(src1, 'b', len1);
	printf("Devuelto '%s' letra b y len '%zu' \n", point1, len1);

	char	src2[40] = "01234567890123456789";
	size_t	len2 = 42;
	memset(src2, 'b', len2);
	printf("Devuelto '%s' letra b y len '%zu' \n", src2, len2);

	char	src3[40] = "01234567890123456789";
	size_t	len3 = -8;
	memset(src3, 'b', len3);
	printf("Devuelto '%s' letra b y len '%zu' \n", src3, len3);
*/
	printf("CUSTOM FUNCTION BEHAVIOUR \n");
	return(0);
}