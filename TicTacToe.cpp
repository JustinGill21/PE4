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

int main()
{
  int myArray[3][3];
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      myArray[i][j] = 0;
    }
  }

  DisplayBoard(myArray);

  return 0;
}

void GetPlayerChoice(int* col, int* row) {
  cout << "Select column:";
  cin >> *col;
  cout << "Select row:";
  cin >> *row;
}