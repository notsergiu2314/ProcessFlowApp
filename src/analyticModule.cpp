#include "../headers/analyticModule.hpp" 

Analyzer::Analyzer()
{
    this->flowStartedCount = 0;
    this->flowCompletedCount = 0;
}

void Analyzer::update(int flag)
{
    if (flag == FLOW_STARTED_FLAG) {
        this->flowStartedCount++;
    }
    if (flag == FLOW_COMPLETED_FLAG) {
        this->flowCompletedCount++;
    }
}

void Analyzer::update(string stepName, int value, bool isSkipped)
{
    cout << "stepName: " << stepName << endl;
}