#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

// cehcks if input character is a number or not
int isDigit(char input){
    int ch = input;
    return isdigit(ch);
}


// checks if new zombie amount is a sensible amount
bool countCheck(int newZombieCount){
    bool flag;
    if (newZombieCount > 9 || newZombieCount < 1){
        flag = false;
    }else{
        flag = true;
    }
    return flag;
}







