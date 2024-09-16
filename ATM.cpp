#include "ATM.h"
#include<iostream>
using namespace std;

ATM::ATM():balance(0),passward(0000)
{

}

ATM::ATM(double balance)
{
    this->balance=balance;
}
void ATM::set_password(int passward)
{
    this->passward=passward;

}

//function to check password true or false
bool ATM::check_password()
{

    if(passward==1234)
        return true;
    else
        return false;
    cout<<"correct!\nTry again:\n";
}

//print list of services

void ATM::display_list()
{
    cout<<"\t*********************SERVICES*********************\n\n";
    cout<<"\t\t1:Check Balance.";
    cout<<"\t2:Depost Money.\n"<<endl;
    cout<<"\t\t3:Withdrow Money.";
    cout<<"\t4:Exit.\n"<<endl;
    cout<<"\t**************************************************\n";
    cout<<"Enter your choise:\n";
}
void ATM::setBalance(double balance)
{
    this->balance=balance;
}
double ATM::getBalance()
{
    return balance;
}

//depost function

double ATM::Depost()
{
    double depost;
    cout<<"your balance is "<<balance<<"$\n";
    cout<<"Please enter depost money ? "<<endl;
    cin>>depost;
    balance+=depost;
    cout<<"your new balance is "<<balance<<"$\n";
}

//withdraw function

double ATM::Withdraw()
{
    double withdraw;
    cout<<"your balance is "<<balance<<"$\n";
    cout<<"How many withdraw money do you need ? "<<endl;
    do
    {
        cin>>withdraw;
        if(withdraw<=balance)
        {
            balance-=withdraw;
            cout<<"your new balance is "<<balance<<"$\n";
            check=true;
        }
        else
        {
            cout<<"wrong!\n   your balance less than withdraw .\nTry again:\n";
            check=false;
        }
    }
    while(!check);

}

//do again processes

bool ATM::again_process(){
    char choise;
    cout<<"Do you need anthor process Yes(Y,y) or NO(N,n)?\n";
    cin>>choise;
    if(choise=='Y'|| choise=='y')
        return true;
    else return false;

}

//process your choise services

void ATM::process(int choise)
{
    switch(choise)
    {
    case 1:
        cout<<"your balance is "<<balance<<"$\n";
        break;
    case 2:
        Depost();
        break;
    case 3:
        Withdraw();
        break;
    case 4:
        cout<<"\t\tExiting... Thank you for using the ATM.\n ";
        break;

    }


}

//start programm

void ATM::mains()
{
    int user_password;
    cout<<"Please! Enter your password (4 number):\n";
    do
    {
        cin>>user_password;
        int choise;
        set_password(user_password);
        if(check_password()==true)
        {
            check=true;

            do
            {
                display_list();
                do{
                cin>>choise;
                if(choise<1 ||choise>4)
                {
                    cout<<"wrong!\n   Enter choise from 1 to 4 : \n";
                }
                }while(choise<1 ||choise>4);
                process(choise);
                if(choise==4)
                   break;
                else {
                    check=again_process();
                    if(check==false)
                        cout<<"\t\tThank you for using the ATM.\n";
                   }

            }
            while(check);
             break;
        }

        else
        {
            check=false;
            cout<<"No correct!\n   Try again:\n";
        }
    }
    while(!check);
}
