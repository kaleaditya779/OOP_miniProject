#include <iostream>
#include <string>

using namespace std;

#include "allFuncs.h"

void passwordVerification(void);
void mainMenu(void);

void passwordVerification()
{
    string password;
    cout << "\n\n\n\n\n\t\t\t\t\t";
    cout << "\n\n\n\t\t\t\t\tEnter Password : ";
    do
    {
        cin >> password;
        if (password != "password")
        {    
            cout << "\n\n\n\n\n\t\t"
                 << "wrong password!, try again or type 'quit' / 'exit' to Quit The program.";
            cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }
        if (password == "Quit" || password == "quit" || password == "exit" || password == "Exit" || password == "QUIT" || password == "EXIT")
        {   
            cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";
            for (int i = 0; i < 4; i++)
            {    
                cout << ".";
            }
            exit(0);
        }
    }
    while (password != "password");
    mainMenu(); // main menu function is in the Header File adminFunction.h
}



int main()
{
    passwordVerification();
    return 0;
}
