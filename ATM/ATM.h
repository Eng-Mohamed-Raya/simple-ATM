#ifndef ATM_H
#define ATM_H


class ATM
{
    public:
        ATM();
        ATM(double balance);
        void display_list();
        void set_password(int passward);
        bool check_password();
        void setBalance(double balance);
        double getBalance();
        double Depost();//win
        double Withdraw();//lost
        bool check=false;
        void process(int choise);
        void mains();
        bool agin_process();



        ~ATM();

    private:
        double balance;
       int passward;

};

#endif // ATM_H
