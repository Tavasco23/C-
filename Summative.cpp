#include <iostream>
#include <string>
#include <ctime> // for time()
using namespace std;

struct Pet {
    string name;
    string type;
    int age;
    float price;
};

// Input/Output to insert pet you want to order
void petIO() {
    string name;
    float price;
    cout << "\nType of Pet: ";
    cin >> name;
    cout << "Price: ";
    cin >> price;
    cout << "The pet is " << name << " with the price of " << price << "." << endl;
}

// Conditional statements to check if pet is expensivess
void petConditional() {
    float price;
    cout << "\n--- Check the pet price (Expensive or Affordable) ---" << endl;
    cout << "Enter pet price: ";
    cin >> price;
    if (price > 5000)
        cout << "Pet is expensive!" << endl;
    else
        cout << "Pet is affordable." << endl;
}

// Loops to display pets and their ages
void petLoop() {
    string petType;
    cout << "\nEnter type of pet: ";
    cin >> petType;

    cout << "\nPet Ages:" << endl;
    for (int i = 1; i <= 5; ++i) {
        int age = (time(0) + i) % 10 + 1; // pseudo-random age between 1 and 10
        cout << petType << " " << i << " - Age: " << age << endl;
    }
}

// Arrays to store and display pet names
void petArray() {
    string pets[3];
    cout << "\nEnter 3 pet names:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Pet " << (i + 1) << ": ";
        cin >> pets[i];
    }

    cout << "\nPet names: ";
    for (int i = 0; i < 3; ++i) {
        cout << pets[i] << " ";
    }
    cout << endl;

    int randomIndex = time(0) % 3;
    cout << "Randomly selected pet name: " << pets[randomIndex] << endl;
}

// Functions to check if pet is young
void petFunction() {
    int age;
    cout << "\nEnter pet age: ";
    cin >> age;
    if (age < 3) {
        cout << "Pet is young." << endl;
    } else {
        cout << "Pet is adult." << endl;
    }
}

// Structures to display the pet information
void petStructure() {
    Pet pet;
    cout << "\nEnter pet name: ";
    cin >> pet.name;
    cout << "Enter pet type: ";
    cin >> pet.type;
    cout << "Enter pet age: ";
    cin >> pet.age;
    cout << "Enter pet price: ";
    cin >> pet.price;

    cout << "\nPet Info:\n";
    cout << "Name: " << pet.name << "\n";
    cout << "Type: " << pet.type << "\n";
    cout << "Age: " << pet.age << "\n";
    cout << "Price: " << pet.price << endl;
}

// Pointer to display address of a bird
void petPointer() {
    string bird;
    cout << "\nEnter the name of the bird: ";
    cin >> bird;
    string* ptr = &bird;
    cout << "The address of the bird (" << bird << ") is: " << ptr << endl;
}

// Quit
void quit() {
    cout << "\nThank you for visiting the Pet Shop!" << endl;
}

// MENU
int main() {
    int choice;
    do {
        cout << "\n--- Pet Shop Menu ---\n";
        cout << "[1] Insert Pet Info\n";
        cout << "[2] Pet Price\n";
        cout << "[3] Pet Age\n";
        cout << "[4] Pet Name\n";
        cout << "[5] Pet Check Age\n";
        cout << "[6] Pet Info\n";
        cout << "[7] Pet Address\n";
        cout << "[8] Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: petIO(); break;
            case 2: petConditional(); break;
            case 3: petLoop(); break;
            case 4: petArray(); break;
            case 5: petFunction(); break;
            case 6: petStructure(); break;
            case 7: petPointer(); break;
            case 8: quit(); break;
            default: cout << "\nInvalid choice. Try again.\n";
        }

    } while (choice != 8);
    return 0;
}
