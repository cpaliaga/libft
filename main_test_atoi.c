#include "libft.h"

int main()
{
	printf("ATOI() TESTER \n");
	printf("ORIGINAL FUNCTION BEHAVIOUR \n");
	printf("Limite positivo de int '%d' \n", atoi("2147483647"));
	printf("Limite negativo de int '%d' \n", atoi("-2147483646"));
	printf("Overflow de limite positivo '%d' \n", atoi("2147483648"));
	printf("Owerflow de limite negativo '%d' \n", atoi("-2147483647"));
	printf("Con decimales . '%d' \n", atoi("3456.45"));
	printf("Con otros símbolos '%d' \n", atoi("-+--3456"));
	printf("Con otros símbolos '%d' \n", atoi("(-)+3456"));
	printf("CUSTOM FUNCTION BEHAVIOUR \n");
	printf("Limite positivo de int '%d' \n", ft_atoi("2147483647"));
	printf("Limite negativo de int '%d' \n", ft_atoi("-2147483646"));
	printf("Overflow de limite positivo '%d' \n", ft_atoi("2147483648"));
	printf("Owerflow de limite negativo '%d' \n", ft_atoi("-2147483647"));
	printf("Con decimales . '%d' \n", ft_atoi("3456.45"));
	printf("Con otros símbolos '%d' \n", ft_atoi("-+--3456"));
	printf("Con otros símbolos '%d' \n", ft_atoi("(-)+3456"));
	
	return(0);
}