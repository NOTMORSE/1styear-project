#include <iostream>
#include <chrono>
using namespace std;
#include "products.h"

int choice, num, bill, confirm;
string gmail, name, address, phone;


void cash() {
    while (true) {
            cout << "\nThank you for your Purchase!!\n"
            "Do you want to purchase another product?\n"
            "|1. Yes\n"
            "|2. No\n"
            "Please enter your desired number: ";
        cin >> choice;
        if (choice == 1) {
            mainpage();
        }
        else {
            cout << "Thank you for your Purchase!! Please come again.";
            break;
        }
    }

}
void ewallet() {
    while (true) {
        cout << "\nPlease select your E-Wallet:\n"
            "| 1. G-Cash\n"
            "| 2. Maya\n"
            "| 3. Paypal\n"
            "Please enter your desired number: ";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            cout << "\nEnter your E-Wallet number: " << endl;
            cin >> num;
            cout << "Is the number " << num << " you've input correct?\n"
                "| 1. Yes\n"
                "| 2. No\n"
                "Please enter your desired number: ";
            cin >> confirm;
            if (confirm == 1) {
                loadingScreen();
                cout << "\nThank you for your Purchase!!\n"
                    "Do you want to purchase another product?\n"
                    "|1. Yes\n"
                    "|2. No\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    mainpage();
                }
                else {
                    cout << "Thank you for your Purchase!! Please come again.";
                    break;
                }

            }
            else if (confirm == 2) {
                cout << "Please try again." << endl;
                continue;
            }
            else {
                cout << "Error!! Please try again." << endl;
                continue;
            }
        }
        else {
            cout << "Error!! Please try again." << endl;
            continue;
        }
    }
}


