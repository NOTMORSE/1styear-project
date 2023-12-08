#include <iostream>
#include "products.h"
#include <chrono>
#include <thread>
#include <string>
using namespace std;

void loadingScreen() {
    cout << "Confirming ";
    for (int i = 0; i < 10; ++i) {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl << "We have confirmed your number!\n"
        "Thank you for ordering" << endl;
}

void loadingScreen2() {
    cout << "Confirming ";
    for (int i = 0; i < 10; ++i) {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

}

    //KEYBOARD

void k1payment() {
    int bill,num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Razer Huntsman Elite\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 2500;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore(); 
        getline(cin, address); 
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                        "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void k2payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Logitech G G213 Prodigy\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 4500;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                        "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void k3payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing HyperX Alloy FPS Pro\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 3000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void k4payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Razer Cynosa Chroma\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 5100;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void k5payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing SteelSeries Apex Pro TKL\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 5600;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}

    //MOUSE

void m1payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Logitech G Pro Wireless\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 7000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void m2payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Razer DeathAdder Elite\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 3500;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void m3payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing SteelSeries Rival 600\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 4000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void m4payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Corsair Dark Core RGB/SE\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 4500;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void m5payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing ASUS ROG Gladius II\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 3800;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}

    //MONITOR

void t1payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing ASUS VG248QE 24-inch Full HD\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 14000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void t2payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing AOC C24G1 24-inch Curved Full HD\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 11000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void t3payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing MSI Optix MAG241C 24-inch Curved Full HD\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 14000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void t4payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing LG 27GL83A-B 27-inch QHD Nano IPS\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 28000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void t5payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing ViewSonic XG2405 24-inch Full HD\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 12000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}

    //LAPTOP

void l1payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Asus ROG Zephyrus G14\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 80000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void l2payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing MSI GS66 Stealth\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 100000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void l3payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Acer Predator Helios 300\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 70000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void l4payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Lenovo Legion 5\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 65000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void l5payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing Dell G5 15\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 70000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}

//COMPUTER

void c1payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing XYZ Gaming Beast\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 75000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void c2payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing TechMaster ProStation\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 60000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void c3payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing UltraSpeed Office Elite\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 45000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void c4payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing PowerTech Multimedia Master\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 55000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}
void c5payment() {
    int bill, num, choice;
    string gmail, name, address, phone;

    while (true) {
        cout << "Thank you for choosing EpicGear Creator's Dream\n";
        cout << "How many items would you like to buy? ";
        cin >> num;
        bill = num * 70000;
        cout << "Please tell me your Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Please enter your mobile number: ";
        cin >> phone;
        cout << "Please type your address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Please enter your gmail address: ";
        cin >> gmail;

        if (gmail.find("@gmail.com") != string::npos) {
            loadingScreen2();
            cout << "\nValid email address: " << gmail << "\n"
                "\nPlease check if the information is correct: \n"
                << "Name: " << name << "\n"
                << "Phone: " << phone << "\n"
                << "Address: " << address << "\n"
                << "Gmail: " << gmail << "\n"
                << "Is the information correct? \n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> choice;

            if (choice == 2) {
                cout << "\nPlease try again";
                continue;
            }
            else {
                cout << 
                    "Your total purchase is: " << "P" << bill << "\n";
                break;
            }
        }
        else {
            cout << "Invalid email address. Please try again\n";
            continue;
        }
    }
}


