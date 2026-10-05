#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ifstream file("article.txt");

    if (!file.is_open()) {
        cout << "Error: Unable to open article.txt" << endl;
        return 1;
    }

    string line;
    int characters = 0;
    int words = 0;
    int lines = 0;

    while (getline(file, line)) {
        lines++;

        // Count characters
        characters += line.length();

        // Count words
        stringstream ss(line);
        string word;

        while (ss >> word) {
            words++;
        }
    }

    file.close();

    cout << "Total number of characters: " << characters << endl;
    cout << "Total number of words: " << words << endl;
    cout << "Total number of lines: " << lines << endl;

    return 0;
}