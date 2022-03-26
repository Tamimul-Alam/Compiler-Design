#include<bits/stdc++.h>

using namespace std;

const  string keywords[10] = {"break","char","double","else","float","for","if","int","void","while"};
const  char operators[] = {'+', '-', '*', '/', '%', '='};


void check(string word){
    int flag1 = 0;
    for(int i = 0 ; i<10 ; i++){
        if(keywords[i] == word){
            flag1 = 1;
            break;
        }
    }

    if(flag1) cout<<word<<" is a keyword"<<endl;
    else{
        int flag2 = 0;

        for(int i = 0 ;i<6 ; i++){
            string str;
            str += operators[i];
            if(str == word){
                flag2 = 1;
                break;
            }else{
                flag2 = 0;
            }

        }
        cout<<endl;
        if(flag2) cout<<word<<" is a operator"<<endl;
        else cout<<word<<" is not a keyword"<<endl;

    }


}


int main(){

// input begin
    ifstream inputFile;
    string line = "";

    inputFile.open("program");

    while(inputFile){

        string temp;
        getline(inputFile,temp);
        line += temp+" ";


    }

    inputFile.close();

// input end


   stringstream ss(line);

   string word;

   while(ss >> word){
    // check for keyword & operators
      check(word);

   }


    return 0;
}




