#include "libft.h"

int main()
{
	printf("MEMMOVE() TESTER \n");
	printf("ORIGINAL FUNCTION BEHAVIOUR \n");
	char	src[] = "01234567890123456789";
	char	dst[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t	n = 10;
	char	*point = memmove(dst, src, n);
	printf("Devuelto '%s' copiado n veccs '%zu' \n", point, n);

	char	src1[] = "01234567890123456789";
	char	dst1[] = "En un lugar de la Mancha de cuyo nombre no quiero acordarme";
	size_t 	n1 = 30;
	char	*point1 = memmove(dst1, src1, n1);
	printf("Devuelto '%s' copiado n veccs '%zu' \n", point1, n1);

	return(0);
}
