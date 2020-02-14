#include <iostream>

using namespace std;

const int _boardSize = 3;

int main()
{


  return 0;
}

void DisplayBoard(int arr[_boardSize][_boardSize]) {
  for (int i = 0; i < _boardSize; i++)
  {
    for (int j = 0; j < _boardSize; j++)
    {
      string value;
      if (arr[i][j] == 1)
      {
        value = "X";
      }
      else if (arr[i][j] == -1)
      {
        value = "O";
      }
      else
      {
        value = " "
      }
      cout << value << " " << endl; 
    }
    cout << "\n";
  }
}