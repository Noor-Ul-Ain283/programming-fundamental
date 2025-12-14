#include <iostream>
using namespace std;

int main() {
   int account_balance;
   bool loyalty;
   cout<<"Enter your account_balance:";
   cin>>account_balance;
   //checking account type
   cout<<"account type:";
   (account_balance<100)?cout<<"Low balance account":((account_balance>=100) && (account_balance<=500)?cout<<"Standard account":cout<<"premium account");
   //speacial offer eligibility
   cout<<"\nEnter 1 for loyalty and 0 for not loyal:";
   cin>>loyalty;
   account_balance>200&&loyalty==1?cout<<"\neligible for speacial offer":cout<<"Not eligible";
   return 0;
}
   
   
