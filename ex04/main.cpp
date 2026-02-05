#include <fstream>
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Expected format: <filename> s1 s2" << std::endl;
		return (1);
	}
	std::string	file = (argv[1]);
	std::string	target = argv[2];
	std::string	replacement = argv[3];
	std::string	line;
	if (target.empty() || replacement.empty())
	{
		std::cerr << "Invalid input" << std::endl;
		return (1);
	}
	std::ifstream infile(file);
	if (!infile)
	{
		std::cerr << "Unable to open file" << std::endl;
		return (1);
	}
	std::ofstream outfile(file + ".replace");
	if (!outfile)
	{
		std::cerr << "Unable to create outfile" << std::endl;
		return (1);
	}
	while (1)
	{
		if (!std::getline(infile, line))
			break;
		size_t	position = 0;
		while ((position = line.find(target)) != std::string::npos)
		{
			{
				line.erase(position, target.length());
				line.insert(position, replacement);
			}
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}
