#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
 
std::vector<std::vector<std::string>> readCSVFile(const std::string& filename) {
    std::vector<std::vector<std::string>> content;
    std::vector<std::string> row;
    std::string line, word;

    std::fstream file(filename, std::ios::in);
    if (file.is_open()) {
        while (std::getline(file, line)) {
            row.clear();

            std::stringstream str(line);

            while (std::getline(str, word, ',')) {
                row.push_back(word);
            }
            content.push_back(row);
        }
    } else {
        std::cout << "Could not open the file\n";
    }

    return content;
}

int main() {
    std::string fname;
    fname = "iris.csv";

    std::vector<std::vector<std::string>> content = readCSVFile(fname);
    //informations about how to print the content
    for (int i = 0; i < content.size(); i++) {
        for (int j = 0; j < content[i].size(); j++) {
            std::cout << content[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}