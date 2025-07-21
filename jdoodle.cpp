#include <iostream>
using namespace std;
#include <string>

void basicIO() {
    string name;
    cout << "Enter your name ";
    cin >> name;
    cout <<"My name is " << name << endl;
    
}

void statements() {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    
     if (num > 0) {
        cout << "The number " << num << " is positive." << endl;
    } else if (num < 0) {
        cout << "The number" << num << "is negative." << endl;
    } else { 
        cout << "The number is zero." << endl;
    }
}

void loop() {
    
    int num ;
    int factorial = 1;
    
    cout << "Enter a Number:   ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "1";
        for (int i = 2; i <= num; i++) {
            cout << " * " << i;
            factorial *= i;
        }
        cout << " = " << factorial << endl;
    }
    
}

void Array() {
    
    
    
}

void function() {
    
}

void structures() {
    
}

void pointers() {
    
}

void quit() {
    cout << " ";
}

int main() {
    int choice;
    char chooseChoice;
    
    do {
        cout << "[1] - Basic IO Functions\n" << "[2] - Conditional Statements\n" << "[3] - Loops\n" << "[4] - Arrays\n" << "[5] - Functions\n" << "[6] - Structures\n" << "[7] - Pointers\n" << "[8] - Quit\n" << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: 
                basicIO();
                break;
            case 2: 
                statements();
                break;
            case 3: 
                loop();
                break;    
            case 4: 
                Array();
                break;
            case 5: 
                function();
                break;
            case 6: 
                structures();
                break;
            case 7: 
                pointers();
                break;
            case 8: 
                quit();
                break;
            default: 
                cout << "Invalid choice. Please try again.\n";
        }
        if (choice != '8') {
            cout << "Do you want to continue? (y/n): \n";
            cin >> chooseChoice;
        }
        
    }  while (chooseChoice == 'y' || chooseChoice == 'Y');
    
    return 0;
}
