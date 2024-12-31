#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Function to show the menu
void showMenu() {
    cout << "\n--- dictionary ---\n";
    cout << "1. add words\n";
    cout << "2. search word\n";
    cout << "3. show all words\n";
    cout << "4. Exit\n";
    cout << "choose: ";
}

int main() {
    unordered_map<string, string> dictionary;
    int choice;
    string word, translate;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "enter word: ";
                cin >> word;
                cout << "enter translation: ";
                cin >> translate;
                dictionary[word] = translate;
                cout << "word added successfuly!\n";
                break;

            case 2:
                cout << "enter the word to search: ";
                cin >> word;
                case 2:

                cout << "enter the word to search: ";
                cin >> word;
                } else {
                    cout << "The word does not found!\n";
                }
                break;

            case 3:
                cout << "\n--- all words ---\n";
                for (const auto& pair :  dictionary) {
                    cout << pair.first << ": " << pair.second << endl;
                }
                break;

            case 4:
                cout << "leave...\n";
                break;

            default:
                cout << "invalid choice! please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
