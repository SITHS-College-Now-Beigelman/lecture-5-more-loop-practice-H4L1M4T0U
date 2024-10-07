// Halimatou Diaby
//Lecture 5 (If statements and loop practice)
//10/1/24





#include <iostream>;
using namespace std;





int main()
{

double InitialBal;
int Transactions;
string Ttype;
double AmtSpentTransaction;
double FINALamt;
double CredTotal;
double DebTotal;




cout << "What was the initial balance at the start of the day? " << endl;
cin >> InitialBal;


cout << "How many transactions did you make? " << endl;
cin >> Transactions;



int i = 0;
for (i=1; i<=Transactions; i++) { 
    cout << " What is the type of transaction? (Credit or Debit)" << endl;
    cin >> Ttype;
        cout << "What was the amount used in this transaction? : \n" << endl;
        cin >> AmtSpentTransaction;
        if (Ttype == "Debit")
            cout << "Subrtracting balance....\n " << endl;
            cout<< "Your New balance is " <<  InitialBal - AmtSpentTransaction << "Dollars"<<endl;
            cin >> FINALamt;
                if (Ttype == "Credit")
                    cout << " Adding Balance....\n" << endl; 
                    cout<< "Your New balance is  " <<  InitialBal + AmtSpentTransaction << "Dollars"<<endl;
                    cin >> FINALamt;


cout << "YOUR FINAL BALANCE AFTER ALL TRANSACTIONS IS $$ " << FINALamt << endl;

}










    return 0;
}
