#ifndef H_CARD
#define H_CARD

#include <iostream>
#include <vector>
#include <string>
#include <fstream>



using namespace std;

class Card{
private:
string name;
int cost;
bool inDeck = false;
string typeOfCard;
string color;

public:
Card();
Card(string aName, int aCost, bool iDeck, string cardType, string aColor);

void setName(string aName);
void setCost(int aCost);
void setInDeck(bool deck);
void setTypeOfCard(string cardType);
void setColor(string nColor);


void printCard(ofstream &out, Card cards);
// 
string getName(){return name;}
int getCost(){return cost;}
bool getDeck(){return inDeck;}
string getCardType(){return typeOfCard;}
string getColor(){return color;}
friend ostream& operator<<(ostream& out, const Card& nCard);

};
#endif


