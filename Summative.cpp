#include <iostream>
#include <string>


//John Emmanuelle G. Arellado
//BIT33
using namespace std;

struct Pet {
    string name;
    string type;
    int age;
    float price;
};


void petIO() {
    string name;
    float price;
    cout << "\nType of Pet: ";
    cin >> name;
    cout << "Price: ";
    cin >> price;
    cout << "The pet is " << name << " with the price of " << price << "." << endl;
}


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


void petLoop() {
    string petType;
    cout << "\nEnter type of pet: ";
    cin >> petType;

    cout << "\nPet Ages:" << endl;
    for (int i = 1; i <= 5; ++i) {
        int age = (petType.length() * i + 3) % 10 + 1; 
        cout << petType << " " << i << " - Age: " << age << endl;
    }
}


void petArray() {
    string pets[3];
    cout << "\nEnter 3 pet names:\n";
    for (int i = 0; i < 3; ++i) cin >> pets[i];

    cout << "\nPet names: " << pets[0] << " " << pets[1] << " " << pets[2] << endl;
    int index = pets[0].length() % 3;
    cout << "Selected pet: " << pets[index] << endl;
}


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


void petPointer() {
    string bird;
    cout << "\nEnter the name of the bird: ";
    cin >> bird;
    string* ptr = &bird;
    cout << "The address of the bird (" << bird << ") is: " << ptr << endl;
}


void quit() {
    cout << "\nThank you for visiting the Pet Shop!" << endl;
}


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
