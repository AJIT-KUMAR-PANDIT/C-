#include "iostream"
using namespace std;

int main(){

  int row;// initialization of variable

   cout << "ENTER THE NO. OF [ ROW ] : " << '\n';
   cin>>row;


 cout <<"------------[ PATTERN ]---------"<<"\n\n";

  for (int i = 1; i <= row; i++) {
    /* code */
    for (int j = 1; j <= i; j++) {
      /* code */
      cout << i<<" ";
    }
    cout<<endl;
  }
  return 0;
}
