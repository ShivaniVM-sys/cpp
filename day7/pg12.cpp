#include <iostream>
#include <string>
using namespace std;

class Vehichle
{
private:
    string model;
    int year;
    string owner;

public:
    Vehichle(string m, int y, string o)
    {
        model = m;
        year = y;
        owner = o;
    }

    void show()
    {
        cout << "Model: " << model
             << ", Year: " << year
             << ", Owner: " << owner << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of vehicles rented today: ";
    cin >> n;

    Vehichle **fleet = new Vehichle *[n];

    for(int i = 0; i < n; i++)
    {
        string model,owner;
        int year;

        cout << "\nEnter details for vehicle " << (i + 1) << ":\n";
        cout << "Model: ";
        cin.ignore();
        getline(cin, model);

        cout << "Year: ";
        cin >> year ;
        cin.ignore();

        cout << "Owner: ";
        getline(cin, owner);

        fleet[i] = new Vehichle(model, year, owner);
    }

    cout << "\n====== Rented Vehicle List ======\n";
     for(int i = 0; i < n; i++)
    {
        fleet[i]->show();
    }

    for(int i = 0; i < n; i++)
    {
        delete fleet[i];
    }
    delete[]fleet;

    return 0;
}
