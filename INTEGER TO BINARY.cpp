 #include <iostream>
#include<deque>
#include <queue>
using namespace std;

int main()
{
    cout<<"ENTER AN INTEGER TO CONVERT TO BINARY:";
int x;
deque <int> s;
deque<int>::iterator it;


    cin>>x;


s.push_back(x);

   // cout<<x<<" ";
    do{
        if(x%2==0){
            x=x/2;
s.push_back(x);
        }
         else {
        x = (x-1)/2;
s.push_back(x);
    }


      //   cout<<x<<" "<<endl;



    }while(x!=1);
   cout<<"YOUR VALUE IN BINARY FOR THE INPUT IS "<<endl;
for (int i =s.size()-1;i>=0;i--)

               cout<<s[i]%2<<" ";
}
