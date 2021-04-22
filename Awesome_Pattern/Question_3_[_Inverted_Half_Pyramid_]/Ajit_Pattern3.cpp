#include<iostream>
using namespace std;

int main(){

 int row;// initialization of variable

  cout << "ENTER THE NO. OF [ ROW ] : " << '\n';
  cin>>row;

cout <<"------------[ PATTERN ]---------"<<"\n\n";

  for (int i = row; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      cout << "* ";
    }
  cout<<"\n";
  }

return 0;
}
