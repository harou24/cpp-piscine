#include <iostream>

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < argc)
		{
			 int j = 0;
			 while (argv[i][j])
			 {
			 	 putchar(std::toupper(argv[i][j]));
				 j++;
			 }
			i++;
		}
	}
	std::cout << "\n";
	return (0);
}
