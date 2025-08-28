/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:24:51 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 19:12:14 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	fatal_error(std::string error)
{
	std::cerr << "Error: " << error << std::endl;
	return (1);
}

std::string	ft_replace(std::string content, std::string s1,
	std::string s2)
{
	size_t		pos;
	std::string result;

	if (s1.empty())
		return content;
	result = content;
	pos = 0;
	while ((pos = result.find(s1, pos)) != std::string::npos)
	{
		result.erase(pos, s1.length());
		result.insert(pos, s2);
		pos += s2.length();
	}
	return (result);
}

int main(int argc, char **argv)
{
	std::string			fileName;
	std::string			outFileName;
	std::string			s1;
	std::string			s2;
	std::string			content;
	std::stringstream	buffer;
	
	if (argc != 4)
		return (fatal_error("Correct usage: ./SedIsForLosers <file> <s1> <s2>"));
	std::cout << "SedIsForLosers starting... (by ysumeral)" << std::endl;
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream file(fileName.c_str());
	if (!file.is_open())
		return (fatal_error("File not found, exiting..."));
	buffer << file.rdbuf();
	file.close();
	content = ft_replace(buffer.str(), s1, s2);
	outFileName = fileName + ".replace";
	std::ofstream outFile(outFileName.c_str());
	if (!outFile)
		return (fatal_error("File cannot be opened, exiting..."));
	outFile << content;
	outFile.close();
	std::cout << "Success! " << outFileName << " created." << std::endl;
	return (0);
}