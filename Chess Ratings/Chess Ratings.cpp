#include <iostream>
using namespace std;

int main() {
    int t,a,b;


    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a>=b){
            cout<<0<<endl;
        }else{
            int dif=b-a;
            int x=(dif+7)/8;
            cout<<x<<endl;
        }




    }

}
