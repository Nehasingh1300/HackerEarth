#include<iostream>
using namespace std;

int main(){
    int t;//test cases
    cin>>t;
    while(t--){
        int num; //seat number
        cin>>num;
        for(int i=0; i<num; i++){
            
            //for 1 and 1 + 12
            if(num==1 ||num==13 ||num==25 ||num==37 ||num==49 ||num==61 ||num==73 ||num==85 ||num==97 ){
                num+=11;
                cout<<num<<" "<<"WS\n";
                break;
            }
            
            //for 12 and more
            if(num%12==0 && num<109 ){
                num-=11;
                cout<<num<<" "<<"WS\n";
                break;
            }
            
            //for 2 and more
            if(num==2 ||num==14 ||num==26 ||num==38 ||num==50 ||num==62 ||num==74 ||num==86 ||num==98 ){
                num+=9;
                cout<<num<<" "<<"MS\n";
                break;
            }
            
            //for 11 and more
            if(num==11 ||num==23 ||num==35 ||num==47 ||num==59 ||num==71 ||num==83 ||num==95 ||num==107 ){
                num-=9;
                cout<<num<<" "<<"MS\n";
                break;
            }
            
            //for 3 and more
            if(num==3 ||num==15 ||num==27 ||num==39 ||num==51 ||num==63 ||num==75 ||num==87 ||num==99 ){
                num+=7;
                cout<<num<<" "<<"AS\n";
                break;
            }
            
            //for 10 and more
            if(num==10 ||num==22 ||num==34 ||num==46 ||num==58 ||num==70 ||num==82 ||num==94 ||num==106 ){
                num-=7;
                cout<<num<<" "<<"AS\n";
                break;
            }
            
            //for 4 and more
            if(num==4 ||num==16 ||num==28 ||num==40 ||num==52 ||num==64 ||num==76 ||num==88 ||num==100 ){
                num+=5;
                cout<<num<<" "<<"AS\n";
                break;
            }
            
            //9 and more
            if(num==9 ||num==21 ||num==33 ||num==45 ||num==57 ||num==69 ||num==81 ||num==93 ||num==105 ){
                num-=5;
                cout<<num<<" "<<"AS\n";
                break;
            }
            
            //5 and more
            if(num==5 ||num==17 ||num==29 ||num==41 ||num==53 ||num==65 ||num==77 ||num==89 ||num==101 ){
                num+=3;
                cout<<num<<" "<<"MS\n";
                break;
            }
            
            //8 and more
            if(num==8 ||num==20 ||num==32 ||num==44 ||num==56 ||num==68 ||num==80 ||num==92 ||num==104 ){
                num-=3;
                cout<<num<<" "<<"MS\n";
                break;
            }
            
            //6 and more
            if(num==6 ||num==18 ||num==30 ||num==42 ||num==54 ||num==66 ||num==78 ||num==90 ||num==102 ){
                num+=1;
                cout<<num<<" "<<"WS\n";
                break;
            }
            
            //7 and more
            if(num==7 ||num==19 ||num==31 ||num==43 ||num==55 ||num==67 ||num==79 ||num==91 ||num==103 ){
                num-=1;
                cout<<num<<" "<<"WS\n";
                break;
            }
            
            
            
        }
    }
    return 0;
}
