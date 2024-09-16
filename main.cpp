#include<iostream>
#include "ATM.h"

using namespace std;

int main()
{
    cout<<"\t\t   Welcome to the ATM ."<<endl;
    cout<<"\t\t--------------------------\n"<<endl;

    //first user

    ATM user1(1000);
    user1.mains();
    //end first user


    return 0;
}
