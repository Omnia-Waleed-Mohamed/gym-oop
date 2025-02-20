#include "gym.h"
 #include<cstdlib>
using namespace std;
/// person //////////
void person::ShowData()
{
    cout<<"The name is : "<<name<<"\n";
    cout<<"The ID is : "<<id<<"\n";
    cout<<"The age is : "<<age<<"\n";
    cout<<"The gendsr is : "<<gender<<"\n";

}

person::person(){
    id=(rand()%100)+1;
}

void person::setname(string name)
{
    this->name=name;
}

void person::setage(int age)
{
    this->age=age;
}

void person::setgender(char gender)
{
    this->gender=gender;
}

int person::getid()
{
    return id;
}


/// member //////////
void member::ShowData()
{
    person::ShowData();
    cout<<"Weight = "<<weight<<"\n";
    cout<<"Height = "<<height<<"\n";
    cout<<"The goal : "<<goal<<"\n";
    cout<<"Email : "<<email<<"\n";
}

void member::setemail(string email)
{
    this->email=email;
} 

void member::setgoal(string goal)
{
    this->goal=goal;
}

void member::setheight(float height)
{
    this->height=height;
}

void member::setweight(float weight)
{
    this->weight=weight;
}


/// trainer //////////
void trainer::ShowData()
{
    person::ShowData();
    cout<<"The expertise is : "<<expertise<<"\n";
}

void trainer::setexpertise(string expertise)
{
    this->expertise=expertise;
}


/// equipment //////////
void equipment::ShowData()
{
    cout<<"Name of the sports tool : "<<name<<"\n";
    cout<<"difficult_level : "<<difficult_level<<"\n";
}

void equipment::setname(string name)
{
    this->name=name;
}

void equipment::setdifficult_level(string difficult_level)
{
    this->difficult_level=difficult_level;
}

string equipment::getname()
{
    return name;
}

/// exercises //////////
void exercises::ShowData()
{
    cout<<"Training name : "<<name<<"\n";
    cout<<"Training time : "<<time<<"\n";
}

void exercises::setname(string name)
{
    this->name=name;
}

void exercises::settime(float time)
{
    this->time=time;
}

string exercises::getname()
{
    return name;
}

/// gym //////////
gym::gym()
{
    memcount=0;
    traincount=0;
    equipcount=0;
    exercount=0;

}

void gym::add_member()
{
    if(memcount==100){
        cout<<"sorry :( The gym is full"<<endl;
        return;
    }
    string name, email, goal;
    int age;
    float weight , hieght;
    char gender;
    cout<<"Enter Member Name: ";
     cin>>name;
     cout<<"Enter Member Age: ";
     cin>>age;
     cout<<"Enter Member gender: ";
     cin>>gender;
     cout<<"Enter Member Email: ";
     cin>>email;
     cout<<"Enter Member weight: ";
     cin>>weight;
     cout<<"Enter Member height: ";
     cin>>hieght;
     cout<<"Enter Member goal: ";
     cin>>goal;
     mem[memcount].setname(name);
     mem[memcount].setage(age);
     mem[memcount].setgender(gender);
     mem[memcount].setemail(email);
     mem[memcount].setweight(weight);
     mem[memcount].setheight(hieght);
     mem[memcount].setgoal(goal);
     memcount++;

}

void gym::add_trainer()
{
    string name,expertise;
    int age;
    char gender;
    cout<<"Enter trainer Name: ";
     cin>>name;
     cout<<"Enter trainer Age: ";
     cin>>age;
     cout<<"Enter trainer gender: ";
     cin>>gender;
     cout<<"Enter trainer expertise: ";
     cin>>expertise;
     train[traincount].setname(name);
     train[traincount].setage(age);
     train[traincount].setgender(gender);
     train[traincount].setexpertise(expertise);
     traincount++;

}

void gym::add_equipment()
{
    string name,level;
    cout<<"Enter equipment Name: ";
     cin>>name;
     cout<<"Enter equipment difficulty level: ";
     cin>>level;
     equip[equipcount].setname(name);
     equip[equipcount].setdifficult_level(level);
     equipcount++;

}

void gym::add_exercises()
{
    string name;
    int time;
    cout<<"Enter exercise Name: ";
     cin>>name;
     cout<<"Enter exercise time: ";
     cin>>time;
     exer[exercount].setname(name);
     exer[exercount].settime(time);
     exercount++;

}

void gym::show_members()
{
    for(int i=0; i<memcount ;i++ ){
        mem[i].ShowData();
        cout<<"---------------------------------\n";
    }

}

void gym::show_trainer()
{
    for(int i=0; i<traincount ;i++ ){
        train[i].ShowData();
        cout<<"---------------------------------\n";
    }

}

void gym::show_equipment()
{
    for(int i=0; i<equipcount ;i++ ){
        equip[i].ShowData();
        cout<<"---------------------------------\n";
    }

}

void gym::show_exercises()
{
    for(int i=0; i<exercount ;i++ ){
        exer[i].ShowData();
        cout<<"---------------------------------\n";
    }

}

void gym::remove_member(int id){
    int memindex=-1;
    for(int i=0;i<memcount;i++){
        if(mem[i].getid()==id){
            mem[i].ShowData();
            memindex=i;
        }
    }
    if(memindex==-1){
        return;
    }
    for(int i=memindex ;i<memcount ;i++){
        mem[i]=mem[i+1];
    }
    cout<<"\nThis member is removed \n";
    memcount--;
}

void gym::remove_trainer(int id){
    int trainindex=-1;
    for(int i=0;i<traincount;i++){
        if(train[i].getid()==id){
            train[i].ShowData();
            trainindex=i;
        }
    }
    if(trainindex==-1){
        return;
    }
    for(int i=trainindex ;i<traincount ;i++){
        train[i]=train[i+1];
    }
    cout<<"\nThis trainer is removed \n";
    traincount--;
}

void gym::remove_equipment(string name){
    int equipindex=-1;
    for(int i=0;i<equipcount;i++){
        if(equip[i].getname()==name){
            equip[i].ShowData();
            equipindex=i;
        }
    }
    if(equipindex==-1){
        return;
    }
    for(int i=equipindex ;i<equipcount ;i++){
        train[i]=train[i+1];
    }
    cout<<"\nThis equipment is removed \n";
    equipcount--;
}

void gym::remove_exercises(string name){
    int exerindex=-1;
    for(int i=0;i<exercount;i++){
        if(exer[i].getname()==name){
           exer[i].ShowData();
            exerindex=i;
        }
    }
    if(exerindex==-1){
        return;
    }
    for(int i=exerindex ;i<exercount ;i++){
        exer[i]=exer[i+1];
    }
    cout<<"\nThis exercise is removed \n";
    exercount--;
}



