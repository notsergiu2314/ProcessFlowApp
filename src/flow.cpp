#include "../headers/flow.hpp"

Flow::Flow()
{
    this->timestamp = chrono::system_clock::now();
    this->setFlowName();
}

Flow::~Flow()
{
    for (Step* step : this->steps) {
        delete step;
        cout<<"DELETED\n";
    }
}

void Flow::runFlow()
{
    for (int i=0; i < this->steps.size(); i++) {
        steps[i]->run(cout);
        cout << "done step" << endl;
    }
}

void Flow::addStep(Step* stepToAdd)
{
    this->steps.push_back(stepToAdd);
}

vector<Step*>* Flow::getSteps()
{
    return &this->steps;
}

void Flow::setFlowName()
{
    cout<<"Flow name: ";
    cin>>this->flowName;
}

string Flow::getFlowName()
{
    return this->flowName;
}

string Flow::getTimestamp()
{
    auto time = chrono::system_clock::to_time_t(timestamp);
    return ctime(&time);
}
