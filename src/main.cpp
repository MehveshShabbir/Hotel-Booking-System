#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Writing to a file
    std::ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << "Hello, this is a sample text.\n";
        outFile << "This is a new line in the text file.\n";
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing.\n";
    }

    // Reading from a file
    std::ifstream inFile("data.txt");
    std::string line;
    if (inFile.is_open()) {
        while (std::getline(inFile, line)) {
            std::cout << line << '\n';
        }
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading.\n";
    }

    return 0;
}
