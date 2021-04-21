#include <iostream>
using namespace std;

/* main */
int main() {
  /* code */
 int row,column;

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
