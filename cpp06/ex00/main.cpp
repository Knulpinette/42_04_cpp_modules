#include "Conversions.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: there should be only one argument." << std::endl;
        return (0);
    }

    Conversions    conversions = Conversions(argv[1]);
  /*  Conversions    exampleConversions = Conversions("g");
    Conversions    copyConversion = Conversions(conversions);
    
	copyConversion.printConversions();
    copyConversion = exampleConversions;
	copyConversion.printConversions(); */

	conversions.printConversions();


    return (0);
}