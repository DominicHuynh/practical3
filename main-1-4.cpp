#include "Person.h"
#include<iostream>
#include<string>
extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);
extern  PersonList shallowCopyPersonList(PersonList pl);
int main(){
    PersonList l= createPersonList(5);
    PersonList pl= deepCopyPersonList(l);
    PersonList npl = shallowCopyPersonList(pl);
    cout << "The name and age is:" << endl;
    for (int i=0; i<5;i++){
        cout<<npl.people[i].name<<" "<< npl.people[i].age<<endl;
    }
    



    return 0;
}