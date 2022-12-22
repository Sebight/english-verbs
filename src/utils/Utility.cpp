#include <sstream>
#include "Utility.h"

std::vector<std::string> Utility::SplitString(std::string input, char delimiter) {
    std::vector<std::string> splitLine;
    std::istringstream lineStream(input);
    std::string word;
    while (std::getline(lineStream, word, delimiter)) {
        splitLine.push_back(word);
    }
    return splitLine;
}
