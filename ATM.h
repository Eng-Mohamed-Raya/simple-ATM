#ifndef ATM_H
#define ATM_H


class ATM
{
    public:
        ATM();
        ATM(double balance);
        void display_list();//print list of services
        void set_password(int passward);
        bool check_password();//function to check password true or false
        void setBalance(double balance);
        double getBalance();
        double Depost();//depost function
        double Withdraw();//withdraw function
        void process(int choise);//process your choise services
        void mains();//start programm
        bool again_process();//do again processes
        bool check=false;//public variable to check in functions

    private:
        double balance;
       int passward;

};

#endif // ATM_H
