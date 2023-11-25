#include <iostream>
#include <string>
using namespace std;



class Food{
public:
    Food(int number=0, int calorie=0, string food= "Food"){
        if (number >= 0 && calorie >= 0){
            itemNumber = number;
            caloriePerServing = calorie;
        }
        foodName = food;
    }
    // Food class

void setFood(){
    cout<<"Enter food name: \n";
    cin>> foodName;
    cout<<"Enter amount of calories: \n";
    cin>> caloriePerServing;
    cout<<"Enter item number \n";
    cin>> itemNumber;  
}//used for costum food items
void getFood(){
    cout<< foodName<<": "<<caloriePerServing;
} // getter for food

private:
int itemNumber;
int caloriePerServing;
string foodName;
};

int main(){
// entrees
Food chickenAlfredo{1,1570,"Chicken Alfredo"};
Food spaghettiAndMeatballs{2,680,"Spaghetti and Meatballs"};
Food fettuccineAlfredo{3,650,"Fettuccine Alfredo"};
Food chickenParm{4,630,"Chicken Parmigiana"};
Food cheeseRavioli{5,500,"Cheese Ravioli"};
Food grilledSalmon{6,610,"Grilled Salmon"};
Food eggplantParmigiana{19,660,"Eggplant Parmigiana"};
Food shrimpScampi{20,460,"Shrimp Scampi"};
// Appetizers
Food friedMozzarella{7,800,"Fried Mozzarella"};
Food stuffedZifiFritta{8,500,"Stuffed Ziti Fritta"};
Food calamari{9,670,"Calamari"};
Food meatballs{10,1040,"Meatballs"};
Food lasagnaFritta{11,1130,"Lasagna Fritta"};
Food toastedRavioli{12,650,"Toasted RAvioli"};
Food breadStickes{13,140,"Breadsticks (v)"};
//drinks
Food raspberryLemondade{14,170,"Raspberry Lemonade"};
Food classicLemonade{15,170,"Classic Lemonda"};
Food mangoStrawberryIcedTea{16,100,"Mango-Strawberry Iced Tea"};
Food soda{17,790,"Coke"};
Food strawberryPassionFruitlemonda{18,180,"Strawberry-Passion Fruit lemonda"};
Food Cappuccino{21,150,"Cappuccino"};
Food millerLite{22,100,"Miller Lite"};
//deserts
Food blackTieMousseCake{23,750,"Black Mouse Tie"};
Food strawberryCreamCake{24,470,"Strawberry Cream Cake"};
Food costum{25,};



return 0;
}
