#include <iostream>
using namespace std;

int main(){

  int row,count=1;// initialization of variable

   cout << "ENTER THE NO. OF [ ROW ] : " << '\n';
   cin>>row;


 cout <<"------------[ PATTERN ]---------"<<"\n\n";

 for (int i = 0; i < row; i++) {
   /* code */
   for (int j = 0; j <= i; j++) {
     /* code */
     cout<<count<<" ";
     count++;
   }
   cout<<endl;
 }
 return 0;
}
