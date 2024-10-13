#include<iostream>
using namespace std;

float avg(int,int,int,int,int,float);
string grade(float);

main(){
    int e,b,m,s,c,a;
    float avg;
    string g;
    cout<<"Enter Maths marks:";
    cin>>m;
    cout<<"Enter English marks:";
    cin>>e;
    cout<<"Enter Biology marks:";
    cin>>b;
    cout<<"Enter Social-Sciences marks:";
    cin>>s;
    cout<<"Enter Cheavgistry marks:";
    cin>>c;
    g = grade(avg);
    cout<<"Average is: "<<a;
}

float avg(int e,int b,int s,int c,int m,float avg){
    float avg = (e+b+s+c+m)/5;
    grade(avg);

}
string grade(float avg){
   if(avg>=90 && avg <=100){
    return ("A+");
   }
   else if(avg>=80 && avg <90){
    return ("A");
   }
   else if(avg>=70 && avg <80){
    return ("B+");
   }
   else if(avg>=60 && avg <70){
    return ("B");
   }
   else if(avg>=50 && avg <60){
    return ("C");
   }
   if(avg>=40 && avg <50){
    return ("D");
   }
   else{
    return ("F");
   }
}
