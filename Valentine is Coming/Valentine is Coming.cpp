#include<iostream>
using namespace std;
int main(){
    int x,y,t;
    cin>>t;
    for(int i=0; i<t; i++){
            cin>>x>>y;
        if(x<y){
            cout<<"0"<<endl;

        }else{
            cout<<x/y<<endl;
        }
    }
}
