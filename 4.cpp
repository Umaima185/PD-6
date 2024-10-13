#include<iostream>
using namespace std;

float amount(char,char,int);
string service(char);
string time(char);


main(){
    char sc,t;
    int m;
    float a;
    string s,time;
    cout<<"Enter the service code(r/R for regular or p/P for premium):";
    cin>>sc;
    cout<<"Enter the time of call(n/N for night or d/D for day):";
    cin>>t;
    cout<<"Enter the minutes:";
    cin>>m;
    s = service(sc);
    cout<<"Service type:"<<s;
    time = service(t);
    cout<<"Service type:"<<t;
    a = amount(t,sc,m);
    cout<<"Amount due:"<<a;

}

string service(char sc){
    if(sc=='p'|| sc=='P')
        return("Premium");
    else if(sc=='r'||sc=='R')
        return("Regular");
    else
        return("error");
}
string time(char t){
    if(t=='n'|| t=='N')
        return("Night");
    else if(t=='d'||t=='D')
        return("Day");
    else
        return("error");
}

float amount(char t,char sc,int m){
    float a;
    if((sc=='p'|| sc=='P')&& (t=='n'|| t=='N')){
        if(m<=100){
            a= (m-100)*0.05 + 25;
        }
        else
            a=25;
    }
    else if((sc=='p'|| sc=='P')&& (t=='d'|| t=='D')){
        if(m<=75){
            a= (m-75)*0.1 + 25;
        }
        else
            a=25;
    }
    else if(sc=='r'|| sc=='R'){
        if(m<=50){
            a= (m-50)*0.2 + 10;
        }
        else
            a=10;
    }
    return a;
}