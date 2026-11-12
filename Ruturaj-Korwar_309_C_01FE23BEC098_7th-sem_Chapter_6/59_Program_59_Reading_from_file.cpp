#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("example.txt");
    std::string line;

    if (inFile.is_open()) {
        // Read file line by line
        while (std::getline(inFile, line)) {
            std::cout << line << '\n';
        }
        inFile.close();
    } else {
        std::cerr << "Error opening file for reading!\n";
    }
    return 0;
}
