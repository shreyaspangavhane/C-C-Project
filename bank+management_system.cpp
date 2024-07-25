#include<iostream>
#include<string.h>
using namespace std;
class bank{
    public :
        string name;
        int acc_no;
        float bal;
        float with_amt;
        float dep_amt;
        void details(){
            cout<<"enter the name: ";
            cin>>name;
            cout<<"enter the account number: ";
            cin>>acc_no;
            cout<<"Enter the Balance in your acc: ";
            cin>>bal;
        }
        
        void withdraw(){
            cout<<"\nEnter the withdraw amt: ";
            cin>>with_amt;
            if (with_amt>bal)
            {
                cout<<"With draw amt is grater than balance\nTry Again!!";
            }
            else{
                bal-=with_amt;
                cout<<"Current bal is: "<<bal;
            }
        }
        void deposite(){
            cout<<"\nEnter the deposite amt: ";
            cin>>dep_amt;
            bal+=dep_amt;
            cout<<"Current bal is: "<<bal;
            
        }
        void display(){
            cout<<"\nName of account holder: "<<name;
            cout<<"\nAccount number: "<<acc_no;
            cout<<"\nCurrent Balance: "<<bal;
        }
};
int main(){
    int ch;
    bank b;
    do
    {
        cout<<"\nMENU\n1.Deatils\n2.Withdraw Amount\n3.Deposite Amount\n4.Display";
        cout<<"\nEnter ur Choice:  ";
        cin>>ch;

        switch (ch)
        {
        case 1:
            b.details();
            break;
        
        case 2:
            b.withdraw();
            break;
        
        case 3:
            b.deposite();
            break;
            
        case 4:
            b.display();
            break;
        
        default:            
            cout<<"Invalid Choice!!";
            break;
        }
        cout<<"\nDo you want to continue(1/0):  ";
        cin>>ch;  
    } while (ch==1);
    

    return 0;
}
