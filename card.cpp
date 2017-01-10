#include "card.h"


using namespace std;

Card::Card(){
    name = "";
    cost = 0;
    inDeck = false;
    typeOfCard = "";
    color = "";
}

Card::Card(string aName, int aCost, bool iDeck, string cardType, string aColor){
    name = aName;
    cost = aCost;
    inDeck = iDeck;
    typeOfCard = cardType;
    color = aColor;
}

void Card::setName(string aName){
    name = aName;
}

void Card::setCost(int nCost){
    cost = nCost;
}

void Card::setInDeck(bool deck){
    inDeck = deck;
}

void Card::setTypeOfCard(string cardType){
    typeOfCard = cardType;
}

void Card::setColor(string nColor){
    color = nColor;
}

ostream& operator <<(ostream& out, const Card& cards){
    out << "Single" << endl;
    out << cards.name << endl;
    out << cards.cost << endl;
    if(cards.inDeck){
        out << "True" << endl;
    }
    if(!cards.inDeck){
        out << "False" << endl;
    }
    out << cards.typeOfCard << endl;
    out << cards.color << endl;
    out << endl;
    
    return out;
}
    





