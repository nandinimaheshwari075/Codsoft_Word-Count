#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open the file." << endl;
        return 1;
    }

    string line;
    int wordCount = 0;

    while (getline(inputFile, line)) {
        istringstream iss(line);
        string word;

        while (iss >> word) {
            // Increment the word count for each word encountered
            wordCount++;
        }
    }

    inputFile.close();

    cout << "Total number of words in the file: " << wordCount << endl;

    return 0;
}
