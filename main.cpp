#include "card.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    string atype;
    string aname;
    string acolor;
    char choice;
    int acost;
    bool iDeck;
    const char * path = "/home/lexi/magicproject/output.csv";
    fstream fout;
    fout.open(path,ios::app);
    if(!fout){
    cout << "output failed." << endl;
    }
    cout << "welcome to the database\n";
    cout << "What is the name of the card?" << endl;
    getline(cin, aname);
    cout <<"What is the color?" << endl;
    getline(cin, acolor);
    cout << "what type is it?" << endl;
    getline(cin, atype);
    cout << "is it currently in a deck? (y/n)" << endl;
    cin >> choice;
    if((choice == 'y')||(choice == 'Y'))
        iDeck = true;
    if((choice == 'n')||(choice == 'N'))
        iDeck = false;
    cout << "enter the cost of the card." << endl;
    cin >> acost;

    Card anotherCard(aname, acost, iDeck, atype, acolor);
    cout << "Name: " << anotherCard.getName() << endl;
    cout << "Cost: " << anotherCard.getCost() << endl;
    if(anotherCard.getDeck()){
        cout << "It is in a Deck." << endl;
    }
    else if(!anotherCard.getDeck()){
        cout << "It is not in a Deck" << endl;
    }
    cout << "type: " << anotherCard.getCardType() << endl;
    cout << "color: " << anotherCard.getColor() << endl;
    
    char choice2;
    cout << "are you done entering cards? (y/n)" << endl;
    cin >> choice2;
  
    if(choice2 == 'y'){
       fout << anotherCard;
    }
    
  return 1;
}

