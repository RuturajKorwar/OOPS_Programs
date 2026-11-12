#include <iostream>
#include <fstream> // Required header

int main() {
    // 1. Create stream object and open file
    std::ofstream outFile("example.txt");

    // 2. Always verify if the file opened successfully
    if (outFile.is_open()) {
        outFile << "Hello, World!\n";
        outFile << "Writing to files in C++ is straightforward.\n";

        // 3. Close the file to free system resources
        outFile.close();
        std::cout << "Data successfully written.\n";
    } else {
        std::cerr << "Error opening file for writing!\n";
    }
    return 0;
}
