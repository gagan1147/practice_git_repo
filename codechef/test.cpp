#include <iostream>
using namespace std;




int main() {
	// your code goes here
	int amount;
	float balance;
	cin>>amount>>balance;
	if(amount%5!=0){
	    printf("%0.2f", balance); 
	}
	else if (amount>balance){
	    printf("%0.2f", balance); 
	}
	else{
	    printf("%0.2f", balance-amount-0.50);
	}
	return 0;
}
