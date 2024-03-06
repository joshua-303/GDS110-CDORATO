#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int randomNum(int x) {
	return rand() % x;
}

void initGrid(int arr[8][8]) {
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 8; c++) {
			arr[r][c] = 0;
		}
	}
}

void printGrid(int arr[8][8]) {
	for (int r = 0; r < 8; r++) {
		cout << "|";
		for (int c = 0; c < 8; c++) {
			cout << arr[r][c] << "|";
		}
		cout << endl;
	}
}

int main() {
	srand(time(NULL));

	int submarine[2] = {randomNum(8), randomNum(8)};
	int attempt = 0;
	int board[8][8];

	do {
		int guessXY[2];

		initGrid(board);
		printGrid(board);

		//cout << "SUBMARINE LOCATION: " << submarine[1] + 1 << ", " << submarine[0] + 1 << endl;
		cout << "You have " << 8 - attempt << " attempts to discover the location of the submarine in these waters. Good luck...\nA 5 indicates your selection. A 1 indicates that you have successfully located the submarine." << endl;
		input:
		cout << "Input an X coordinate: ";
		cin >> guessXY[1];

		cout << "Input a Y coordinate: ";
		cin >> guessXY[0];

		int avgDist = (abs(submarine[0] - guessXY[0]) +
			abs(submarine[1] - guessXY[1]) / 2);

		for (int c = 0; c < 2; c++) {
			if (guessXY[c] < 1 || guessXY[c] > 8 || cin.fail()) {
				cout << "Invalid input. Please input a value for each field from 1-8." << endl;
				system("pause");
				goto input;
			}
		}

		board[guessXY[0]-1][guessXY[1]-1] = 5;
		printGrid(board);
		system("pause");

		if (guessXY[0] - 1 == submarine[0] && guessXY[1] - 1 == submarine[1]) {
			break;
		}

        switch(avgDist) {
			case 0:
            	cout << "You're very hot, but no dice. Try again." << endl;
				break;

            case 1:
            	cout << "You're very hot, but no dice. Try again." << endl;
				break;
			
			case 2:
				cout << "You're getting there. Mild. Try again." << endl;
				break;

			 default:
				cout << "Way off! Cold. Try again!" << endl;
				break;
        }
		system("pause");
		system("cls");

		attempt++;
	} while (attempt != 8);

	board[submarine[0]][submarine[1]] = 1;
	printGrid(board);

	if (attempt == 8) {
		cout << "Looks like you couldn't find the submarine in time... You lose!" << endl;
	} else {
		cout << "You found it! Congrats!" << endl;
	}
	system("pause");

	return 0;
}