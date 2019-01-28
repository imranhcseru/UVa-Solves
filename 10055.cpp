#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int h_sol,o_sol,result;
    while(scanf("%lld %lld",&h_sol,&o_sol) != EOF){
        if(h_sol>=o_sol)
            result = h_sol-o_sol;
        else
            result = o_sol-h_sol;

        cout<<result<<endl;
    }
    return 0;
}
