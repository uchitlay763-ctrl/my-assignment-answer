#include <iostream>
#include <string>
using namespace std;

enum Season {SUMMER, RAINY, WINTER};

int main() {
    string choice;
    Season mySeason;
    while(true){


    cout << "Enter season: ";
    cin >> choice;
   if(choice=="exit"||choice=="EXIT"){
   	cout<<"thank you";
   	break;
   	}


    if(choice== "summer"||choice=="SUMMER") {
        mySeason = SUMMER;
        cout<<"tabodwe,taboung,tagu"<<endl;
    }
    else if(choice == "rainy"||choice=="RAINY") {
        mySeason = RAINY;
        cout<<"nayon,waso,wagaung"<<endl;
    }
    else if(choice == "winter"||choice=="WINTER") {
        mySeason = WINTER;
        cout<<"tadingyut,tazaungmon,nadaw,pyatho"<<endl;
    }
   }

    return 0;
    }
