#pragma once
// Define flags
#define FLOW_STARTED_FLAG 1
#define FLOW_COMPLETED_FLAG 2

#include <iostream>
#include <vector>
#include "observer.hpp"

using namespace std;

class Analyzer : public Observer
{
    private:
        int flowStartedCount;
        int flowCompletedCount;
        vector<string> screens;
        vector<int> skippedCount;
        vector<int> errorCount;
        
    public:
        Analyzer();
        ~Analyzer() = default;
        void update(int flag) override;
        void update(string stepName, int errors, bool isSkipped);
};
