#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>

using namespace std;

double amt;
int ent_pin,npin1,npin2;
int card_choice,trans_choice;
int ntwk,phone,afID;
int sProvider;
int meterNumber,token;
int usr_otp,sys_otp;
int accNo;
int close;
bool pin_correct;

int pin = 1234;
double balance = 120000;

int deposit()
{

    cout<<"\a external application down"<<endl;

    return 0;

}

int miniStatement()
{

    cout<<"\a external application down"<<endl;

    return 0;

}

int bills()
{
    SERVICES : cout<<"please choose your service provider"<<endl
        <<"1.ESCOM"<<endl
        <<"2.Blantyre Water Board"<<endl
        <<"3.DSTV"<<endl
        <<"4.GoTV"<<endl
        <<"5.Others"<<endl;
    cin>>sProvider;
    switch(sProvider)
    {
    case 1:
        {
            cout<<"please enter your meter number"<<endl;
            cin>>meterNumber;
            cout<<"please enter amount"<<endl;
            cin>>amt;
            cout<<"transaction in progress"<<endl;
            cout<<"please wait...."<<endl;
            cout<<"transaction successful"<<endl
                <<"token:"<<token<<endl;
            break;
        }

    case 2 :
        {
            cout<<"\a external application down"<<endl;


            break;
        }

    case 3 :
        {
            cout<<"\a external application down"<<endl;


            break;
        }

    case 4 :
        {
            cout<<"\a external application down"<<endl;


            break;
        }

    case 5 :
        {
            cout<<"\a external application down"<<endl;


            break;
        }

    default:
        {
            cout<<"\a you have entered an invalid choice"<<endl
                <<"please retry"<<endl;
                goto SERVICES;
            break;
        }
    }
}

int cardless()
{
    cout<<"please enter your phone number"<<endl;
    cin>>phone;
    cout<<"enter your OTP password"<<endl;
    cin>>usr_otp;
    if(amt<=balance)
    {
    cout<<"your transaction is in progress"<<endl
        <<"please wait....." <<endl;
    amt= 21000;
    cout<<"transaction successful"<<endl
        <<"please take your cash"<<endl;
    balance -= amt;
    }else{
        cout<<"balance insufficient"<<endl;
        }
}

int mobileRecharge()
{
    cout<<"choose your service provider"<<endl
        <<"1.Airtel \t 2.TNM"<<endl
        <<"3.Afrimax"<<endl;
    cin>>ntwk;
    switch(ntwk)
    {
    case 1 :
        {
            cout<<"enter your phone number"<<endl;
            cin>>phone;
            cout<<"enter amount"<<endl;
            cin>>amt;
            if(amt<=balance)
            {
                cout<<"transaction is being processed please wait"<<endl
                    <<"...."<<endl;
                cout<<"transaction successful"<<endl;
                balance -= amt;
            }else{
                cout<<"You have insufficient balance"<<endl;
                }
            break;
        }
    case 2 :
        {
            cout<<"enter your phone number"<<endl;
            cin>>phone;
            cout<<"enter amount"<<endl;
            cin>>amt;
            if(amt<=balance)
            {
                cout<<"transaction is being processed please wait"<<endl
                    <<"...."<<endl;
                cout<<"transaction successful"<<endl;
                balance -= amt;
            }else{
                cout<<"You have insufficient balance"<<endl;
                }
            break;
        }
    case 3 :
        {
            cout<<"Afrimax ID"<<endl;
            cin>>afID;
            cout<<"enter amount"<<endl;
            cin>>amt;
            if(amt<=balance)
            {
                cout<<"transaction is being processed please wait"<<endl
                    <<"...."<<endl;
                cout<<"transaction successful"<<endl;
                balance -= amt;
            }else{
                cout<<"You have insufficient balance"<<endl;
                }
            break;
        }
    default :
        {
            cout<<"you have entered an invalid option"<<endl;
            break;
        }
    }
}

