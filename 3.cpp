#include<iostream>
using namespace std;

string sym(int,string);

main(){
    int d;
    string s,m;
    cout<<"Enter day of birth:";
    cin>>d;
    cout<<"Enter month:";
    cin>>m;
    s = sym(d,m);
    cout<<"The symbol is:"<<s;
}
string sym(int d,string m){
    if((m =="january" && (d>=20 && d<=31)) ||( m=="february")&&(d>=1 && d<=18)){
            return("Aquarius");
        }
    
    else if((m =="february" && (d>=19 && d<=28)) || (m=="march") &&(d>=1 && d<=20)){
            return("Pisces");
    }
   else if((m =="march" &&(d>=21 && d<=31)) || (m=="april" &&(d>=1 && d<=19))){
            return("Aries");
    }
    else if((m =="april") && (d>=20 && d<=30) || (m=="may")&& (d>=1 && d<=20)){
            return("Taurus");
    }
    else if((m =="may" && (d>=21 && d<=31)) ||( m=="june" &&(d>=1 && d<=20))){
            return("Gemini");
    }
    else if((m =="june" && (d>=21 && d<=30)) ||( m=="july" &&(d>=1 && d<=22))){
            return("Cancer ");
    }
    else if((m =="august" && (d>=1 && d<=22)) ||( m=="july" &&(d>=23 && d<=31))){
            return("Leo");
    }
    else if((m =="august" && (d>=23 && d<=31)) ||( m=="september" &&(d>=1 && d<=22))){
            return("Virgo");
    }
    else if((m =="september" && (d>=23 && d<=30)) ||( m=="october" &&(d>=1 && d<=22))){
            return("Libra");
    }
    else if((m =="october" && (d>=23 && d<=31)) ||( m=="november" &&(d>=1 && d<=21))){
            return("Scorpio");
    }
    else if((m =="november" && (d>=22 && d<=30)) ||( m=="december" &&(d>=1 && d<=21))){
            return("Sagittarius");
    }
    else if((m =="december" && (d>=22 && d<=31)) ||( m=="january" &&(d>=1 && d<=19))){
            return("Capricorn");
    }
    else
        return("invalid");

}