#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    string name;
    string shift;
};

int main() {
    int n;
    cout << "Enter the number of employees checked in today: ";
    cin >> n;

    Employee  *employees = new Employee[n];

    int morning = 0, afternoon = 0, night = 0;

    for (int i = 0; i < n; ++i)
    {
        cout << "\nEnter details of employee " << (i + 1) << ":\n ";
        cout << "Name: ";
        cin >> employees[i].name;

        cout << "Shift (Morning/Afternoon/Night): " ;
        cin >> employees[i].shift;

        if(employees[i].shift == "Morning")
           morning++;
        else if (employees[i].shift == "Afternoon")
           afternoon++;
        else if(employees[i].shift == "Night")
           night++;
    }

    for(int i = 0; i < n; i++)
    {
        cout << (i + 1) << ". " <<  employees[i].name
             << " - " <<  employees[i].shift << " Shift" << endl;
    }
    
    cout << "\n============= Shift Summary =============\n";
    cout << "Morning Shift: " << morning << endl;
    cout << "Afternnon Shift: " << afternoon << endl;
    cout << "Night Shift: " << night << endl;

    delete[] employees;
    return 0;
}
