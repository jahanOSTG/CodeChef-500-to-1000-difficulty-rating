#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a%b==0){
            if((a/b)%2==0){
                cout<<"YES"<<endl;
            }else{
            cout<<"NO"<<endl;
        }
     }else{
            cout<<"NO"<<endl;
    }
}
}
