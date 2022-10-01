#include "libft.h"

int main()
{
	printf("TESTER STRLEN\n");
	const char a[5] = "Hola";
	const char b[14] = "que tal estas";
	const char c[3] = "tu";
	const char d[20] = "hoy dia de tu santo";
	printf("La frase '%s' tiene %zu posiciones.\n", a, ft_strlen(a));
	printf("La frase '%s' tiene %zu posiciones.\n", b, ft_strlen(b));
	printf("La frase '%s' tiene %zu posiciones.\n", c, ft_strlen(c));
	printf("La frase '%s' tiene %zu posiciones.\n", d, ft_strlen(d));

	return(0);
}
