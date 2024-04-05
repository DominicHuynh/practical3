#include "Person.h"
#include<iostream>
#include<string>
extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);
int main(){
    PersonList pl=createPersonList(5);
    PersonList npl= deepCopyPersonList(pl);
     cout<<"The name and age is:  "<<endl;
    for (int i=0; i<5; i++){
        cout<< npl.people[i].name << " "<< npl.people[i].age<<endl;
    }


    return 0;
}
