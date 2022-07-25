#include <iostream>
#include <fstream>
#include <string>

bool	input_is_correct(int argc, char **argv);

int main(int argc, char **argv)
{
    if (!input_is_correct(argc, argv))
        return (EXIT_FAILURE);
    
    std::string filename = argv[1];
    std::string original_string = argv[2];
    std::string replace_string = argv[3];

   // run code & replace every s1 to s2 and write it to a FILENAME.replace file. 


    // check that filename exists and we can read from it
    std::string line;
    ifstream file (filename);
    if (file.is_open()) //checking that filename exists
    {
        while ( getline (file, line) )
        {
            cout << line << '\n'; // here get line and rewrite it.
        }
        file.close();
    }
    else
        std::cout << "Unable to open file";

    // rewrite to other file
    std::string filename_replace = argv[1] + ".replace";
    ofstream newFile;
    newFile.open(filename_replace);
    if (newFile.is_open())
    {
        newFile << "write to file"
            << std::endl;
        newFile.close();
    }
    else
        std::cout << "Unable to open file";

    return (0);
}

bool	input_is_correct(int argc, char **argv)
{
	if (argc != 4
        || argv[1] == '/0' 
		|| argv[2] == '/0'
		|| argv[3] == '/0')
    {
            std::cout << "Input is incorrect"
                        << std::endl
                        << "./replace filename string_to_replace string_that_replaces"
                        << std::endl;
		return (false);
    }
	else
		return (true);
}

// https://cplusplus.com/reference/string/string/
// https://www.bgsu.edu/arts-and-sciences/computer-science/cs-documentation/writing-data-to-files-using-c-plus-plus.html 
