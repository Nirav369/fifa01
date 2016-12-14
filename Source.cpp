/* Nirav Pardiwala *//*START DATE- 12/05/2015 *//*END DATE- 2/20/2016 */
#include<iostream>
#include<string>
using namespace std;
int defender;
int playerleft1, playerleft2;
int forwards;
int mid;
char ready = 'N';
int step = 0;
char input1, input2, input3;
char move[9];
string team_name;
int main()
{
	cout << "WELCOME TO BRAINER'S FOORBALL.\n";
	cout << "Time to form your Team.\n";
	cout << "Give a name to your team (dont use any space).\n";
	cin >> team_name;
	cout << endl;
	cout << endl;
	cout << "OK ! " << team_name << " is a good one.\n";
	cout << "Now lets see how good your are at FORMATIONS.\n";
	cout << "Out of 11 players 1 goal keeper. more 10 players left." << endl;
	while (ready == 'N')
	{
		cout << "How much defenders do you wish to keep in the game, 3 or 4 ?\n";
		//defender = 0;
		cin >> defender;
		while ((defender != 3) || (defender != 4))
		{
			if (defender < 3)
			{
				cout << defender << " !!! Are you serious ? you already lost the game. too less.Think and try again.\n";
				cout << "HINT: try 3 or 4. \n";
			}
			else if (defender > 4)
			{
				cout << defender << ", Everyone is defending ! hardly any1 left for Mid and forwards ! bad move! try again.\n";
				cout << "HINT: try 3 or 4. \n";

			}
			else
			{
				cout << "Way to GO !\n";
				break;
			}
			cin >> defender;
		}
		cout << endl;
		cout << endl;
		playerleft1 = 10 - defender;
		cout << "No. of players left are: " << playerleft1 << endl;
		cout << "How much Mid players do you wish to keep in the game, 3 or 4 ?\n";
		cin >> mid;

		while ((mid != 3) || (mid != 4))
		{
			if (mid < 3)
			{
				cout << mid << "!!! are you serious ? you already lost the game. too less.Think and try again.\n";
				cout << "HINT: try 3 or 4.\n";
			}
			else if (defender > 4)
			{
				cout << defender << " too much in the mid. lets play fair. try again.\n";
				cout << "HINT: try 3 or 4.\n";
			}
			else
			{
				cout << "You are all set!\n";
				break;
			}
			cin >> mid;
		}
		cout << endl;
		cout << endl;
		playerleft2 = playerleft1 - mid;
		forwards = playerleft2;
		cout << "This leaves you with " << forwards << " forwards.\n";
		cout << "So lets have a look at your Team once again.\n";
		cout << "Do you wish to continue ?\n";
		cout << "Press Y for yes and N for no.\n";
		cin >> ready;
	}
	cout << endl;
	cout << endl;
	cout << "NAME: "<< team_name <<endl;
	cout << "GOALKEEPER: 1 \n";
	cout << "DEFENDERS: " << defender << endl;
	cout << "MID: " << mid << endl;
	cout << "forwards: " << forwards << endl;
	cout << "Here is your line up: \n" << endl;
	cout << "------GK------\n";
	if (defender == 3)
	{
		cout << "--DL--DC--DR--\n";
	}
	else
	{ 
		cout << "DL--DC--DC2--DR\n";
	}
	if (mid == 3)
	{
		cout << "--ML--MC--MR--\n";
	}
	else
	{
		cout << "ML--MC--MC2--MR\n";
	}
	if (forwards == 3)
	{
		cout << "--FL--FC--FR--\n";
	}
	else
	{
		cout << "----FL--FR----\n";
	}
	ready = 'N';
	while (ready == 'N')
	{
		cout << "Lets learn the moves now (REMEMBER THEM WELL):" << endl;
		cout << "moves for G: throw(T), save(S), Kick(K).\n";
		cout << "moves for D: tackle(T), pass(P), clear(C).\n";
		cout << "moves for M: pass(P), shoot(S).\n";
		cout << "moves for F: Assist(A), shoot(S), tackle(T).\n";
		cout << "Do you wish to continue ?\n";
		cout << "Press Y for yes and N for N.\n";
		cin >> ready;
	}
	cout << endl;
	cout << endl;
	ready = 'N';
	while (ready == 'N')
	{
		cout << "How to play this game. you dont need your sturds or joy stick!\n";
		cout << "All you need is BRAIN !\n";
		cout << "keep in mind all the initials of the position and movements of every player.\n";
		cout << "Thats how you will be able to score or defend.\n";
		cout << "FOR EXAMPLE:\n";
		cout << "if u want your forward to assist and help other forward to score a goal!\n";
		cout << "You need to type:\n";
		cout << "FL-A-FR\n";
		cout << "this means Foward Left will Assist ball to Forward Right.\n";
		cout << "and next step would be:\n";
		cout << "FR-S-L\n";
		cout << "Means once after gettting the ball Forward right will Shoot the ball to the left side of the goal post.\n";
		
		cout << "Are to ready to Start ?\n";
		cout << "Press Y for yes and N for N.\n";
		cin >> ready;
	}
	cout << endl;
	cout << endl;
	cout << "Your opponent: FCB BARCELONA. \n";
	cout << "You have to finish the game in 50 steps !\n";
	cout << "you have to kick off ! All the best !\n";
	cout << "Game has begun and Ball is with your forward FL\n";
	while (step != 50)
	{
		cout << "Player:";
		cin >> input1;
		cout << endl;
		cout << "Skill: ";
		cin >> input2;
		cout << endl;
		cout << "to (Direction / Player): ";
		cin >> input3;
		cout << endl;
		
		step++;
	}
	system("PAUSE");
}
