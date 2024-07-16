/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmadzaaza <ahmadzaaza@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 22:30:59 by ahmadzaaza        #+#    #+#             */
/*   Updated: 2024/07/16 19:31:09 by ahmadzaaza       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "Bad usage: ./sed <filename> <string_to_replace> <replace_by>" << std::endl;
		return (1);
	}

	std::ifstream file(argv[1]);
	std::string file_name = argv[1];
	std::string string_to_replace = argv[2];
	std::string replace_by = argv[3];

	if (file.fail())
	{
		perror("Error");
		return (1);
	}
	if (file.is_open())
	{
		std::ofstream ofs(file_name + ".replace");
		if (ofs.fail())
		{
			{
				perror("Error");
				file.close();
				return (1);
			}
		}

		std::string line;
		while (std::getline(file, line))
		{
			size_t word_pos;
			if (!string_to_replace.empty())
			{
				word_pos = line.find(string_to_replace);
				while (word_pos != std::string::npos)
				{
					line = line.substr(0, word_pos) + replace_by
						+ line.substr(word_pos + string_to_replace.length());
					word_pos = line.find(string_to_replace, word_pos
							+ replace_by.length());
				}
			}
			ofs << line << std::flush;
			if (!file.eof())
				ofs << std::endl;
		}
		file.close();
		ofs.close();
	}
	return (0);
}