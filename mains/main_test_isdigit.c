#include "libft.h"

int main()
{
	printf("TESTER ISDIGIT\n");
	printf("%d", ft_isdigit('A'));
	printf("%d", ft_isdigit('3'));
	printf("%d", ft_isdigit('\n'));
	printf("%d", ft_isdigit(65));
	printf("%d", ft_isdigit(51));
	printf("%d", ft_isdigit(13));
	printf("%d", ft_isdigit(-23));
	printf("%d", ft_isdigit(164));
	printf("%d", ft_isdigit(EOF));
	printf("%s", "---");
	printf("%d", isdigit('A'));
	printf("%d", isdigit('3'));
	printf("%d", isdigit('\n'));
	printf("%d", isdigit(65));
	printf("%d", isdigit(51));
	printf("%d", isdigit(13));
	printf("%d", isdigit(-23));
	printf("%d", isdigit(164));
	printf("%d", isdigit(EOF));

	return(0);
}
