#include<iostream>
using namespace std;

string game(string,string);

main(){
    string temp,humd,c;
    cout<<"Enter Temperature(warm or cold):";
    cin>>temp;
    cout<<"Enter humidity(dry or humid):";
    cin>>humd;
    c = game(temp,humd);
    cout<<"Recommended activity:"<<c;
}

string game(string temp,string humd){
    if(temp == "warm"){
        if(humd == "dry"){
            return ("Play tennis");
        }
        else if(humd == "humid"){
            return("Swim");
        }
        else
            return ("invalid input");
    }
    if(temp == "cold"){
        if(humd == "dry"){
            return ("Play basketball");
        }
        else if(humd == "humid"){
            return("Watch TV");
        }
        else
            return ("invalid input");
    }
}