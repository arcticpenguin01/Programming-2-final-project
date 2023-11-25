#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H
#include <string>
#include <iostream>
#include <fstream>
#include "registration.h"
using namespace std;

class loginManager{
    public:
        
        loginManager(){
            access = false;
        }
        void login(){
            cout << "Enter your username: "<< endl;
            cin >> usernameAttempt;
            username = retrieveFile("usernames.dat");

            cout << "Enter your password: "<< endl;
            cin >> passwordAttempt;
            password = retrieveFile("passwords.dat");
            
            if(usernameAttempt == username && passwordAttempt == password){
                cout << "Logged in successfully!";
            } else{
                cout << "Try again!";
            }
        }
    
        string retrieveFile(const char* userFile){
            string userInfo;
            fstream file;

            file.open(userFile, ios::in);
            if (file.is_open()){
                getline(file, userInfo);
            }
            file.close();
            return userInfo;
        }
    
    private:
        string username;
        string password;
        string usernameAttempt;
        string passwordAttempt;
        bool access;

};

#endif