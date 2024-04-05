#include "Person.h"
#include<iostream>
#include<string>
PersonList deepCopyPersonList(PersonList pl){
    PersonList npl;
    npl.numPeople= pl.numPeople;
    npl.people= new Person[pl.numPeople];
    for (int i=0;i<pl.numPeople;i++){
        npl.people[i].age=pl.people[i].age;
        npl.people[i].name=pl.people[i].name;
    }



    return npl;
}