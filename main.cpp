#include <iostream>
#include <fstream>
#include "registration.h"
#include "user.h"
#include <string>
using namespace std;


int main(){
    User user;
    userRegistration login;
    

    login.registerUser(user);
    
    
    ofstream calorieFile;
    calorieFile.open("caloriecount.txt");
    calorieFile << "Hello. Writing to this file.\n";

    if (calorieFile.is_open()){
        calorieFile << "File successfully opened!\n";
        calorieFile << "Now ready to read in data.\n";
        calorieFile.close();
    } else{
        cout << "Enter opening file";
    }

    
    return 0;
}