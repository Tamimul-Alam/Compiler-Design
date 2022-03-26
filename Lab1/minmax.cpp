#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];

    }
    cout<<"Maximum element: "<<*max_element(arr,arr+n)<<endl;
    cout<<"Minimum element: "<<*min_element(arr,arr+n)<<endl;

    return 0;
}

