#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (EXIT_FAILURE);
    if (filename exists)
    {
        std::string filename = argv[1];
        std::string filename_replace = argv[1] + ".replace";
    }
    if (len is more than 0)
        std::string string1 = argv[2];
    if (len is more than 0)
        std::string string2 = argv[3];
    replace every s1 to s2 and write it to a FILENAME.replace file. 

    std::string line;
    ifstream file (filename);
    if (file.is_open())
    {
        while ( getline (file, line) )
        {
            cout << line << '\n'; // here get line and rewrite it.
        }
        file.close();
    }
    else
        std::cout << "Unable to open file";

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
}

https://cplusplus.com/reference/string/string/
https://www.bgsu.edu/arts-and-sciences/computer-science/cs-documentation/writing-data-to-files-using-c-plus-plus.html 
