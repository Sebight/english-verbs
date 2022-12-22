#include "Verb.h"
#include "VerbForm.h"

Verb::Verb(std::string infinitive, std::string pastSimple, std::string pastParticiple) {
    this->Infinitive = infinitive;
    this->PastSimple = pastSimple;
    this->PastParticiple = pastParticiple;
}

std::string Verb::GetFormByFormType(VerbForm form) {
    if (form == VerbForm::Infinitive)
    {
        return this->Infinitive;
    } else if (form == VerbForm::PastSimple)
    {
        return this->PastSimple;
    } else if (form == VerbForm::PastParticiple)
    {
        return this->PastParticiple;
    }
}

std::vector<std::string> Verb::GetFormsNames() {
    return std::vector<std::string>{"Infinitive", "Past Simple", "Past Participle"};
}
