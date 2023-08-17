#include<iostream>
using namespace std;
int main(){
	int number=9;
	int guess;
	int playerBalance=90;
	int amount;
	int attempt=0;
	cout<<"WELCOME TO THE SHILLING CASINO NUMBER GUESSING GAME"<<endl;
	cout<<"I'm thinking of a number between 1 and 100.can you guess it"<<endl;
	while(true){
	cout<<"Enter guess"<<endl;
	cin>>guess;
	cout<<"Enter amont"<<endl;
	cin>>amount;
	attempt++;
	if(amount>playerBalance){
		cout<<"NOT ENOUGH FUND!PLEASE LOAD WALLET"<<endl;
	}
	
	else if(guess<number){
		cout<<"Your guess number is too low!try again"<<endl;
	}
	else if(guess>number){
		cout<<"Your guess number is too high!try again"<<endl;
	}
	else if(guess==number){
		cout<<"congratulation! you won \t"  <<attempt<<"attempt"<<endl;
		break;
	}

	}
	
}
