#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;

   for (int i=0;i<s.length();i++)
   {
      if(s[i]=='/'&&s[i+1]=='/')
      {
         cout<<"Single Line Comment";
      }
      else if(s[i]=='/'&&s[i+1]=='*'&&s[s.length()-1]=='/'&&s[s.length()-2]=='*')
      {
          cout<<"Multiple Line Comment";
      }
   }


}
