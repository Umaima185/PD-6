#include<iostream>
#include<string>
using namespace std;

string apar(string,int);
string stdo(string,int);

main(){
    int day;
    string month;
    string apartment,studio;
    cout<<"Enter days of stay:";
    cin>>day;
    cout<<"Enter the month of stay:";
    cin>>month;
    apartment = apar(month,day);
    studio = stdo(month,day);
    cout<<apartment<<endl;
    cout<<studio;
    
}

string apar(string month,int day){
    float p;
    string a;
    if((month == "may" || month == "october")&& (day>=14 && day <=31)){
        p = 65*day - (65*day/10);
    }
    else if((month == "may" || month == "october")&& (day<14 && day >0)){
        p = 65*day;
    }
    else if((month == "june" || month == "september")&& (day>=14 && day <31)){
        p = 68.7*day - (68.7*day/10);
    }
    else if((month == "june" || month == "september") && (day<14 && day>0)){
        p = 68.7*day;
    }
    else if((month == "july" || month == "august")&& (day>=14 && day <=31)){
        p = 77*day - (77*day/10);
    }
    else if((month == "july" || month == "august") && (day<14 && day >0)){
        p = 77*day;
    }
    else
        cerr<<"invalid month";

a = "Apartment:" +to_string(p)+"$";
return a;

}

string stdo(string month,int day){
    float q;
    string s;
    if((month == "may" || month == "october")&& (day<=7 && day >0)){
        q = 50*day;
    }
    else if((month == "may" || month == "october")&& (day>7 && day <=14)){
        q = 50*day - (50*day/20);
    }
    else if((month == "may" || month == "october")&& (day>=14 && day<=31)){
        q = 50*day - (50*day*30/100);
    }
    else if((month == "june" || month == "september")&& (day>=14 && day <31)){
        q = 75.20*day - (75.20*day*20/100);
    }
    else if((month == "june" || month == "september")&& (day<14)){
        q = 75.20*day;
    }
    else if(month == "july" || month == "august"){
        q = 76*day ;
    }
    else
        cerr<<"invalid month";

s = "Studio:" + to_string(q)+"$";
return s;

}

