#include <iostream>
#include <fstream>

void	ft_replace(std::string &str, std::string oldWord, std::string newWord)
{
	size_t	pos = 0;

	while ((pos = str.find(oldWord, pos)) != std::string::npos)
	{
		str.erase(pos, oldWord.length());
		str.insert(pos, newWord);
		pos += newWord.length();
	}
}

int	main(int argc, char **argv)
{
	std::string		line;

	if (argc != 4)
	{
		std::cerr << "Usage: ./sed [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	std::ifstream	ifs(argv[1]);
	if (ifs.is_open() == false)
	{
		std::cout << "Error: failed to open file" << std::endl;
		return (1);
	}
	std::ofstream	ofs(std::string(argv[1]) + ".replace");
	if (ofs.is_open() == false)
	{
		std::cout << "Error: failed to open file" << std::endl;
		return (1);
	}
	while(true)
	{
		std::getline(ifs, line);
		ft_replace(line, argv[2], argv[3]);
		ofs << line;
		if (ifs.eof() == false)
			ofs << std::endl;
		else
			break;
	}
	ifs.close();
	ofs.close();

	return (0);
}
