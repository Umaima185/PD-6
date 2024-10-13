#include<iostream>
using namespace std;

float price(string,string,float);

main(){
    float q,p;
    string fruit,day;
    cout<<"fruit to be bought:";
    cin>>fruit;
    cout<<"Day:";
    cin>>day;
    cout<<"Quantity:";
    cin>>q;
    p = price(fruit,day,q);
    cout<<"Price is"<<p;
}

float price(string fruit,string day,float q){
    float pr;
     if(fruit == "banana" && !(day=="Sunday"|| day == "Saturday")){
        pr = q * 2.70;
     }
     else if(fruit == "banana" && (day=="Sunday"|| day == "Saturday")){
        pr = q * 2.5;
}
    else if(fruit == "apple" && !(day=="Sunday"|| day == "Saturday")){
        pr = q * 1.20;
     }
     else if(fruit == "apple" && (day=="Sunday"|| day == "Saturday")){
        pr = q * 1.25;
}
    else if(fruit == "orange" && !(day=="Sunday"|| day == "Saturday")){
        pr = q * 0.85;
     }
    else if(fruit == "orange" && (day=="Sunday"|| day == "Saturday")){
        pr = q * 0.9;
}
    else if(fruit == "grapefruit" && !(day=="Sunday"|| day == "Saturday")){
        pr = q * 1.45;
     }
     else if(fruit == "grapefruit" && (day=="Sunday"|| day == "Saturday")){
        pr = q * 1.6;
}
    else if(fruit == "kiwi" && !(day=="Sunday"|| day == "Saturday")){
        pr = q * 2.70;
     }
     else if(fruit == "kiwi" && (day=="Sunday"|| day == "Saturday")){
        pr = q * 3.0;
}
    else if(fruit == "pineapple" && !(day=="Sunday"|| day == "Saturday")){
        pr = q * 5.50;
     }
     else if(fruit == "pineapple" && (day=="Sunday"|| day == "Saturday")){
        pr = q * 5.60;
}
    else if(fruit == "grapes" && !(day=="Sunday"|| day == "Saturday")){
        pr = q * 3.85;
    }
    else 
       cerr<<"Error";
 
 return pr;
}