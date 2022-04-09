#include<bits/stdc++.h> //abc+
using namespace std;

int main(){

          cout<<"Enter The Expression : ";
          string s;
          cin>>s;
          cout<<endl;
          int i = 0;

          if(s[0]=='a' && s[1]=='b' && s[2]=='c'){
                    for( i =3; i<s.length(); i++){
                              if(s[i]=='c'){
                                        continue;
                              }
                              else if(s[i]==' '){
                                        continue;
                              }
                              else{break;}
                    }
          }

          if(i==s.length()){
                    cout<<"The Expression is Valid"<<endl;
          }
          else{cout<<"The Expression is Invalid"<<endl;}

          return 0;
}
