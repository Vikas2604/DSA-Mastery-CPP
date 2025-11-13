#include<iostream>
using namespace std;

void ships(){
  // Small game of Battleship:
  // 1 to indicate there is a ship
  bool ship[4][4]={
    {0, 1, 1, 0},
    {0, 0, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0}
  };
  // To keep track of hits and number of turns played
  int hits = 0;
  int numberOfTurns = 0;
  // Allow players to keep going until they've hit all 4 ships
  while(hits < 4){
    int row, column;
    cout << "Selecting coordinated...\n";
    cout << "Choose a row number between 0 and 3: ";
    cin >> row;
    cout << "Choose a column number between 0 and 3: ";
    cin >> column;
    // Check if the ship exists in those coordinates
    if(ship[row][column]){
      ship[row][column] = 0;
      hits++;
      cout << "Hit! " << (4 - hits) << " left.\n\n";
    }else{
      cout << "Miss, try again...\n";
    }
    numberOfTurns++;
  }

  cout << "Victory!\n";
  cout << "You won in " << numberOfTurns << " turns.";

}

int main(){
  ships();
  return 0;
}