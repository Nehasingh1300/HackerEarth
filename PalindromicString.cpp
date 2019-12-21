#include<string.h>
#include<iostream>
using namespace std;

int main(){
    char s[100000],s1[100000];
    int c=0;
    cin>>s;
    int l=strlen(s);
    int n=0;
    for(int i=l-1; i>=0; i--){
        s1[n]=s[i];
        n++;
    }
    
    for(int k=0; k<l; k++){
        if(s1[k]==s[k]){
            c++;
        }
        else
            c--;
    }
    if(c==l){
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
