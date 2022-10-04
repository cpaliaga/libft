#include "libft.h"

int main()
{
	printf("TESTER ISPRINT\n");
	printf("%d", ft_isprint('A'));
	printf("%d", ft_isprint('3'));
	printf("%d", ft_isprint('\n'));
	printf("%d", ft_isprint(65));
	printf("%d", ft_isprint(51));
	printf("%d", ft_isprint(13));
	printf("%d", ft_isprint(-23));
	printf("%d", ft_isprint(164));
	printf("%d", ft_isprint(EOF));
	printf("%s", "---");
	printf("%d", isprint('A'));
	printf("%d", isprint('3'));
	printf("%d", isprint('\n'));
	printf("%d", isprint(65));
	printf("%d", isprint(51));
	printf("%d", isprint(13));
	printf("%d", isprint(-23));
	printf("%d", isprint(164));
	printf("%d", isprint(EOF));

	return(0);
}
