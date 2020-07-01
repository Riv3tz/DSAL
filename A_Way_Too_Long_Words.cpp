#include <bits/stdc++.h>
using namespace std;
int main(){
    int a; cin>>a;
    int i;
    for(i = 0; i<a; i++){
        string q;
        int flag = 0;
        cin>>q;
        if (q.length()>10){
        cout<<q[0]<<q.length()-2<<q[q.length()-1];
        flag=1;
        }
        if(flag==0) cout<<q;
        flag=0;
        cout<<endl;
    }
}