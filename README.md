# Programming-2-final-project

Olive garden calorie counter project Report 

Project Goals and objective:
The goal of this project was to design a program that would help track the total amount of calories a customer at Olive garden would consume based on their meal choice. We decided to treat it as a user login and registration system so that it could be personalized to each user. The idea was that a user would register for an account and only that user would have access to that account. The user would then pick the choices from the menu and the program would then calculate the amount of calories that the user would consume given the meal they chose and it would write that information to a file that the user named, and would provide that information to the user. The user would then be able to have access to the file and be able to retrieve it once they login again. This kind of  project is usually implemented using a functional approach, this version was entirely done using the principles of Object-Oriented programming (OOP). Looking through different resources on the internet, it’s also clear that file-handling is not something that is usually implemented in projects similar to this. One aspect of this project that was also different is the fact that we did not include a graphical user interface (GUI). Incorporating  a GUI is a pretty common approach especially for the login and registration system implementation. Although that is something we were interested in doing, it proved too difficult for our current knowledge and understanding of C++. 


Methods:
As mentioned above, the programming paradigm used in this project was OOP. The entire program consisted of three classes: loginManager{}; , userRegistration{}; , and Food{};. These classes were implemented within the loginmanager.h, registration.h, and food.h header files respectively. Furthermore, the project consisted of a main.cpp file, and two files which were created by the programmers, namely, usernames.dat and passwords.dat.
Starting with the classes, the userRegistration class is the first to be used in the program. This class contains only one member function: void registerUser( ). In this member function, we declare two string variables, username and password. The user is then prompted to enter their username and password. The function takes in the user’s username first, then it creates a file entitled “usernames.dat” and writes the username inputted to that file. The same is done with the password that the user chooses, except the passwords are written to a different file titled “paswords.dat”. Next we have the loginManager class. In summary, this class conducts the authentication process. This class has six member functions, and a constructor and five private variables, four of which are of the string type and one of the bool type, they are as follows; starting with the strings we have, username, usernameAttempt, password, passwordAttempt, and lastly “bool access” . The functions are as follows; void createUserFile( ), void login( ), string retrieveFile( ), void grantAccess( ), and bool hasAcess( ), void registerAgain( ). The constructor is loginManager and its only job is initializing the bool access variable to false. The function that coordinates this class is void login( ), this function first prompts the user to input the username they registered with and it then calls the retrieveFile( ) function. When called, this function opens the usernames.dat file, looks through it to find the username that the user is trying to login with, it does the same with the password and looks through the passwords.dat file. If the username and password entered by the user matches any of the usernames and passwords stored in the respective files, the user is granted access. If the user is unable to login, they are given the option to either login again (in which case the login function calls itself), or they can choose to register (in which case the registerAgain( ) function is called).  The user’s information is then passed to the grantedAccess( ), and if the user has been granted access, this function creates a personal file that the user can name in which user info can be written to. Lastly,we have the Food class. This class is where the food objects that are created in the main file will be manipulated and the calories of those foods will be counted. This class features two private variables; string foodName and int caloriePerServing. It also features the constructor Food, the functions void printCalorie (which outputs the total calories), and the Food getCalorie function that just returns the caloriePerServing. It also features the following overloaded operators; Food Food::operator+= , and the overloaded cout ostream& operator<< . The overloaded << operator outputs the object of type food in this format: Name of food: calories per serving. And the += operator adds the caloriesPerServing part of type type food together.
The execution of any C++ program starts at the main function so we will trace the execution of the program in the main.cpp file. This main.cpp file contains the following header files; <string>, <iostream>, <limits>, <iomanip>, <fstream> , “food.h”, “registration.h”, and “loginmanager.h”. Before any of the functions are declared, nine objects of the class Food are created and act as global variables. These objects are initialized in the following manner:
 Food chickenAlfredo{1570,"Chicken Alfredo"};
Food spaghettiAndMeatballs{680,"Spaghetti and Meatballs"};
Food tourOfItaly{1550,"Tour of Italy"};
// Appetizers
Food friedMozzarella{800,"Fried Mozzarella"};
Food stuffedZifiFritta{500,"Stuffed Ziti Fritta"};
// Drinks
Food raspberryLemondade{170,"Raspberry Lemonade"};
Food classicLemonade{170,"Classic Lemonade"};
// Dessert
Food blackTieMousseCake{750,"Black Tie Mousse Cake"};
Food strawberryCreamCake{470,"Strawberry Cream Cake"};

The number corresponds to the amount of calories that particular food object is worth, and the string is the name of the food.
 Furthermore, in this file, there are four functions; void displayMenu( ), void foodSelect( ), void welcomeScreen( ), and int main( ). The main function does one thing: it calls the welcomeScreen( ) function. All the other functions are called via the welcomeScreen() function. 
The welcomeScreen function displays a welcoming message to the user and prompts the user to either register or login. This was implemented using a simple switch case that takes in the user input in the form of an integer and allows the user to do what they chose. The first case of the switch case creates an object of the userRegistration class called “user”, the registerUser function is called for the user (user.register( ) ). When the user is successfully registered, they are prompted to name their personal file. A function called void foodSelect( ) is then called. This function takes in a single string argument (fileName), this fileName variable is the file that the user was prompted to name. It opens this file to get it ready to be written to. After the file is opened, the void displayMenu( ) function is called.This function prints out the different food choices on the menu (this corresponds to the aforementioned food objects that were created globally). Once this is done, control is returned to the foodSelect( ) function. The user is then prompted to pick  from the menu and a switch case takes care of the user’s input. Each time the user selects an option, the calories are being added and written to the user’s personal file. This switch case can be exited by entering in the number 10. Once 10 is provided as input, the program terminates and the file is ready for the user to access. 


Results: 

Image 1: This image shows the output and shows the registration system as well as the food selection system in action. As you can see, the username is Azul and the password is Eagles2023.


Image 2: This shows the entry for the different menu items and shows that if the user provides 10 as input, the program terminates.


Image 3: These are the contents of Azul’s personal file. It shows the date and time that the program was run as well as the menu items selected, their calories, and the total calorie amount that Azul consumed.


Image 4: This shows the passwords that have been stored in the passwords.dat file.



Image 5: These are the usernames stored in the usernames.dat file.

Discussion/Conclusion:
	A big weakness of this project is that it’s not impervious to erroneous inputs by the user. More specifically, the program crashes when a string is inputted during the food selection process. We attempted to tackle this problem by doing some error handling but a part of the program would not progress to the next stage. We weren’t able to fix this bug, and ultimately decided to trust that the user would provide correct input. Another weakness is the program’s inability to recognize spaces as being part of the user’s input and so it somewhat messes up the flow of control when the user uses a space in the username and or password.
	In terms of how this project turned out, as a team we’re pretty satisfied with it, despite the difficulties. One thing that we wanted to implement was a general user interface (GUI) in order to hide the complexity from the user. We also wanted to implement the retrieval and opening and display of the user’s personal file to them as soon as they are granted access by logging in. These are the steps we would take in the future to make this project even more user friendly. 
	In any event, this project was an adequate test for our skill levels as C++ programmers and helped us explore the concepts presented in class on a more personal level. We feel that we’ve become more comfortable with the concepts of OOP and file-handling specifically. All in all, this was a solid experience. 
Workload distribution:
	The file-handling and the login/registration system were implemented by Elijah J. Baptiste and the calculation of the calories and writing it to the user’s personal file was implemented by Lentz Fortune. We worked very closely together and helped each other out when needed.
