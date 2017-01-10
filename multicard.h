#ifndef H_MULTICARD
#define H_MULTICARD
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class MultiCard{
private:
	int multiCCost[7]= {0,0,0,0,0,0,0};
    string name, type;
    vector<string>colors;
    bool inDeck = false;
public:
	MultiCard();
    MultiCard(int mC[], string name, string type, vector<string>aColor, bool iDec);
    
    void setName(string n);
    void setType(string t);
    void setColors(vector<string>colars);
    void setCost(int m[]);
    void setMCost();

    string getName() {return name;}
    string getType() {return type;}
    
    void printCard();
    friend ostream& operator <<(ostream& fout, const MultiCard& fCard);
	};

#endif
