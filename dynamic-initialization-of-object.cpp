#include <iostream>
using namespace std;

class BankDeposit{
    int principal, year;
    float interestRate, returnValue;

    public:
        BankDeposit(){}

        BankDeposit(int p, int y, float r){// r canbe value like 0.04
            principal = p;
            year = y;
            interestRate = r;
            returnValue = principal;
            for(int i =0; i<year; i++){
                returnValue = returnValue*(1+interestRate);
            }
        }

        BankDeposit(int p, int y, int r){// r canbe value like 4
            principal = p;
            year = y;
            interestRate = float(r)/100;
            returnValue = principal;
            for(int i =0; i<year; i++){
                returnValue = returnValue*(1+interestRate);
            }
        }

        void show(void){
            cout<<"Your investment after "<<year<<" years is "<<returnValue<<endl;
        }
};

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    bd3.show();// will not give error

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}
