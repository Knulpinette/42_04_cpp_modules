#include <iostream>
#include <fstream>
#include <string>

/* TO TEST : 
				./replace test is IS 
				./replace test This That
				./replace test or NEWTEXT
				./replace test "?"" 000000000
*/

bool	input_is_correct(int argc, char **argv)
{
	if (argc != 4
        || argv[1][0] == '\0' 
		|| argv[2][0] == '\0'
		|| argv[3][0] == '\0')
    {
            std::cout << "Error: wrong number of arguments or empty arguments."
                        << std::endl
                        << "./replace filename string_to_replace string_that_replaces"
                        << std::endl;
		return (false);
    }
	else
		return (true);
}

// & (reference) is like a constant pointer.
std::string	rewrite_line(const std::string &line,
						 const std::string &original_string,
						 const std::string &new_text)
{
	std::string	newLine;
	std::string tempLine;
	size_t		position = 0;

	if (line.find(original_string, position) == std::string::npos) // const size_t npos = -1
		return (line);
	while (line[position] 
			&& line.find(original_string, position) != std::string::npos)
	{
		tempLine = line.substr(position, line.find(original_string, position) - position);
		newLine += tempLine + new_text;
		position += tempLine.length() + original_string.length();
	}
	newLine += line.substr(position);
	return (newLine);
}

bool    replace(const std::string &inFilename, 
                const std::string &original_string, 
                const std::string &new_text)
{
    std::ifstream inFile;
    std::ofstream outFile;
    std::string outFilename = inFilename + ".replace";
    inFile.open(inFilename.c_str()); // You need a const char * or char * pointer to feed the open() function.
    outFile.open(outFilename.c_str()); // std::string.c.str returns a char * pointer to the string.
    if (!inFile.is_open() || !outFile.is_open()) 
	{
		std::cout << "Error: unable to open file";
		return (false);
	}
	std::string line;
	std::string newLine;
	while ( std::getline(inFile, line) )
    {
		newLine = rewrite_line(line, original_string, new_text);
		outFile << newLine << std::endl;
    }
    inFile.close();
	outFile.close();
	return (true);
}

int main(int argc, char **argv)
{
    if (!input_is_correct(argc, argv))
        return (1);
    std::string filename = argv[1];
    std::string original_string = argv[2];
    std::string new_text = argv[3];
    if (!replace(filename, original_string, new_text))
        return (1);
    return (0);
}

/* Help Links */
// https://cplusplus.com/reference/string/string/
// https://www.bgsu.edu/arts-and-sciences/computer-science/cs-documentation/writing-data-to-files-using-c-plus-plus.html 
