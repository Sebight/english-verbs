#include <vector>
#include "iostream"
#include "VerbForm.h"

#ifndef ENGLISH_VERBS_VERB_H
#define ENGLISH_VERBS_VERB_H

class Verb {
public:
    // Constructor
    Verb(std::string infinitive, std::string pastSimple, std::string pastParticiple);

    // Fields
    std::string Infinitive;
    std::string PastSimple;
    std::string PastParticiple;

    static std::vector<std::string> GetFormsNames();

    // Funcs
    std::string GetFormByFormType(VerbForm form);
};

#endif //ENGLISH_VERBS_VERB_H
