#include<iostream>
using namespace std;
int main(){
    int r1,r2,r3,r4,t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>r1>>r2>>r3>>r4;
        if(r1==0 && r2==0 && r3==0 && r4==0){
            cout<<"IN"<<endl;
        }else{
            cout<<"OUT"<<endl;
        }
    }
}
