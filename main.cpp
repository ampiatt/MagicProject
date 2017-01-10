#include <iostream>
#include <fstream>
#include "card.h"
#include "multicard.h"
using namespace std;

int main(){
    const char * path = "/home/lexipiatt/MagicProject/MagicProject-master/output.csv";
    fstream fout;
    string aName, aType, aColor;
    int aCost = 0; 
    bool iDeck = false;
    bool flag = false;
    int mC[7] = {0,0,0,0,0,0,0};
    vector<string>cC; 
    char choice2 = 'l';
    char choice1 = 'j';
    char choice3 = 'j';
    fout.open(path,ios::app);
    if(!fout){
        cout << "Opening file failed." << endl;
    }
    
    cout << "Welcome to your MTG Database." << endl;
    do{  
        cout << "Is the card a multicolor card? (y/n)" << endl;
        cin >> choice1;

        if((choice1 == 'y') || (choice1 == 'Y')){
            cout << "Please enter the name of the card." << endl;
            cin.ignore();
            getline(cin, aName);
            cout << "Please enter the type of card. (instant, sorcery.. etc)" << endl;
            getline(cin, aType);
            cout << "How many colors is the card?" << endl;
            int numC = 0;
            cin >> numC;
            cin.ignore();
            cout << "enter the colors of the card. press enter in between." << endl;
            for(int i = 0; i < numC; i++){
                getline(cin, aColor);
                cC.push_back(aColor);
            }      
            cout << "Is the card currently in a deck?(y/n)" << endl;
            cin >> choice2;
            if((choice2 == 'y') || (choice2 == 'Y')){
                iDeck = true;
            }
            else if((choice2 == 'n') || (choice2 == 'N')){
                iDeck = false;
            }
            MultiCard nCard(mC, aName, aType, cC, iDeck);
            nCard.setMCost();
            fout << nCard; 
        }
        if((choice1 == 'n') || (choice1 == 'N')){
            cout << "Please enter the name of the card." << endl;
            cin.ignore();
            getline(cin, aName);
            cout << "Please enter the type of card. (instant, sorcery.. etc)" << endl;
            getline(cin, aType);
            cout << "What is the color on the card?" << endl;
            getline(cin, aColor);
            cout << "Is the card currently in a deck?" << endl;
            cin >> choice2;
            if((choice2 == 'y') || (choice2 == 'Y')){
                iDeck = true;
            }   
            else if((choice2 == 'n') || (choice2 == 'N')){
                iDeck = false;
            }
            cout << "What is the cost of the card?" << endl;
            cin >> aCost;
        
            Card aCard(aName, aCost, iDeck, aType, aColor);
            fout << aCard;
        }
    cout << "Do you have anymore cards to enter? (y/n)" <<  endl;
    cin >> choice3;
    if((choice3 == 'y') || (choice3 == 'Y')){
        flag = true;
    }
    else if((choice3 == 'n') || (choice3 == 'N')){
        flag = false;
    }   
    }while(flag); 
    
return 1;
}
        
