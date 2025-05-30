#include <iostream>
using namespace std;

class car{
    public:
     string brand;
     void start(){
        cout << brand << "car started!"<<endl;
     }

};
  
int main(){
    car c1,c2,c3; //Accesing data member
    c1.brand="Tayota";
    c2.brand="benz";
    c3.brand="Tata";

c1.start();
c2.start();
c3.start(); 
return 0;
}
