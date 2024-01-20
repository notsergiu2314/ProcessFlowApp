#pragma once

#include <iostream>
#include <vector>
#include "../headers/flow.hpp"

using namespace std;

class Menu
{
    private:
        vector<Flow*> flows;
        
    public:
        Menu();

        vector<Flow*> getFlows();
        void createFlowButton();
        void runFlowButton();
};
