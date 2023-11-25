#include <iostream>
#include <fstream>
#include "registration.h"
#include "loginmanager.h"
#include <string>
using namespace std;


void welcomeScreen(){
    cout << R"(*********************************************
                                WELCOME                              
               
               ********************************************* 
                                  Menu                            
                
                Type in the number corresponding to your choice.
                
                1. REGISTER
                2. LOGIN
                3. DISPLAY MENU )";

    int options;
    cout << "Make your selection: ";
    cin >> options;
    
    switch(options){
        case 1:{
            userRegistration user_obj;
            userRegistration login;
            login.registerUser();
            break;
        } 
        case 2:{
            loginManager login_obj;
            
        }
        case 3:
            cout << "Here's the menu: ";
            break;
        default:
            cout << "Please enter the integer corresponding to your choice.";
        
    }
    
}


int main(){
    welcomeScreen();
    cout << "done";
    
    return 0;
}