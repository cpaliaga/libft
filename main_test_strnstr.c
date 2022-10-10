#include "libft.h"

int main()
{
	printf("STRNSTR() TESTER \n");
	printf("ORIGINAL FUNCTION BEHAVIOUR \n");
	printf("Cadena devuelta '%s' \n", strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","cuyo", 300));
	printf("Puntero devuelto '%p' \n", strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","cuyo", 300));
	printf("Hay vacio '%s' \n", strnstr("","cuyo", 300));
	printf("No se encuentra patron (len) 0 '%s' \n", strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","cuyo", 0));
	printf("No se encuentra patron (len) insuficiente '%s' \n", strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","cuyo", 5));
	printf("No se encuentra patron (needle) vacio '%s' \n", strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","", 5));
	printf("No se encuentra patron (needle) sin coincidencia '%s' \n", strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","mello", 5));
	//printf("CUSTOM FUNCTION BEHAVIOUR \n");
	//printf("Cadena devuelta '%s' \n", ft_strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","cuyo", 300));
	//printf("Puntero devuelto '%p' \n", ft_strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","cuyo", 300));
	//printf("Hay vacio '%s' \n", ft_strnstr("","cuyo", 300));
	//printf("No se encuentra patron (len) 0 '%s' \n", ft_strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","cuyo", 0));
	//printf("No se encuentra patron (len) insuficiente '%s' \n", ft_strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","cuyo", 5));
	//printf("No se encuentra patron (needle) vacio '%s' \n", ft_strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","", 5));
	//printf("No se encuentra patron (needle) sin coincidencia '%s' \n", ft_strnstr("En un lugar de la Mancha de cuyo nombre no quiero acordarme","mello", 5));
	
	return(0);
}
