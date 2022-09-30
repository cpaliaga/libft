#include "libft.h"

int	main()
{
	printf("TESTER ISALPHA\n");
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('3'));
	printf("%d", ft_isalpha('\n'));
	printf("%d", ft_isalpha(65));
	printf("%d", ft_isalpha(51));
	printf("%d", ft_isalpha(13));
	printf("%d", ft_isalpha(-23));
	printf("%d", ft_isalpha(164));
	printf("%d", ft_isalpha(EOF));
	printf("%s", "---");
	printf("%d", isalpha('A'));
	printf("%d", isalpha('3'));
	printf("%d", isalpha('\n'));
	printf("%d", isalpha(65));
	printf("%d", isalpha(51));
	printf("%d", isalpha(13));
	printf("%d", isalpha(-23));
	printf("%d", isalpha(164));
	printf("%d\n", isalpha(EOF));

	return(0);
}
