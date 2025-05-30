#include <iostream>
using namespace std;

class Calculator {
  public:
   int add(int a, int b);
   int substarct(int a,int b);
   int multiple (int a,int b);
   int divide (int a ,int b);
};

int Calculator::add(int a,int b) {
return a+b;
}
 
int Calculator::substarct(int a,int b){
    return a-b;
}

int Calculator::multiple(int a,int b){
    return a*b;
}
  
int Calculator::divide(int a,int b){
    return a/b;
}
int main(){
    Calculator calc;
    cout<<"Add:"<<calc.add(10,5)<<endl;
    cout<<"Substract:"<<calc.substarct(10,5)<<endl;
    cout<<"multiple:"<<calc.multiple(10,5)<<endl;
    cout<<"divide;"<<calc.divide(10,5)<<endl;
    return 0;
}
