#include <iostream>
using namespace std;

class BankAccount {
    private:
        int accbal;
    public:
        int getAccBal() {
            return accbal;
        }
        void setAccBal(int bal) {
            accbal = bal;
        }
        friend void checkLoan();
};
class Loan {
    private:
        int loanAmt;
    public:
        int getLoanAmt() {
            return loanAmt;
        }
        void setLoanAmt(int amt) {
            loanAmt = amt;
        }
        friend void checkLoan(BankAccount bank, Loan loan) {
            if (bank.getAccBal() < loan.getLoanAmt()) {
                cout << "Defaulter" << endl;
            } else {
                cout << "No defaults" << endl;
            }
        }
};
int main() {
    BankAccount b;
    Loan l;
    b.setAccBal(5000);
    l.setLoanAmt(2000);
    checkLoan(b, l);
}