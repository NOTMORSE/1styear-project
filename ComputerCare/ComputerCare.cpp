#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "products.h"
using namespace std;


int main() {
        
    mainpage();
    return 0;
}

void mainpage() {
    int choice;
    cout << "---Welcome to Computer Care---\n"
        "What would you like to do today?\n"
        "| 1. Buy a Product\n"
        "| 2. Report a Defective Product\n"
        "| 3. Nothing\n"
        "Please choose your desired number: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nPlease choose from the various categories:" << endl;
        string products[5] = { "KEYBOARD", "MOUSE", "MONITOR", "LAPTOP", "COMPUTER" };

        for (int i = 0; i < 5; i++) {
            cout << "| " << i + 1 << ". " << products[i] << endl;
        }
        cout << "Please enter your desired number: ";
        cin >> choice;

        switch (choice){
                case 1: 
                    keyboard();
                    break;
                case 2:
                    mouse();
                    break;
                case 3:
                    monitor();
                    break;
                case 4:
                    laptop();
                    break;
                case 5:
                    computer();
                    break;
                default:
                    cout << "Error!! Please try again.\n";
                    mainpage();
        }
    }
    else if (choice == 2) {
        string productName;
        string issue;
        string date;
        string place;

        cout << "Product name/model: ";
        cin.ignore();
        getline(cin, productName);

        cout << "Description of the issue: ";
        getline(cin, issue);

        cout << "Date of purchase(MM/DD/YY): ";
        getline(cin, date);

        cout << "Place of purchase: ";
        getline(cin, place);


        int min = 100000;
        int max = 999999;
        srand(time(0));
        int randomNum = min + rand() % (max - min + 1);
      
        cout << "Thank you for reporting the defective product. Your reference number is " << randomNum << ".\n";
    }
    else {
        cout << "Thank you for visiting our store.";
    }

    }



