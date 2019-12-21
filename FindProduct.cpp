#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int long answer=1;
    int num,arr[1000];
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>arr[i];
        cout<<" ";
    }
    int m = pow(10,9) + 7;
    for(int k=0; k<num; k++){
        
        answer = (answer * arr[k]) % m;
    }
    
    cout<<answer;
    return 0;
}
