#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // List of quotes
    string quotes[] = {
        "Believe in yourself!",
        "Never give up.",
        "Stay positive and happy.",
        "Work hard and be kind.",
        "Dream big and dare to fail.",
        "Success comes with consistency.",
        "Push yourself, no one else will do it for you."
    };

    int n = sizeof(quotes) / sizeof(quotes[0]);

    // Initialize random seed
    srand(time(0));

    char choice;

    do {
        int randomIndex = rand() % n;

        cout << "\n💡 Quote of the moment:\n";
        cout << quotes[randomIndex] << endl;

        cout << "\nDo you want another quote? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye 👋" << endl;

    return 0;
}