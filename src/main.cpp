
#include <iostream>
//#include "../headers/stepFactory.hpp"
#include "../headers/menu.hpp"
#include "../headers/stepFactory.hpp"


int main()
{

    Menu menu;
    cout<<"=====MENU====\n";


    char answer;

    do {
        cout<<"What do you want to do?\n\n"
            <<"1. Create a flow\n"
            <<"2. Run a flow\n"
            <<"3. Exit\n";

        cout<<"Your answer: ";
        cin>>answer;
        getchar();

        if (answer == '1') {
            menu.createFlowButton();
        }
        else if (answer == '2') {
            if (menu.getFlows().size() > 0) {
                menu.runFlowButton();
            }
            else {
                cout<<"No flows have been created.\n";
                cout<<"Press [ENTER] to continue.";
                getchar();
            }
        }
        else if (answer == '3') {
            cout<<"Bye!\n";
        }
        else {
            cout<<"Invalid answer.\n";
            cout<<"Press [ENTER] to continue.";
            getchar();
        }


    } while (answer != '3'); 

    return 0;
}