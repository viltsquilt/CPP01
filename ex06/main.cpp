#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	std::string	level;

	if (ac != 2)
	{
		std::cerr << "Expected input: Level (Levels: DEBUG, INFO, WARNING, ERROR)" << std::endl;
		return (1);
	}
	level = av[1];
	std::string	levels[4]
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	int	count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			count = i + 1;
	}
	switch (count)
	{
		case (1):
		{
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			return (0);
		}
		case (2):
		{
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			return (0);
		}
		case (3):
		{
			harl.complain("WARNING");
			harl.complain("ERROR");
			return (0);
		}
		case (4):
		{
			harl.complain("ERROR");
			return (0);
		}
	}
	std::cout << "[ Probably complaining about something insignificant ]" << std::endl;
	return (0);
}
