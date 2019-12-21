#include<iostream>
using namespace std;

int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        int g,p;
        cin>>g>>p;
        int par;
        cin>>par;
        int gr[100],pr[100];
        for(int i=0; i<par; i++)
            cin>>gr[i]>>pr[i];
            
        int green=0,purple=0;
        for(int i=0; i<par; i++){
            if(gr[i]==1){
                ++green;
            }
            if(pr[i]==1){
                ++purple;
            }
        }
        if(green>purple){
            if(g>p){
                y=green*p;
                x=purple*g;
            }
            else{
                x=green*g;cout<<x;
                y=purple*p;cout<<y;
                
            }
        }
        else{
            if(g>p){
                y=purple*p;
                x=green*g;
            }
            else{
                x=purple*g;
                y=green*p;
            }
        }
        cout<<x+y<<endl;
        
    }
    
    return 0;
}
