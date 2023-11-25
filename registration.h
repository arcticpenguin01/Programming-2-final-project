#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <iostream>
#include <string>


class userRegistration{
    public:
        void registerUser(){
            std::string username, password;

            std::cout << "Enter username: ";
            std::ofstream a_file("usernames.dat", std::ios::app);
            std::cin >> username;


            std::cout << "Enter password: ";
            std::ofstream b_file("passwords.dat", std::ios::app);
            std::cin >> password;

            std::cout << "This ain't working yet :(";
        }
       
};

#endif