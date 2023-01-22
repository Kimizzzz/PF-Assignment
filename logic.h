#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;



// draws the game board 
void drawBoard(){
    int column, row;

    cout << "column: ";
    cin >> column;

    cout << "row: ";
    cin >> row;
    cout << endl;


    for(int k = 0; k < row; k++){

        for(int i = 0; i < (column + 1); i++){
        cout << '+';
        if(i != column){
            for(int j = 0; j < 3; j++){
            cout << '-';
            }
        }
        }

        cout << endl; 

        for(int i = 0; i < (column + 1); i++){
            cout << '|';
            if(i != column){
                for(int j = 0; j < 3; j++){
                cout << ' ';
                }
            }
        }

        cout << endl;
    }

    for(int i = 0; i < (column + 1); i++){
        cout << '+';
        if(i != column){
            for(int j = 0; j < 3; j++){
            cout << '-';
            }
        }
    }
}











