#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class ServiceCentre 
{
    string shopName;
    int year;
    string ownerName;

public:
    void inputShopDetails()
    {
       
        cout << "Enter the name of Common Service Centre: ";
        getline(cin, shopName);

        cout << "Enter the year shop was opened: ";
        cin >> year;

        cout << "Enter the name of owner:";
        getline(cin, ownerName);
    }

    void displayShopDetails() {
        cout << "\n--- Welcome to " << shopName << " ---\n";
        cout << "Opened in: " << year << "\n";
        cout << "Owner is" << ownerName << "\n";

    }

    void showServices() 
    {
        cout << "\nAvailable Services:\n";
        cout << " Aadhar Update\n";
        cout << " PAN Card Application\n";
        cout << " Passport Registration\n";
        cout << " Ration Card Application\n";
        cout << "Enter your choice : ";
    }

    void processService(int choice) {
        switch (choice) {
            case 1:
                cout << "Processing Aadhar Update...\n";
                break;
            case 2:
                cout << "Processing PAN Card Application.\n";
                break;
            case 3:
                cout << "Processing Passport Registration.\n";
                break;
            case 4:
                cout << "Processing Ration Card Application.\n";
                break;
            default:
                cout << "Invalid choice. Please select a valid service.\n";
        }
    }
};

int main()
{
int n;

    cout << "Enter number of Common Service Centre: ";
    cin >> n;
    cin.ignore();

    ServiceCentre csc;

    int choice;

    csc.inputShopDetails();
    csc.displayShopDetails();
    csc.showServices();
    cin >> choice;

    csc.processService(choice);

    return 0;
}



