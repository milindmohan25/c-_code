#include<bits\stdc++.h>
using namespace std;
int main() {
 int raw, col;
    cin>>raw>>col;
    for (int i = 1; i <= raw; i++){
        for (int j = 0; j <= col; j++)
        {
            if (i==1||i==raw)
            {
                cout<<"*";
            }
            else if(j==1||j==col){
                cout<<"*";
         
           }
           else{cout<<" "; }
        }
        cout<<endl;
    }
}
