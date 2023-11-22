#ifdef WIN32
#include <windows.h>
#else
#include <termios.h>
#include <unistd.h>
#endif

#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <iostream>
#include <string>
#include "user.h"




class userRegistration{
    public:
        void registerUser(User &user){
            std::string username, password;

            std::cout << "Enter username: ";
            std::cin >> username;
            user.setUsername(username);

            std::cout << "Enter password: ";
            SetStdinEcho(false);
            std::cin >> password;
            SetStdinEcho(true);
            user.setPassword(password);
        }
    
    private:
        void SetStdinEcho(bool enable = true){
    #ifdef WIN32
        HANDLE hsStdin = GetSTDHandle(STD_INPUT_HANDLE);
        DWORD mode;
        GetConsoleMode(hStdin, &mode);

        if(!enable){
            mode & = ~ENABLE_ECHO_INPUT;
        } else{
            mode |= ENABLE_ECHO_INPUT;
        }  

        SetConsoleMode(hStdin, mode);
    #else    
        struct termios tty;
        tcgetattr(STDIN_FILENO, &tty);
        if(!enable)
            tty.c_lflag &= ~ECHO;

        else
            tty.c_lflag |= ECHO;
        
        (void) tcsetattr(STDIN_FILENO, TCSANOW, &tty);
        
    #endif
    }

};


#endif