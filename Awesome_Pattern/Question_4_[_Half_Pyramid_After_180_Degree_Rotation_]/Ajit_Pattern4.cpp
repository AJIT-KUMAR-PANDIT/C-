#include <iostream>
using namespace std;

int main(){

  int row;// initialization of variable

   cout << "ENTER THE NO. OF [ ROW ] : " << '\n';
   cin>>row;


 cout <<"------------[ PATTERN ]---------"<<"\n\n";

  for (int i = 0; i < row; i++) {
    /* code */
    for (int j = 0; j < row; j++) {
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
