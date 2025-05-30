#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream outFile("data.txt");
    outFile << "C++ File I/0";
    outFile.close();

    std::ifstream inFile("data.txt");
    std::string content;
    inFile >> content;
    inFile.close();

    std::cout << "Read from file: " << content << "\n";
    return 0;
}
