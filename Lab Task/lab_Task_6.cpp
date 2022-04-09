#include<bits/stdc++.h>//a|b
using namespace std;

int main(){

          cout<<"Enter The Expression :";
          string s;
          cin>>s;
          cout<<endl;

          if(s.length()>0)
            {
                cout<<"The Expression is Invalid"<<endl;
            }
          else if(s[0]=='a' || s[0]=='b')
            {

                    cout<<"The Expression is Valid"<<endl;
            }
          else
          {
              cout<<"The Expression is Invalid"<<endl;
          }

          return 0;
}
