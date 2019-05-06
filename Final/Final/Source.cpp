#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std; 


// Hey Hey Kory!I looked at million different ways to do this and this was and this was the only one I was able to read the code and understand. http://www.cplusplus.com/forum/beginner/229309/
int main()
{

	int Pcard1;
	int Pcard2;
	int Pcard3;
	int PcardSum;
	int PcardSum2;
	string response; 
	unsigned seed = time(0);
	srand(seed); //to initialize the random number generator and return an int number of seconds

	
	cout << "Welcome to Black Jack" << endl;
	cout << "*********************" << endl;
	cout << "Please Press (P) to Play" << endl;
	getline(cin, response);  //gets input from user

	cout << " Player First 2 Cards" << endl; //Player gets first two cards

	Pcard1 = (1 + rand() % 10); // gives you a random number between 1-10
	cout << Pcard1, ",";
	Pcard2 = (1 + rand() % 10); // gives you random number for player card 2
	cout << Pcard2 << endl;
	cout << "Total:" << Pcard1 + Pcard2 << endl;  //gives total of both cards
	PcardSum = Pcard1 + Pcard2;
	
do
{
	if (PcardSum > 21) // if the card sum is greater than 21, it  returns the message Bust! Game Over! 
	{
		cout << "Bust! Game Over!" << endl;
	}

	else if (PcardSum == 21) // if cardSum = 21 it couts "Winner! Winner!"
	{
		cout << "Winner! Winner!" << endl;
	}

	else
	{

		cout << "Do you want to Hit: (Yes/No)?" << endl;
		getline(cin.response);
	}
	Pcard3 = (1 + rand() % 10); // if response is yes than player gets a third card
	cout << Pcard3 << endl;
	cout << "Total:" << Pcard1 + Pcard3 + Pcard3 << endl;
	PcardSum2 = Pcard1 + Pcard2 + Pcard3;

	while (response == "Yes" || response== "yes");
}


return 0; 
}
