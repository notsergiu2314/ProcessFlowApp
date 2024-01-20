#pragma once

#include <chrono>
#include <ctime>
#include "stepFactory.hpp"

class Flow
{
    private:
        vector<Step*> steps;
        string flowName;
        chrono::time_point<chrono::system_clock> timestamp;
    
    public:
        Flow();
        ~Flow();
        void runFlow();
        void addStep(Step* stepToAdd);
        vector<Step*>* getSteps();
        void setFlowName();
        string getFlowName();
        string getTimestamp();
};
