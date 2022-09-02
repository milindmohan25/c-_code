#include<bits/stdc++.h>
using namespace std;
int main(){
    int raw,col;
    cin>>raw>>col;
    for (int i=1;i<=raw;i--){
        for (int j = 1; j<(col+1)-raw; j++)
        {
            cout<<i<<"";
        }
        cout<<raw<<col<<endl;
    }
}