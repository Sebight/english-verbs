#include <iostream>
#include "../verbs/VerbForm.h"
#include "../verbs/Verb.h"

#ifndef ENGLISH_VERBS_EVALUATOR_H
#define ENGLISH_VERBS_EVALUATOR_H


class Evaluator {
public:
    Evaluator();

    bool Evaluate(std::string input, VerbForm verbForm, Verb verb);
};


#endif //ENGLISH_VERBS_EVALUATOR_H
