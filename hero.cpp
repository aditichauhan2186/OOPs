#include<bits/stdc++.h>
using namespace std;
class Hero{
    //properties of hero
     private:
    int health;
    char level;

    public:
    string name;
   
    //parameterised constructor

    Hero(int health){
        // health = health  yahan par due to local scoping 
        // this stmt is like x=x
        //yeilds no result 
        //use of this pointer which points to the memory location of the object being called
        this->health=health;
    }
    
    void print(){
        cout<<"Name : "<<name;
        cout<<"Health : "<<health;
        cout<<"Level : "<<level;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int x){
        health=x;
    }
    void setLevel(char ch){
        level=ch;
    }

};