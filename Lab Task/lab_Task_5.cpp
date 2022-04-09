#include<bits/stdc++.h>//[^ab]
using namespace std;

int main(){

          cout<<"Enter The Expression :";
          string s;
          cin>>s;
          cout<<endl;
          int i = 0;


                    for( i =0; i<s.length(); i++){
                              if( s[i]=='a' || s[i]=='b' ){
                                        break;
                              }

                              else{continue;}
                    }


          if(i==s.length()){
                    cout<<"The Expression is Valid"<<endl;
          }
          else{cout<<"The Expression is Invalid"<<endl;}

          return 0;
}