void card() {
    while (true) {
        cout << "\nPlease select your Credit Card:\n"
            "| 1. MetroBank\n"
            "| 2. BDO\n"
            "| 3. PNB\n"
            "Please enter your desired number: ";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            cout << "\nPlease enter your account number: ";
            cin >> num;
            loadingScreen();
            cout << "\nThank you for your Purchase!!\n"
                "Do you want to purchase another product?\n"
                "|1. Yes\n"
                "|2. No\n"
                "Please enter your desired number: ";
            cin >> choice;
            if (choice == 1) {
                mainpage();
            }
            else {
                cout << "Thank you for your Purchase!! Please come again.";
                break;
            }
        }
        else {
            cout << "Error!! Please try again" << endl;
            continue;
        }
    }
}

    //KEYBOARD 

    int keyboard() {
        cout << "\nHere are the available KEYBOARDS in the shop right now: " << endl;
        string keyboard[5] = { "Razer Huntsman Elite = P2,500", "Logitech G G213 Prodigy = P4,500", "HyperX Alloy FPS Pro = P3,000", "Razer Cynosa Chroma = P5,100", "SteelSeries Apex Pro TKL = P5,600" };

        for (int i = 0; i < 5; i++) {
            cout << "| " << i + 1 << ". " << keyboard[i] << endl;
        }

        cout << "\nWould you like to buy one?\n"
            "| 1. Yes\n"
            "| 2. No\n"
            "Please enter your desired number: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nWhat would you like to buy?" << endl;
            for (int i = 0; i < 5; i++) {
                cout << "| " << i + 1 << ". " << keyboard[i] << endl;
            }

            cout << "Please enter your desired number: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    k1payment();
                    cash();
                }
                else if (choice == 2) {
                    k1payment();
                    ewallet();
                }
                else {
                    k1payment();
                    card();
                }
                break;
            case 2:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    k2payment();
                    cash();
                }
                else if (choice == 2) {
                    k2payment();
                    ewallet();
                }
                else {
                    k2payment();
                    card();
                }
                break;
            case 3:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    k3payment();
                    cash();
                }
                else if (choice == 2) {
                    k3payment();
                    ewallet();
                }
                else {
                    k3payment();
                    card();
                }
                break;
            case 4:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    k4payment();
                    cash();
                }
                else if (choice == 2) {
                    k4payment();
                    ewallet();
                }
                else {
                    k4payment();
                    card();
                }
                break;
            case 5:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    k5payment();
                    cash();
                }
                else if (choice == 2) {
                    k5payment();
                    ewallet();
                }
                else {
                    k5payment();
                    card();
                }
                break;
            default:
                cout << "ERORR INPUT!! Please try again." << endl;
                mainpage();
            }
        }
        else {
            cout << "Thank you for shopping with us!!";
            exit (0);
        }

        return 0;


        
    }
       
    //MOUSE

    int mouse() {
        cout << "\nHere are the available KEYBOARDS in the shop right now: " << endl;
        string mouse[5] = { "Logitech G Pro Wireless = P7,000", "Razer DeathAdder Elite = P3,500", "SteelSeries Rival 600 = P4,000 ", "Corsair Dark Core RGB/SE = P4,500", "ASUS ROG Gladius II = P3,800 " };

        for (int i = 0; i < 5; i++) {
            cout << "| " << i + 1 << ". " << mouse[i] << endl;
        }

        cout << "\nWould you like to buy one?\n"
            "| 1. Yes\n"
            "| 2. No\n"
            "Please enter your desired number: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nWhat would you like to buy?" << endl;
            for (int i = 0; i < 5; i++) {
                cout << "| " << i + 1 << ". " << mouse[i] << endl;
            }

            cout << "Please enter your desired number: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    m1payment();
                    cash();
                }
                else if (choice == 2) {
                    m1payment();
                    ewallet();
                }
                else {
                    m1payment();
                    card();
                }
                break;
            case 2:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    m2payment();
                    cash();
                }
                else if (choice == 2) {
                    m2payment();
                    ewallet();
                }
                else {
                    m2payment();
                    card();
                }
                break;
            case 3:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    m3payment();
                    cash();
                }
                else if (choice == 2) {
                    m3payment();
                    ewallet();
                }
                else {
                    m3payment();
                    card();
                }
                break;
            case 4:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    m4payment();
                    cash();
                }
                else if (choice == 2) {
                    m4payment();
                    ewallet();
                }
                else {
                    m4payment();
                    card();
                }
                break;
            case 5:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    m5payment();
                    cash();
                }
                else if (choice == 2) {
                    m5payment();
                    ewallet();
                }
                else {
                    m5payment();
                    card();
                }
                break;
            default:
                cout << "ERORR INPUT!! Please try again." << endl;
                mainpage();
            }
        }
        else {
            cout << "Thank you for shopping with us!!";
            exit(0);
        }

        return 0;


    }

        //MONITOR

    int monitor() {
        cout << "\nHere are the available KEYBOARDS in the shop right now: " << endl;
        string monitor[5] = { "ASUS VG248QE 24-inch Full HD = P14,000", "AOC C24G1 24-inch Curved Full HD = P11,000", "MSI Optix MAG241C 24-inch Curved Full HD = P14,000 ", "LG 27GL83A-B 27-inch QHD Nano IPS = P28,000", "ViewSonic XG2405 24-inch Full HD = P 12,000 " };

        for (int i = 0; i < 5; i++) {
            cout << "| " << i + 1 << ". " << monitor[i] << endl;
        }

        cout << "\nWould you like to buy one?\n"
            "| 1. Yes\n"
            "| 2. No\n"
            "Please enter your desired number: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nWhat would you like to buy?" << endl;
            for (int i = 0; i < 5; i++) {
                cout << "| " << i + 1 << ". " << monitor[i] << endl;
            }

            cout << "Please enter your desired number: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    t1payment();
                    cash();
                }
                else if (choice == 2) {
                    t1payment();
                    ewallet();
                }
                else {
                    t1payment();
                    card();
                }
                break;
            case 2:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    t2payment();
                    cash();
                }
                else if (choice == 2) {
                    t2payment();
                    ewallet();
                }
                else {
                    t2payment();
                    card();
                }
                break;
            case 3:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    t3payment();
                    cash();
                }
                else if (choice == 2) {
                    t3payment();
                    ewallet();
                }
                else {
                    t3payment();
                    card();
                }
                break;
            case 4:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    t4payment();
                    cash();
                }
                else if (choice == 2) {
                    t4payment();
                    ewallet();
                }
                else {
                    t4payment();
                    card();
                }
                break;
            case 5:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    t5payment();
                    cash();
                }
                else if (choice == 2) {
                    t5payment();
                    ewallet();
                }
                else {
                    t5payment();
                    card();
                }
                break;
            default:
                cout << "ERORR INPUT!! Please try again." << endl;
                mainpage();
            }
        }
        else {
            cout << "Thank you for shopping with us!!";
            exit(0);
        }

        return 0;

    }

        //LAPTOP

    int laptop() {
        cout << "\nHere are the available KEYBOARDS in the shop right now: " << endl;
        string laptop[5] = { "Asus ROG Zephyrus G14 = P80,000", "MSI GS66 Stealth = P100,000", "Acer Predator Helios 300 = P70,000 ", "Lenovo Legion 5 = P65,000", "Dell G5 15 = P 70,000 " };

        for (int i = 0; i < 5; i++) {
            cout << "| " << i + 1 << ". " << laptop[i] << endl;
        }

        cout << "\nWould you like to buy one?\n"
            "| 1. Yes\n"
            "| 2. No\n"
            "Please enter your desired number: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nWhat would you like to buy?" << endl;
            for (int i = 0; i < 5; i++) {
                cout << "| " << i + 1 << ". " << laptop[i] << endl;
            }

            cout << "Please enter your desired number: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    l1payment();
                    cash();
                }
                else if (choice == 2) {
                    l1payment();
                    ewallet();
                }
                else {
                    l1payment();
                    card();
                }
                break;
            case 2:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    l2payment();
                    cash();
                }
                else if (choice == 2) {
                    l2payment();
                    ewallet();
                }
                else {
                    l2payment();
                    card();
                }
                break;
            case 3:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    l3payment();
                    cash();
                }
                else if (choice == 2) {
                    l3payment();
                    ewallet();
                }
                else {
                    l3payment();
                    card();
                }
                break;
            case 4:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    l4payment();
                    cash();
                }
                else if (choice == 2) {
                    l4payment();
                    ewallet();
                }
                else {
                    l4payment();
                    card();
                }
                break;
            case 5:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    l5payment();
                    cash();
                }
                else if (choice == 2) {
                    l5payment();
                    ewallet();
                }
                else {
                    l5payment();
                    card();
                }
                break;
            default:
                cout << "ERORR INPUT!! Please try again." << endl;
                mainpage();
            }
        }
        else {
            cout << "Thank you for shopping with us!!";
            exit(0);
        }

        return 0;

    }

    //COMPUTER

    int computer() {
        cout << "\nHere are the available KEYBOARDS in the shop right now: " << endl;
        string computer[5] = { "XYZ Gaming Beast = P75,000", "TechMaster ProStation = P 60,000", "UltraSpeed Office Elite = P45,000 ", "PowerTech Multimedia Master = P55,000", "EpicGear Creator's Dream = P 70,000 " };

        for (int i = 0; i < 5; i++) {
            cout << "| " << i + 1 << ". " << computer[i] << endl;
        }

        cout << "\nWould you like to buy one?\n"
            "| 1. Yes\n"
            "| 2. No\n"
            "Please enter your desired number: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nWhat would you like to buy?" << endl;
            for (int i = 0; i < 5; i++) {
                cout << "| " << i + 1 << ". " << computer[i] << endl;
            }

            cout << "Please enter your desired number: ";
            cin >> choice;

            switch (choice) {
            case 1:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    c1payment();
                    cash();
                }
                else if (choice == 2) {
                    c1payment();
                    ewallet();
                }
                else {
                    c1payment();
                    card();
                }
                break;
            case 2:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    c2payment();
                    cash();
                }
                else if (choice == 2) {
                    c2payment();
                    ewallet();
                }
                else {
                    c2payment();
                    card();
                }
                break;
            case 3:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    c3payment();
                    cash();
                }
                else if (choice == 2) {
                    c3payment();
                    ewallet();
                }
                else {
                    c3payment();
                    card();
                }
                break;
            case 4:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    c4payment();
                    cash();
                }
                else if (choice == 2) {
                    c4payment();
                    ewallet();
                }
                else {
                    c4payment();
                    card();
                }
                break;
            case 5:
                cout << "\nThank you for choosing our Product\n"
                    "What kind of payment would you like to do?\n"
                    "| 1. Cash/COD\n"
                    "| 2. E-Wallet\n"
                    "| 3. Credit Card\n"
                    "Please enter your desired number: ";
                cin >> choice;
                if (choice == 1) {
                    c5payment();
                    cash();
                }
                else if (choice == 2) {
                    c5payment();
                    ewallet();
                }
                else {
                    c5payment();
                    card();
                }
                break;
            default:
                cout << "ERORR INPUT!! Please try again." << endl;
                mainpage();
            }
        }
        else {
            cout << "Thank you for shopping with us!!";
            exit(0);
        }

        return 0;

    }


