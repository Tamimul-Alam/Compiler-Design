#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    int n;
    cout<<"Give number of student: ";
    cin>>n;



    ofstream outputFile;

    outputFile.open("test.txt");


    for(int i = 0; i<n ; i++){
        string name;
        string marks;

        cin>>name>>marks;

        outputFile<<(i+1)<<"."<<name<<"                        "<<marks<<endl;
    }
    outputFile.close();

    ifstream inputFile;

    inputFile.open("test.txt");

    while(inputFile){
        string line;

        getline(inputFile,line);
        cout<<line<<endl;
    }

    inputFile.close();
    return 0;

}
