
#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;

    cout << "====================================\n";
    cout << "       CYBER SAFETY PORTAL\n";
    cout << "====================================\n";

    cout << "\n1. Cyberbullying\n";
    cout << "2. Online Blackmail\n";
    cout << "3. Fake Accounts\n";
    cout << "4. Online Scams\n";
    cout << "5. Exit\n";

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "\n";

    switch (choice) {
        case 1:
            cout << "Save evidence and block the bully. Report the account.\n";
            break;

        case 2:
            cout << "Do not pay or respond. Save evidence and seek help.\n";
            break;

        case 3:
            cout << "Do not share personal information with unknown accounts.\n";
            break;

        case 4:
            cout << "Avoid suspicious links and never share passwords or OTPs.\n";
            break;

        case 5:
            cout << "Thank you for using CyberSafetyPortal!\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
    }

    return 0;
}
