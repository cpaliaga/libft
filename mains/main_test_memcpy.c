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
	char    src2[] = "01234567890123456789";
	char    dst2[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t  n2 = 30;
	char *point2 = memcpy(dst2, src2, n2);
	printf("Devuelto '%s' copiado n veccs '%zu' \n", point2, n2);
	/*
	char    src3[] = "En_un_lugar_de_la_Mancha_de_cuyo_nombre_no_quiero_acordarme";
	char    dst3[] = "01234567890123456789";
	size_t  n3 = 100;
	char *point3 = memcpy(dst3, src3, n3);
	printf("Devuelto '%s' copiado n veccs '%zu' \n", point3, n3);
	*/
	printf("CUSTOM FUNCTION BEHAVIOUR \n");
	char    src4[] = "01234567890123456789";
    char    dst4[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
    size_t  n4 = 0;
    char *point4 = ft_memcpy(dst4, src4, n4);
    printf("Devuelto '%s' copiado n veccs '%zu' \n", point4, n4);
    char    src5[] = "01234567890123456789";
    char    dst5[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
    size_t  n5 = 10;
    char *point5 = ft_memcpy(dst5, src5, n5);
    printf("Devuelto '%s' copiado n veccs '%zu' \n", point5, n5);
    char    src6[] = "01234567890123456789";
    char    dst6[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
    size_t  n6 = 30;
    char *point6 = ft_memcpy(dst6, src6, n6);
    printf("Devuelto '%s' copiado n veccs '%zu' \n", point6, n6);
    
	char    src7[] = "En_un_lugar_de_la_Mancha_de_cuyo_nombre_no_quiero_acordarme";
    char    dst7[] = "01234567890123456789";
    size_t  n7 = 100;
    char *point7 = ft_memcpy(dst7, src7, n7);
    printf("Devuelto '%s' copiado n veccs '%zu' \n", point7, n7);
	

	return(0);
}
