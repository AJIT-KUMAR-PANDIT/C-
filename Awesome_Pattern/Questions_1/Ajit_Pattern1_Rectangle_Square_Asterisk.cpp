#include <iostream>
#include <stdlib.h>
using namespace std;

/* main */
int main() {
  /* code */
 int row,column;
 system("cls");
    cout << "ENTER THE NO. OF [ ROW ] : " << '\n';
    cin>>row;
    cout << "ENTER THE NO. OF [ COLUMN ] : " << '\n';
    cin>>column;

cout <<"------------[ PATTERN ]---------"<<"\n\n";

    for (int i = 0; i < row; i++) {
      /* code */
      for (int j=0; j<= column; j++)
      {
        cout << "* ";
      }
     cout << '\n';
    }

  return 0;
}
