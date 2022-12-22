#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>

#include "verbs/Verb.h"
#include "./evaluator/Evaluator.h"
#include "./utils/Utility.h"

int main() {
    std::vector<Verb> loadedVerbs;
    Evaluator eval;
    std::srand(std::time(nullptr));

    std::ifstream file("verbs.txt");
    std::string content;

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            content += line;
            content.push_back('\n');
        }
        file.close();
    }

    std::istringstream stream(content);
    std::string line;

    while (std::getline(stream, line)) {
        std::vector<std::string> splitLine = Utility::SplitString(line, ' ');

        if (splitLine.size() != 3) {
            std::cout << "Invalid line: " << line << std::endl;
            continue;
        }

        Verb verb = Verb(splitLine[0], splitLine[1], splitLine[2]);
        loadedVerbs.push_back(verb);
    }

    while (true) {
        int randIndex = rand() % loadedVerbs.size();
        Verb loadedVerb = loadedVerbs[randIndex];

        // Either VerbForm::PastSimple or VerbForm::PastParticiple
        int enumIndex = rand() % 2 + 1;
        VerbForm verbForm = static_cast<VerbForm>(enumIndex);

        std::cout << "What is the " << Verb::GetFormsNames()[enumIndex] << " of " << loadedVerb.Infinitive << std::endl;
        std::string answer;
        std::cin >> answer;
        bool evaluateRes = eval.Evaluate(answer, verbForm, loadedVerb);

        if (evaluateRes) {
            std::cout << "Correct!" << std::endl;
        } else {
            std::cout << "Incorrect! The correct answer is " << loadedVerb.GetFormByFormType(verbForm)
                      << std::endl;
        }
    }

    return 0;
}
