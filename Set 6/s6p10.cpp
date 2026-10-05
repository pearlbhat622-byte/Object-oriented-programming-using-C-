#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream sourceFile("source.txt");
    ofstream destinationFile("destination.txt");

    // Check if source file opened successfully
    if (!sourceFile.is_open()) {
        cout << "Error: Unable to open source.txt" << endl;
        return 1;
    }

    // Check if destination file opened successfully
    if (!destinationFile.is_open()) {
        cout << "Error: Unable to open destination.txt" << endl;
        return 1;
    }

    // Copy contents from source to destination
    destinationFile << sourceFile.rdbuf();

    sourceFile.close();
    destinationFile.close();

    cout << "Data copied successfully!" << endl;

    return 0;
}