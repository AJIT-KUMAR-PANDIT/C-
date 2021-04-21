#include<iostream>
using namespace std;

int main(){

 int row,column;

  cout << "ENTER THE NO. OF [ ROW ] : " << '\n';
  cin>>row;
  cout << "ENTER THE NO. OF [ COLUMN ] : " << '\n';
  cin>>column;

cout <<"------------[ PATTERN ]---------"<<"\n\n";

  for (int i = 0; i < row; i++) {
    /* code */
    for (int j = 0; j < column; j++) {
      /* code */
      if(i==0 || i==row-1){
        cout<<"* ";
      }
      else if(j==0 || j==column-1){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    }
   cout<<endl;
  }
return 0;
}
