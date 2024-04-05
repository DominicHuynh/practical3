#include "Person.h"
#include<iostream>
#include<string>
 PersonList shallowCopyPersonList(PersonList pl){
    PersonList npl;
    npl.numPeople=pl.numPeople;
    npl.people= new Person [pl.numPeople];
    npl.people= pl.people;


    return npl;
 }