#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int num_1,num_2;
    int t;
    cin>>t;
    while(t--){
        cin>>num_1>>num_2;
        if(num_1>num_2)
            cout<<">"<<endl;
        else if(num_1<num_2)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }
    return 0;
}
