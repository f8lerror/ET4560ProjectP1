/*
 * Joshua Wilson
 * 4 April 2016
 * Project Part 1
 */

#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

//List of functions being called
void menu();
void welcomeMessage();
void greenEnergyMenu ();
void fiberOpticsMenu();
void cppMenu();


int main()
{

    int mainOption;

    cout << fixed << showpoint << setprecision(1);   //Makes sure peasants don't try to use a decimal choice

    welcomeMessage(); //Display the welcome message
    menu(); //show the menu
    cin >> mainOption;

    if (mainOption == 1)
    {
        greenEnergyMenu();
    }
    else if (mainOption == 2)
    {
        fiberOpticsMenu();
        cin.get();
    }
    else if (mainOption == 3)
    {
        cppMenu();
        cin.get();
    }
    else if (mainOption == 4)
    {
        cout << "Terminating Program with extreme prejudice!" << endl;
        return 0;
    }
    else
    {
        cout << "You made a wrong choice PEASANT, TRY AGAIN!!" << endl;
        menu();
        cin.get();
    }
    cin.get();
    return 0;

}

void welcomeMessage()  //The welcome message function
{
    cout << "Greetings Peasants...I mean Students. Please choose a class from the menu." << endl;
}

void menu()  //The main menu function
{
    cout << " Please select an option : " << endl;
    cout << " 1) Green Energy" << endl;
    cout << " 2) Fiber Optics" << endl;
    cout << " 3) C++" << endl;
    cout << " 4) Quit!" << endl << endl;
}

void greenEnergyMenu () //The Green Energy Menu Function
{
    int option;
    double gevariable1;
    double gevariable2;
    double gevariable3;
    double getotal;

    cout << "Please choose a calculation from the menu : " << endl;
    cout << " 1) Add two numbers, the second to a power :" << endl;
    cout << " 2) GE" << endl;
    cout << " 3) GE" << endl;
    cin >> option;

    if (option == 1)
    {
        cout << "What is the first number : " << endl;
        cin >> gevariable1;
        cout << "What is the second number : " << endl;
        cin >> gevariable2;
        cout << "What power is it raised to : " << endl;
        cin >> gevariable3;

        getotal = gevariable1 + pow(1 + gevariable2, gevariable3);

        cout << "The Total of that calculation is : " << getotal << endl;
        cin.get();
    }
    else if (option == 2)
    {
        cout << "This is option 2" << endl;
    }
    else if (option == 3)
    {
        cout << "This is option 3" << endl;
    }
    else
    {
        cout << "Snargldebarf" << endl;
    }
}

void fiberOpticsMenu () //The Fiber Optics Menu Function
{
    int foOption;
    double foVariable1;
    double foVariable2;
    double foVariable3;
    double foVariable4;
    double foTotal;

    cout << "Please choose a calculation from the menu : " << endl;
    cout << " 1) Multiply 2 numbers by a third number and square root the answer." << endl;
    cout << " 2) FO" << endl;
    cout << " 3) FO" << endl;
    cin >> foOption;
    cin.get();

    if (foOption == 1)
    {
        cout << "What is the first number :" << endl;
        cin >> foVariable1;
        cout << "What is the second number :" << endl;
        cin >> foVariable2;
        cout << "What is the third number :" << endl;
        cin >> foVariable3;

        foVariable4 = (foVariable1 * foVariable2) * foVariable3;
        foTotal = sqrt (foVariable4);

        cout << "The calculation of this problem is : " << foTotal << endl;
        cin.get();

    }
    else if (foOption == 2)
    {
        cout << "This is option 2" << endl;
    }
    else if (foOption == 3)
    {
        cout << "This is option 3" << endl;
    }
    else
    {
        cout << "Snargldebarf" << endl;
    }
}

void cppMenu ()
{

    bool input;

    cout << "Please answer the question with yes or no : " << endl;
    cout << "Do you want to break science?" <<endl;
    cin >> input;

    if (input == true)
    {
        cout << "Good going Peasant, now you broke science!" << endl;
        cout << "Try again" << endl;
    }
    else
    {
        cout << "Good job at not breaking science. Now go do something productive." << endl;
    }
    cin.get();
}