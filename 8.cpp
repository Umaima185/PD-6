#include<iostream>
#include<cmath>
#include<string>
using namespace std;

float play(string,int,int);

main(){
        string yeartype;
         int p,h,vbp;
         cout<<"Enter year type(leap or normal):";
         cin>> yeartype;
         cout<<"Enter holidays:";
         cin>>p;
         cout<<"Enter weekends spent at home:";
         cin>>h;

    vbp = play(yeartype,p,h);
    cout<<vbp;

}

float play(string yeartype,int p,int h){
    float day,ps;
    if(yeartype=="normal"){
            day= (48-h)*(3.0/4.0) + (h*2.0)/3.0;
    }
    else if(yeartype=="leap"){
            ps = (48-h)*(3.0/4.0) + (h*2.0)/3.0;
            day = ps + ps*0.15;
    }
    else{
        return 0;
    }
    return floor(day);
}