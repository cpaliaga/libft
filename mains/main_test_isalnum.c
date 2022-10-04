#include "libft.h"

int main()
{
	printf("TESTER ISDIGIT\n");
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('3'));
	printf("%d", ft_isalnum('\n'));
	printf("%d", ft_isalnum(65));
	printf("%d", ft_isalnum(51));
	printf("%d", ft_isalnum(13));
	printf("%d", ft_isalnum(-23));
	printf("%d", ft_isalnum(164));
	printf("%d", ft_isalnum(EOF));
	printf("%s", "---");
	printf("%d", isalnum('A'));
	printf("%d", isalnum('3'));
	printf("%d", isalnum('\n'));
	printf("%d", isalnum(65));
	printf("%d", isalnum(51));
	printf("%d", isalnum(13));
	printf("%d", isalnum(-23));
	printf("%d", isalnum(164));
	printf("%d", isalnum(EOF));

	return(0);
}
