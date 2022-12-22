#include <algorithm>
#include "Evaluator.h"
#include "../utils/Utility.h"

bool Evaluator::Evaluate(std::string input, VerbForm verbForm, Verb verb) {
    std::string correctForm = verb.GetFormByFormType(verbForm);
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    std::transform(correctForm.begin(), correctForm.end(), correctForm.begin(), ::tolower);

    if (correctForm.find('/') != std::string::npos) {
        std::vector<std::string> split = Utility::SplitString(correctForm, '/');
        for (std::string &s: split) {
            if (s == input) {
                return true;
            }
        }
        return false;
    } else {
        return correctForm == input;
    }
}

Evaluator::Evaluator() = default;