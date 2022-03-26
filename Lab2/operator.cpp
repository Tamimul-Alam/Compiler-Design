#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int flag=1;
   for (int i=0;i<s.length();i++)
   {
      if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='=')
      {
         cout<<"operator"<<flag<<":"<<s[i]<<endl;
         flag++;
      }
   }


}
