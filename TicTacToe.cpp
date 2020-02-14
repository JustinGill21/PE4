#include <iostream>

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

int main()
{
  //this is our tic tac toe board. You already understand how to play.
  int myArray[3][3];

  PlaceMarker(myArray, 0, 0, 1);


  DisplayBoard(myArray);

  return 0;
}
