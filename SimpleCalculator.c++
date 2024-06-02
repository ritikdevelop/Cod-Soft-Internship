#include <iostream>
using namespace std;

class Simple{
    private:
    int num1, num2;
    char op;
    
    public:
    void getdata(){

        cout<<"----------------------------- Simple Calculator -----------------------------"<<endl;
        cout<<"\n";
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter operator: (+, -, *, /): ";
        cin >> op;
    }
    void Operator(){
        switch (op){
        case '+':
        cout << "The Addition of two number is: " << num1 + num2;
        break;

        case '-':
        cout << " The Subtraction of two number is: " << num1 - num2;
        break;

        case '*':
        cout << "The Multiplication of two number is: " << num1 * num2;
        break;

        case '/':
        cout << "The Division of two number is: " << num1 / num2;
        break;

        default:
        cout << "Invalid Operator ! \n" "Please choose valid Operator.";
        }
    }
};

class Calculator : public Simple{
public:
    void calculate(){
        getdata();
        Operator();
    }
};

int main(){
    Calculator obj;
    obj.calculate();
    return 0;
}