#include "libft.h"

int main()
{
	printf("MEMSET() TESTER \n");
	printf("ORIGINAL FUNCTION BEHAVIOUR \n");

	char	src[40] = "01234567890123456789";	
	size_t	len = 0;
	char *point = memset(src, 'b', len);
	printf("Devuelto '%s' letra b y len '%zu' \n", point, len);

	char	src1[40] = "01234567890123456789";
	size_t	len1 = 4;
	char *point1 = memset(src1, 'b', len1);
	printf("Devuelto '%s' letra b y len '%zu' \n", point1, len1);
/*
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
	char	src4[40] = "01234567890123456789";	
	size_t	len4 = 0;
	char *point4 = memset(src4, 'b', len4);
	printf("Devuelto '%s' letra b y len '%zu' \n", point4, len4);

	char	src5[40] = "01234567890123456789";
	size_t	len5 = 4;
	char *point5 = memset(src5, 'b', len5);
	printf("Devuelto '%s' letra b y len '%zu' \n", point5, len5);
/*
	char	src6[40] = "01234567890123456789";
	size_t	len6 = 42;
	memset(src6, 'b', len6);
	printf("Devuelto '%s' letra b y len '%zu' \n", src6, len6);

	char	src7[40] = "01234567890123456789";
	size_t	len7 = -8;
	memset(src7, 'b', len7);
	printf("Devuelto '%s' letra b y len '%zu' \n", src7, len7);
*/
	return(0);
}