int fundsTransfer()
{
    cout<<"enter the account number"<<endl;
    cin>>accNo;
    cout<<"enter amount"<<endl;
    cin>>amt;
    if(amt<=balance)
    {
        cout<<"please wait while your transaction is being processed"<<endl
            <<"......"<<endl
            <<"transaction successful"<<endl;
            balance -= amt;
    }else{
        cout<<"you have insufficient funds"<<endl;
    }
    return 0;
}

int pin_check()
{
    cout<<"please enter your pin"<<endl;
    cin>>ent_pin;
    if(ent_pin==pin)
    {
        pin_correct = true;
    }
    else{
        pin_correct = false;
    }
    return 0;
}

int pin_change()
{
    cout<<"enter new pin"<<endl;
    cin>>npin1;
    cout<<"confirm new pin"<<endl;
    cin>>npin2;
    if(npin1==npin2)
    {
        pin = npin2;
        cout<<"pin changed successfully"<<endl;
    }else{
    cout<<"error!:"<<endl
    <<"pin mismatch"<<endl;
    return 0;
    }
}

int withdrawal()
{
    START : cout<<"enter withdrawal amount"<<endl;
    cin>>amt;
    if(amt<=balance)
    {
        cout<<"transaction successful"<<endl
        <<"please take your cash"<<endl;
        balance -= amt;
    }else{
    cout<<"error!:amount entered greater than initial balance"<<endl
        <<"enter amount below:MWK"<<balance<<endl;
    goto START;
    }
    return 0;
}

int main()
{
    cout<<"Welcome"<<endl;
    FCHOICE : cout<<"please choose your operation"<<endl
        <<"1.Cardless withdrawal"<<endl
        <<"2.Card operations"<<endl;
    cin>>card_choice;
    switch(card_choice){
case 1 :
    {
        do{
        cardless();
        CTRANS : cout<<"do you want to do another transaction?"<<endl
            <<"1.Yes"<<endl
            <<"0.No"<<endl;
        cin>>close;}while(close == 1);
        if(close != 1&0)
        {
            cout<<"choice invalid!"<<endl
                <<"please press the numbers indicated"<<endl;
                goto CTRANS;
        }
        break;
    }


case 2 :
    {
        pin_check();
        if(pin_correct)
        {do{
        cout<<"please choose your operation"<<endl
            <<"1.Cash withdrawal"<<endl
            <<"2.Check balance"<<endl
            <<"3.Change PIN"<<endl
            <<"4.Cash deposit"<<endl
            <<"5.Ministatement"<<endl
            <<"6.Funds transfer"<<endl
            <<"7.Bill payments"<<endl
            <<"8.Prepaid mobile recharge"<<endl;
        cin>>trans_choice;

        switch(trans_choice)
        {
            case 1 :
                {
                    withdrawal();
                    break;
                }
            case 2 :
                {
                    cout<<"your balance is :MWK"<<balance<<endl;
                    break;
                }
            case 3 :
                {
                    pin_change();
                    break;
                }
            case 4 :
                {
                    deposit();
                    break;
                }
            case 5 :
                {
                    miniStatement();
                    break;
                }
            case 6 :
                {
                    fundsTransfer();
                    break;
                }
            case 7 :
                {
                    bills();
                    break;
                }
            case 8 :
                {
                    mobileRecharge();
                    break;
                }
            default :
                {
                    cout<<"Choice invalid"<<endl;
                    break;
                }
        }
        EXIT : cout<<"do you want to do another transaction?"<<endl
            <<"1.yes"<<endl
            <<"0.no"<<endl;
        cin>>close;
        if(close != 1&0)
        {
            cout<<"error"<<endl
                <<"Invalid choice"<<endl;
            goto EXIT;
        }
        }while(close == 1);
        }else{
        cout<<"\a access denied:"<<endl
            <<"please take your card"<<endl;
        }
        break ;
    }

default :

    {
    cout<<"choice invalid"<<endl;
    goto FCHOICE;
    break;
    }

    }
    cout<<"Thank you for banking with us"<<endl;
    return 0;
}
