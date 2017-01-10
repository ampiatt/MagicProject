#include "multicard.h"

MultiCard::MultiCard(){
    name = "";
    type = "";
    for(int i = 0; i < 7; i++){
        multiCCost[i] = 0;
    }
    colors.resize(0);
    inDeck = false;
}

MultiCard::MultiCard(int mC[], string aName, string aType, vector<string>aColor, bool iDec){
    name = aName;
    type = aType; 
    
    for(int i = 0; i < 7; i++){
        multiCCost[i] = mC[i];
    }
    
    colors = aColor;
    inDeck = iDec;
}

void MultiCard::setName(string n){
    name = n;
}

void MultiCard::setType(string t){
    type = t;
}

void MultiCard::setColors(vector<string>colars){
    colors = colars;
}

void MultiCard::setCost(int m[]){
    for(int i = 0; i < 7; i++){
        multiCCost[i] = m[i];
    }
}
void MultiCard::setMCost(){
    bool flag = true;
    int choice = 0;
    char mChoice = 'j';
	cout << "1. Red\n2. Blue\n3. Green\n 4. Black\n5. White\n6. Colorless \n7. Any Color" << endl;
	cin >> choice;
	switch(choice){
		case 1:{
	        cout << "What is the red cost?" << endl;
		cin >> multiCCost[0];
	        cout << "Are there any other colors on the card to enter?(y/n)" << endl;
		cin >> mChoice;
		if((mChoice == 'y') || (mChoice == 'Y')){
		    flag = true;
		    break;
		}
    		if((mChoice == 'n') || (mChoice == 'N')){
		    flag = false;
       		    break;
		}
    }   
	    case 2:{
		cout << "What is the blue cost?" << endl;
		cin >> multiCCost[1];
	        cout << "Are there any other colors on the card to enter?(y/n)" << endl;
		cin >> mChoice;
		if((mChoice == 'y') || (mChoice == 'Y')){
		    flag = true;
		    break;
		}
    		if((mChoice == 'n') || (mChoice == 'N')){
		    flag = false;
       		    break;
		}
		   }
	   case 3:{
		cout << "What is the green cost?" << endl;
		cin >> multiCCost[2];
	        cout << "Are there any other colors on the card to enter?(y/n)" << endl;
		cin >> mChoice;
		if((mChoice == 'y') || (mChoice == 'Y')){
		    flag = true;
		    break;
		}
    		if((mChoice == 'n') || (mChoice == 'N')){
		    flag = false;
       		    break;
		}
		  }
	   case 4:{
		cout << "What is the black cost?" << endl;
		cin >> multiCCost[3];
	        cout << "Are there any other colors on the card to enter?(y/n)" << endl;
		cin >> mChoice;
		if((mChoice == 'y') || (mChoice == 'Y')){
		    flag = true;
		    break;
		}
    		if((mChoice == 'n') || (mChoice == 'N')){
		    flag = false;
       		    break;
		}
		  }
	   case 5:{
							
		cout << "What is the white  cost?" << endl;
		cin >> multiCCost[4];
	        cout << "Are there any other colors on the card to enter?(y/n)" << endl;
		cin >> mChoice;
		if((mChoice == 'y') || (mChoice == 'Y')){
		    flag = true;
		    break;
		}
    		if((mChoice == 'n') || (mChoice == 'N')){
		    flag = false;
       		    break;
		}
		  }
	   case 6:{
	cout << "What is the colorless cost?" << endl;
		cin >> multiCCost[5];
	        cout << "Are there any other colors on the card to enter?(y/n)" << endl;
		cin >> mChoice;
		if((mChoice == 'y') || (mChoice == 'Y')){
		    flag = true;
		    break;
		}
    		if((mChoice == 'n') || (mChoice == 'N')){
		    flag = false;
       		    break;
		}
		}
	case 7:{
		cout << "What is the any color cost?" << endl;
		cin >> multiCCost[6];
	        cout << "Are there any other colors on the card to enter?(y/n)" << endl;
		cin >> mChoice;
		if((mChoice == 'y') || (mChoice == 'Y')){
		    flag = true;
		    break;
		}
    		if((mChoice == 'n') || (mChoice == 'N')){
		    flag = false;
       		    break;
		}
	       }
		       }
	}
		       
ostream& operator<<(ostream& out, const MultiCard& card){
    out << "Multi" << endl;
    out << card.name << endl;
    int count = card.colors.size();
    for(int i = 0; i < 7 ; i++){ 
        out <<card.multiCCost[i] << endl;
    }
    out << card.type << endl;
    if(card.inDeck){
        out << "true" << endl;
    }
    else if(!card.inDeck){
        out << "false" << endl;
    }
    for(int i = 0; i < count; i++){
        out << card.colors[i] << endl;
    }
    out << endl;
    
}
    

