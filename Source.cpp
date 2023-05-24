#include <iostream>
#include <conio.h>
using namespace std;
char grid[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char matrix[3][3] = { '0' };
#define first 'X'
#define second 'O'

void print();
bool next(char turn);
char check();

int main() {
	int n=0;
	while(1) {
		if (!next(first))
	       (next(first));
		n++;
		if (!(check() == 'a')) {
			cout << "\n\n---------------------------------------\n";
			print();
			cout << endl << check() << " WiNs...!!!";
			break;
		}
		if (check() == 'a' && n == 9) {
			cout << "\n\n---------------------------------------\n";
			print();
			cout << "It'S A dRaW bItCH...!!!!";
			break;
		}
		if (!next(second))
	    	next(second);
		n++;
		if (!(check() == 'a')) {
			cout << "\n\n---------------------------------------\n";
			print();
			cout <<endl<< check() << " WiNs..!!!!";
			break;
		}
		
		if (check() == 'a' && n == 9) {
			cout << "\n\n---------------------------------------\n";
			print();
			cout << "It'S A dRaW bItCH...!!!!";
			break;
		}
}

	_getch();
}

void print() {

	system("cls");
	cout << " Anda Chokdi" << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}

	cout << "  -----------\n";
	for (int i = 0; i < 3; ++i)
	{
		cout << " | ";
		for (int y = 0; y < 3; ++y)
		{
			if(grid[i][y]==first|| grid[i][y]==second)
			cout << grid[i][y] << " | ";
			else
			cout <<"*"<< " | ";

		}

		cout << "\n  -----------\n";
	}
}
bool next(char turn)
{
	print();
	int x;
	cout << "Enter the number for input("<<turn<<"): " << endl;
	cin >> x;

	if (x == 1 && grid[0][0] == '1') {
		grid[0][0] = turn;
	}
	else if (x == 2 && grid[0][1] == '2') {
		grid[0][1] = turn;
	}
	else if (x == 3 && grid[0][2] == '3') {
		grid[0][2] = turn;
	}
	else if (x == 4 && grid[1][0] == '4') {
		grid[1][0] = turn;
	}
	else if (x == 5 && grid[1][1] == '5') {
		grid[1][1] = turn;
	}
	else if (x == 6 && grid[1][2] == '6') {
		grid[1][2] = turn;
	}
	else if (x == 7 && grid[2][0] == '7') {
		grid[2][0] = turn;
	}
	else if (x == 8 && grid[2][1] == '8') {
		grid[2][1] = turn;
	}
	else if (x == 9 && grid[2][2] == '9') {
		grid[2][2] = turn;
	}
	else {
		cout << "Field is taken!" << endl;
		return 0;
	}
	return 1;
}
char check() {


			if ((grid[0][0]) == (grid[0][1]) && (grid[0][0]) == (grid[0][2]))
				return grid[0][0];
			else if ((grid[0][0]) == (grid[1][0]) && (grid[1][0]) == (grid[2][0])) {
				return grid[0][0];
			}
			else if ((grid[0][0]) == (grid[1][1]) && (grid[1][1]) == (grid[2][2])) {
				return grid[0][0];
			}
			else if ((grid[0][2]) == (grid[1][1]) && (grid[1][1]) == (grid[2][0])) {
				return grid[0][2];
			}
			else if ((grid[1][0]) == (grid[1][1]) && (grid[1][1]) == (grid[1][2])) {
				return grid[1][2];
			}
			else if ((grid[0][1]) == (grid[1][1]) && (grid[1][1]) == (grid[2][1])) {
				return grid[0][1];
			}
			else if ((grid[2][0]) == (grid[2][1]) && (grid[2][1]) == (grid[2][2])) {
				return grid[2][0];
			}
			else if ((grid[0][2]) == (grid[1][2]) && (grid[1][2]) == (grid[2][2])) {
				return grid[0][2];
			}
			else
				
			

	return 'a';
}
