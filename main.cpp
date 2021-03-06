/*
 * Joshua Wilson
 * 4 April 2016
 * Project Part 1
 */

#include <iostream>
#include <math.h>
#include <iomanip>
#include <unistd.h>
#include <fstream>



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

    welcomeMessage();                               //Display the welcome message
    menu();                                         //show the menu
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

void welcomeMessage()                                           //The welcome message function
{
    cout << "Greetings Peasants...I mean Students. Please choose a class from the menu." << endl;
}

void menu()                                                     //The main menu function
{
    cout << " Please select an option : " << endl;
    cout << " 1) Green Energy" << endl;
    cout << " 2) Fiber Optics" << endl;
    cout << " 3) C++" << endl;
    cout << " 4) Quit!" << endl << endl;
}

void greenEnergyMenu ()                                         //The Green Energy Menu Function
{
    //Option 1 variables
    int option;
    double gevariable1;
    float gevariable2;
    int gevariable3;
    double getotal;

    //Option 2 variables
    int guess;
    int guess2;
/*  int answer;
    int answer2;*/

    cout << "Please choose a calculation from the menu : " << endl;
    cout << " 1) Add two numbers, the second to a power :" << endl;
    cout << " 2) Guessing Game" << endl;
    cout << " 3) Left blank intentionally" << endl;
    cin >> option;

    if (option == 1)                                                    //sub-sub-menu for GE question 1
    {
        cout << "What is the first number : " << endl;
        cin >> gevariable1;
        cout << "What is the second number : " << endl;
        cin >> gevariable2;
        cout << "What power is it raised to : " << endl;
        cin >> gevariable3;

        getotal = gevariable1 + pow(1 + gevariable2, gevariable3);      //Fun math stuffs

        cout << "The Total of that calculation is : " << getotal << endl;
        cin.get();
    }
    else if (option == 2)
    {
        cout << "Pick a number between 1 and 3:" << endl;
        cin >> guess;
        cout << "Now choose a number between 2 and 4:" << endl;
        cin >> guess2;
        cin.get();

        if ( guess == 2 && guess2 == 3)
        {
            cout << "Good Job! You can read." << endl;
        }
        else if ( guess != 2 || guess2 != 3)
        {
            cout << "Try again doofey!" << endl;
        }

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

void fiberOpticsMenu ()                                                     //The Fiber Optics Menu Function
{
    //Variables for Option 1
    int foOption;
    double foVariable1;
    double foVariable2;
    double foVariable3;
    double foVariable4;
    double foTotal;


    cout << "Please choose a calculation from the menu : " << endl;
    cout << " 1) Multiply 2 numbers by a third number and square root the answer." << endl;
    cout << " 2) Pull some information from the secret hidden file." << endl;
    cout << " 3) Let blank intentionally" << endl;
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
        ofstream outputfile;                                                            // variable for output file being created and saved
        ifstream inputfile;                                                             // variable for reading the information from the output file

        string textToSave;
        string totalOutput;
        string readText;

        textToSave = "Your information has been recorded during the encryption breaking process.\nLocation: remote terminal #3 - floor 1 - server room 2\nYou cannot hide from us, you should have taken the other pill.\n\n";

        cout << "Breaking encryption on secret hidden file \n\n" << endl;
        sleep(1);                                                                       //Sleep function, tells the program to wait for X seconds then continue.
        cout << "**** (25%)" << endl;
        sleep(2);
        cout << "******** (50%)" << endl;
        sleep(2);
        cout << "************ (75%)" << endl;
        sleep(2);
        cout << "**************** (100%)" << endl;
        sleep(5);
        cout << "Recovering contents of file please wait.\n\n" << endl;
        sleep(3);

        outputfile.open ("C:\\Users\\Owner\\ClionProjects\\JW Project P1\\outputfile.txt");             // Open the output file

        if (outputfile.is_open())                                                                       // Check if the output file is open
        {
            outputfile << textToSave;                                                                   // If the output file has been opened then write the variable information to the file
        }
        outputfile.close();                                                                             // Close the output file

        sleep(3);

        inputfile.open( "C:\\Users\\Owner\\ClionProjects\\JW Project P1\\outputfile.txt");              // Open the outputfile
        if (inputfile.is_open())
        {
            while (getline(inputfile, totalOutput))                                                     // Do stuff while the output file is open
            {

                readText += totalOutput + "\n";                                                         // Read the contents of the output file and verify it is there
            }
            inputfile.close();                                                                          // Close the file
            cout << readText << endl;                                                                   // Print the contents of the file to the screen

        }
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

    int input;

    cout << "Please answer the question with 1 (yes) or 0 (no) : " << endl;
    cout << "Do you want to break science?" <<endl;
    cin >> input;
    cin.get();

    if (input == 1)
    {
        cout << "Good going Peasant, now you broke science!" << endl;
        cout << "Try again" << endl;
    }
    else if ( input == 0)
    {
        cout << "Good job at not breaking science. Now go do something productive." << endl;
    }
}