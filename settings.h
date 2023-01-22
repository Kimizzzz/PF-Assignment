#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <limits>
#include "validations.h"

using namespace std;

// gets the current amount of zombie saved
string currentZombieCount(){
    string count;
    string res;
    ifstream zombieCount("zombieCount.txt");
    while(getline(zombieCount, count)){
        res = count;
    }
    return res;
}

//sets a new zombie count and saves it
void setNewZombieCount(int newZombieCount){
    ofstream zombieCount("zombieCount.txt");
    zombieCount << newZombieCount;
    zombieCount.close();
}

// displays the menu setting to change zombie count
void zombieCountDisplay(){
    
    cout << "                                   " << endl;
    cout << "    =-----------------------------=" << endl;
    cout << "    |           Settings          |" << endl;
    cout << "    =-----------------------------=" << endl;
    cout << endl;

    cout << "Current zombies count --> " << currentZombieCount() << endl << endl;
    cout << "Enter Number Of Zombies (max 9) : ";

}

// logic behind how to receive new zombie count intake
void zombieCountLogic(){

    int newZombieCount;
    cin >> newZombieCount;

    while(cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cout << "\x1B[2J\x1B[0;0f";
        cout << "Bad entry.  Enter A Number!  ";
        zombieCountDisplay();
        cin >> newZombieCount;
    }
    if(countCheck(newZombieCount)){
        setNewZombieCount(newZombieCount);
    }else{
        cout << "\x1B[2J\x1B[0;0f";
        cout << "Please Enter A Valid Response!";
        cout << endl;
        zombieCountDisplay();
        zombieCountLogic();
    }
}

// displays setting menu
void settingDisplay(){
    cout << "\x1B[2J\x1B[0;0f";
    char choice;
    
    cout << "                                   " << endl;
    cout << "    =-----------------------------=" << endl;
    cout << "    |           Settings          |" << endl;
    cout << "    =-----------------------------=" << endl;
    cout << endl;

    cout << "(1) Change Board Dimension" << endl;
    cout << "(2) Change Zombie Count" << endl;
    cout << "(3) Back" << endl;

    cout << endl;
    cout << "Enter Your Selection: ";
    cin >> choice;

    if (choice == '3'){
        cout << "\x1B[2J\x1B[0;0f";
        return;
    }else if (choice == '2'){
        cout << "\x1B[2J\x1B[0;0f";
        zombieCountDisplay();
        zombieCountLogic();
        settingDisplay();
    }
}











