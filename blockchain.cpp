#include<iostream>
#include<ctime>
#include<vector>
using namespace std;
//transaction data
struct transactiondata{
    double amount;
    string senderkey;
    string recieverkey;
    time_t timestamp;
}; 
