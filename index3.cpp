#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	cout<<"Welcome to the Number Guess Game!"<<endl;
	cout<<"You will have to guess a number between 1-100."<<endl;
	cout<<"Let's Start the Game."<<endl;
	
	srand(time(0));
	int ScretNumber = ( rand() %100) + 1;
	cout<<"Total 5 attempt to guess the correct number."<<endl;
	int attemptLeft = 5;
	int playerInput;
	
	for(int i = 1; i<=5; i++)
	{
		cout<<"Guess the Number--->";
		cin>>playerInput;
		
		if(playerInput == ScretNumber)
		{
			cout<<"Congratulation!! Guess the right Number."<<endl;
			cout<<"Thanks for playing.";
			break;
		}
		else{
			if(playerInput > ScretNumber)
			{
				cout<<"Guess The Smaller Number. Try Again."<<endl;
			}
			else{
				cout<<"Guess The Larger Number. Try Again."<<endl;
			}
		}
		attemptLeft--;
		//cout<<"Attempt Left to guess the Scret Number:"<<attemptLeft<<endl;
		
		if(attemptLeft == 0)
		{
			cout<<"Sorry your attempt has been finished to guess the Scret Number."<<endl;
			cout<<"Scret Number was : "<< ScretNumber<<endl;
			cout<<"Thanks for Playing..";
		}
	}
	return 0;
}