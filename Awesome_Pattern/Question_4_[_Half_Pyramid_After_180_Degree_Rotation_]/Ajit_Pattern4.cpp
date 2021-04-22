#include <iostream>
using namespace std;

int main(){

  int row,column;// initialization of variable

   cout << "ENTER THE NO. OF [ ROW ] : " << '\n';
   cin>>row;


 cout <<"------------[ PATTERN ]---------"<<"\n\n";

  for (int i = 1; i < row; i++) {
    /* code */
    for (int j = 1; j < row; j++) {
      /* code */
      if (j<=row-i) {
        /* code */
        cout << "  ";
      }else{
          cout << "* ";
      }
    }
    cout << "\n";
  }
return 0;
}
