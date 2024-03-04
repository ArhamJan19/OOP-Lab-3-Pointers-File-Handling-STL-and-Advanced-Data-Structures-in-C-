#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> contacts;

    int choice;
    string name;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Search Contact" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {


            cout << "Enter contact name: ";
            cin.ignore();
            getline(cin, name);

            if (contacts.count(name) > 0) {
                cout << "Contact already exists." << endl;
            }
            else {
                string phone_number;
                cout << "Enter phone number: ";
                getline(cin, phone_number);

                contacts[name] = phone_number;
                cout << "Contact added successfully!" << endl;
            }
        }
        else if (choice == 2)
        {
            cout << "Enter contact name to search: ";
            cin.ignore();
            getline(cin, name);

            if (contacts.count(name) > 0) {
                string phone_number = contacts[name];
                cout << "Name: " << name << endl;
                cout << "Phone Number: " << phone_number << endl;
            }
            else {
                cout << "Contact not found." << endl;
            }
        }

        else if (choice == 3)
        {
            cout << "Exiting..." << endl;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    } while (choice != 3);

    return 0;
}
