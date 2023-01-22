#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "settings.h"
#include "displays.h"
#include "logic.h"
using namespace std;


int main(){

    // this line of code clears the console
    cout << "\x1B[2J\x1B[0;0f";
    
    bool flag = true;

    while(flag){

        menuDisplay();

        char choice;

        cin >> choice;
        cout << endl;

        if(choice == '1'){
            cout << "\x1B[2J\x1B[0;0f";
            drawBoard();
        }else if(choice == '2'){
            cout << "\x1B[2J\x1B[0;0f";
            settingDisplay();
        }else if(choice == '3'){
            cout << "\x1B[2J\x1B[0;0f";
            quitDisplay();
            flag = false;
            break;
        }else{
            cout << "\x1B[2J\x1B[0;0f";
            cout << "Please enter a valid response!";
            cout << endl;
        }
    }
    
    return 0;
}


















