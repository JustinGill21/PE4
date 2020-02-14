#include <iostream>
#include <string.h>

using namespace std;

void DisplayBoard(int myarr[3][3])
{
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(myarr[i][j] == 1){
        cout << "X" << " ";
      }
      else if(myarr[i][j] == 0){
        cout << " " << " ";
      }
      else{
        cout << "O" << " ";
      }
    }
    cout << endl;
  }
}

void PlaceMarker(int myarr[3][3], int row, int col, int marker)
{
  myarr[row][col] = marker;
}

void GetPlayerChoice(int* col, int* row) {
  cout << "Select column:";
  cin >> *col;
  cout << "Select row:";
  cin >> *row;
}
\
int main()
{

  cout << "No lines for borders are drawn, you're a big boy and know where things are." << endl;
  cout << "Please use zero based indexing." << endl;
  cout << "X goes first. Have fun!" << endl;

  // Set all values in array to 
  int myArray[3][3];
  memset(myArray, 0, sizeof(myArray));
  
  for (int i = 0; i < 9; i++)
  {
    DisplayBoard(myArray);

    int row;
    int col;
    GetPlayerChoice(&col, &row);

    // `? :` statement determines if x or o.
    PlaceMarker(myArray, row, col, i%2 == 0 ? 1 : -1);
  }
  return 0;
}