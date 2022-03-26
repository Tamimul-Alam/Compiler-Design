#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int flag=0;
   for (int i=0;i<s.length();i++)
   {
      if(s[i]>='A' && s[i]<='Z'|| s[i]>='a' && s[i]<='z'||s[i]=='@'||s[i]=='#'||s[i]=='$')
      {
         flag++;
      }
   }
   if(flag==0)
   {
       cout<<"Numeric";
   }
   else
   cout<<"Not Numeric";


}
