#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string s1;
	std::string s2;
	std::string res;
	std::string line;
	
	if (argc == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		res = filename + ".replace";
		std::ifstream readfile;
		readfile.open(filename);
		if (readfile.is_open())
		{
			std::ofstream output(res);
			if (output.fail())
			{
				std::cout << "Output file Error" << std::endl;
				exit(EXIT_FAILURE);
			}
			while (std::getline(readfile, line))
			{
				std::size_t found = line.find(s1);
				if (found != std::string::npos)
					line.replace(found, s1.length(), s2);
				output << line;
				output << std::endl;
			}
			readfile.close();
			output.close();
		}
	}
	else
	{
		std::cout << "Error nb arg" << std::endl;
		exit(EXIT_FAILURE);
	}
	return (0);
}
