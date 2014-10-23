#include <fstream>
#include <iostream>
#include <string.h>
 
void fileGet()
{
    using namespace std;

    std::cout << "What file would you like to open?" << endl;
    std::cout << "File name + extention - (gf.config)" << endl << "File >> ";
    char fileName[25];
    cin.get(fileName, 25);

    ifstream inf(fileName);

    if (!inf)
    {
        cerr << "Uh oh, " << fileName << " could not be opened for reading!" << endl;
    }

    while (inf)
    {
        std::string strInput;
        getline(inf, strInput);
        cout << strInput << endl;
    }
}
