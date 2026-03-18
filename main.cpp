#include<bits/stdc++.h>
using namespace std;

#include "hero.cpp"

int main(){
    //class ka object
    //static declaration
    Hero h1(0);
    h1.name="Aditi";
    h1.setHealth(100);
    h1.setLevel('A');
    int h1_health=h1.getHealth();
    char h1_level=h1.getLevel();


    //dynamic allocation

    Hero *h2=new Hero(0);
    (*h2).name="Nimmi";
    (*h2).setHealth(101);
    (*h2).setLevel('A');
    h2->setLevel('A');
    int h2_health=h2->getHealth();
    int h2_level=h2->getLevel();

    Hero h3(h1); // copy constructor h3=h1
    //copy constructor is in built
    

    return 0;
}