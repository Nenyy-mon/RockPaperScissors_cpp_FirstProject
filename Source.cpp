#include <iostream>
#include <string>

using namespace std;


int choice;
string getChoice(int choice);
string getComputerChoice();
string getUserChoice();
string theWinner();



int main() {
	cout << "********** ROCK PAPER SCISSORS **********" << endl;

	theWinner();

	return 0;
}




string getChoice(int choice) {
	switch (choice)
	{
	case 1:
		return "Rock";
		break;
	case 2:
		return "Paper";
		break;
	case 3:
		return "Scissors";
		break;
	default:
		return "Invalid number";
		break;
	}
}

string getComputerChoice() {
	int range;
	string computerChoice;
	range = 1 + rand() % 3;
	computerChoice = getChoice(range);
	cout << "Computer has chosen: " << computerChoice << endl;
	return computerChoice;
}

string getUserChoice() {
	int choice;
	string userChoice;
	cout << "Enter the number to chose options from  1 of 3 : " << endl;
	cout << "1. Rock" << endl;
	cout << "2. Paper" << endl;
	cout << "3. Scissors" << endl;
	cin >> choice;
	userChoice = getChoice(choice);
	cout << "Your choice is :" << userChoice << endl;
	return userChoice;
}

string theWinner() {
	
	int userCount = 0;
	int computerCount = 0;
	while (userCount < 3 || computerCount < 3) {
		if (userCount == 3) {
			cout << "User has won the game! \n";
			return "End";
		}
		else if (computerCount == 3) {
			cout << "Computer has won the game! \n";
			return "End";
		}
		string choiceUser = getUserChoice();
		string choiceComputer = getComputerChoice();
		if (choiceUser == "Rock" && choiceComputer == "Rock") {
			cout << "It's a tie this one!" << endl;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		}

		else if (choiceUser == "Rock" && choiceComputer == "Paper") {
			cout << "Computer wins this round, paper beats the rock" << endl;
			computerCount += 1;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		}
		else if (choiceUser == "Rock" && choiceComputer == "Scissors") {
			cout << "User wins this round, rock beats the scissors" << endl;
			userCount += 1;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		} 
		else if (choiceUser == "Paper" && choiceComputer == "Rock") {
			cout << "User wins this round, paper beats the rock" << endl;
			userCount += 1;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		}
		else if (choiceUser == "Paper" && choiceComputer == "Paper") {
			cout << "It's a tie this one!" << endl;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		}
		else if (choiceUser == "Paper" && choiceComputer == "Scissors") {
			cout << "Computer wins this round, scissors beats the paper" << endl;
			computerCount += 1;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		}
		else if (choiceUser == "Scissors" && choiceComputer == "Rock") {
			cout << "Computer wins this round, rock beats the scissors" << endl;
			computerCount += 1;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		}
		else if (choiceUser == "Scissors" && choiceComputer == "Paper") {
			cout << "User wins this round, paper beats the scissors" << endl;
			userCount += 1;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		}
		else if (choiceUser == "Scissors" && choiceComputer == "Scissors") {
			cout << "It's a tie this one!" << endl;
			cout << userCount << " UserCount\n" << endl;
			cout << computerCount << " computerCount\n" << endl;
		}
	}
	
}