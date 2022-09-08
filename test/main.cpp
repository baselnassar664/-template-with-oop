
#include<iostream>
using namespace std;
template <class T>
class Calculator{
private:
    T n1,n2;
public:
    Calculator(T n1,T n2){
    Calculator::n1=n1;
    Calculator::n2=n2;
    }
    T Add(){
    return n1+n2;
    }

    T  subtract() {
    return n1-n2;
    }
    T  multiply() {
    return n1*n2;
    }
    T  divide() {
    if (n1==0)
        cout <<"no divide"<<endl;
    else
        return n1/n2;
    }
};

int main() {
Calculator<double> c(1,2);
cout<<c.Add()<<endl;
cout<<c.subtract()<<endl;
cout<<c.multiply()<<endl;
cout<<c.divide()<<endl;


}


