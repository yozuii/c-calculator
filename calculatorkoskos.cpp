#include <iostream>
using namespace std;
int main()
{
cout<<"Calculator by koskos"
cout<<"Enter the first number"<<endl;
    int num1;
        cin>>num1;
            cout<<"Enter the second number"<<endl;
                int num2;
                    cin>>num2; 
                        cout<<"Now enter an operator"<<endl;
                            cout<<"(+, -, /, *)"<<endl;
                            
                            char op;
                        cin>>op;
                switch (op) {
                    case '+':
                        cout<<num1<<"+"<<num2<<"="<<num1 + num2<<endl;
                            break;
                    case '-':
                        cout<<num1<<"-"<<num2<<"="<<num1 - num2<<endl;
                            break;
                    case '*':
                        cout<<num1<<"*"<<num2<<"="<<num1 * num2<<endl;
                            break;
                    case '/':
                        if(num2 != 0)
                        cout<<num1<<"/"<<num2<<"="<<num1 / num2<<endl;
                        
                            
                        else
                        cout<<"Error : Invalid (number 2 = 0 not possible)";
                        break;
                        default:
                                cout<<"Invalid operator !"<<endl;
                                    break;
                }    
                return 0;
}
