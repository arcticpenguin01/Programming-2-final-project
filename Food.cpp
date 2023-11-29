#include <iostream>
#include <string>
#include "Food.h"
#include <fstream>
#include <iomanip>
using namespace std;

Food chickenAlfredo{1570,"Chicken Alfredo"};
Food spaghettiAndMeatballs{680,"Spaghetti and Meatballs"};
Food tourOfItaly{1550,"Tour of Italy"};
// Appitizers
Food friedMozzarella{800,"Fried Mozzarella"};
Food stuffedZifiFritta{500,"Stuffed Ziti Fritta"};
// Drinks
Food raspberryLemondade{170,"Raspberry Lemonade"};
Food classicLemonade{170,"Classic Lemonda"};
// Dessert
Food blackTieMousseCake{750,"Black Tie Mouse Cake"};
Food strawberryCreamCake{470,"Strawberry Cream Cake"};
void foodSelect();
void displayMenu();
 


// Funtion for user entering food.
void foodSelect(){
int userChoice=0;
ofstream sampleCalorie;
sampleCalorie.open("Sample.txt",std::ios::app);// open txt file in this line. Needs to be replaced
sampleCalorie<<__DATE__<<" "<<__TIME__<<endl;// outputs time everytime the file is open
Food total {0,"Total"};// variable that holds total amount of calories
do{
cout<< "Enter choice ";// switch case for users choice
cin>> userChoice;
    switch(userChoice){
         case 1:
        total+=tourOfItaly;
        sampleCalorie<<tourOfItaly;// In each situation the name and calorie is sent out to a file in a certain format. Refer to Food.h file for format.
        case 2:
        total+=chickenAlfredo;
        sampleCalorie<<chickenAlfredo;
        break;
        case 3:
        total+=spaghettiAndMeatballs;
        sampleCalorie<<spaghettiAndMeatballs;
        break;
        case 4:
        total+=friedMozzarella;
        sampleCalorie<<friedMozzarella;
        break;
        case 5:
        total+=stuffedZifiFritta;
        sampleCalorie<<friedMozzarella;
        break;
        case 6:
        total+=raspberryLemondade;
        sampleCalorie<<raspberryLemondade;
        break;
        case 7:
        total+=classicLemonade;
        sampleCalorie<<classicLemonade;
        break;
        case 8:
        total+=blackTieMousseCake;
       sampleCalorie<<blackTieMousseCake;      
        break;
        case 9:
        total+=strawberryCreamCake;
        sampleCalorie<<strawberryCreamCake;
        break;
        case 10: break;
        default:
            cout<<"Not an option"<<endl;}

        
}
    while(userChoice != 10);
    
    sampleCalorie<< total<<endl; // total being sent out to file. Needs to be changed
    sampleCalorie.close();
    
}

void displayMenu(){//displays menu items
    cout<<setw(25)<<left<<"Entrees"
    <<setw(30)<<left<<"Appetizers"
    <<setw(30)<<left<<"Drinks"
    <<setw(25)<<"Dessert"<<right
    <<setw(20)<<"10. Exit"<<left<<endl;

    cout<<setw(25)<<left<<"1. Tour of Italy"
    <<setw(30)<<left<<"4. Fried Mozzarella"
    <<setw(30)<<left<<"6. Raspberry Lemonade"
    <<setw(25)<<"8. Black Tie Mousse Cake"<<left<<endl;

    cout<<setw(25)<<left<<"2. Chicken Alfredo"
    <<setw(30)<<left<<"5. Stuffed Ziti Fritta"
    <<setw(30)<<left<<"7. Classic Lemonade"
    <<setw(25)<<"9. Strawberry Cream Cake"<<left<<endl;

    cout<<setw(25)<<left<<"3. Spaghetti and Meatballs"<<endl;
     
}