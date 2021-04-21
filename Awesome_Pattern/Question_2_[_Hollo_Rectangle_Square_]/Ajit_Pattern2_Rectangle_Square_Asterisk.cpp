#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

 int row,column;
  system("cls");

  cout << "ENTER THE NO. OF [ ROW ] : " << '\n';
  cin>>row;
  cout << "ENTER THE NO. OF [ COLUMN ] : " << '\n';
  cin>>column;

cout <<"------------[ PATTERN ]---------"<<"\n\n";

  for (int i = 0; i < column; i++) {
    cout << "* ";
  }
cout<<endl;
  for (int i = 0; i < row; i++) {
    /* code */
    for (int j = 0; j < column; j++) {
      /* code */
      if(j==0){
          cout << "* ";
      }
      else{
           if(j==column-1){
            cout << "* ";
           }
           else{
              cout << "  ";
           }
      }
   }
   cout << '\n';
  }

  for (int i = 0; i < column; i++) {
    cout << "* ";
  }

  return 0;
}
