#include<iostream>
#include<string>
using namespace std;

class person{

    private:
      int id;
      int age;
      string name;
      string gender;
    public:
      person();
      void ShowData();
      int getid();
      void setname(string name);
      void setage(int age);
      void setgender(char gender);

};

class member : public person{
    private:
      float weight;
      float height;
      string goal;
      string email;
    public:
    void ShowData(); 
    void setemail(string email);
    void setweight(float weight);
    void setheight(float height);
    void setgoal(string goal);

};

class trainer : public person{
    private:
      string expertise;
    public:
      void ShowData(); 
      void setexpertise(string expertise);

};

class equipment{
    private:
      string name;
      string difficult_level;
    public:
      void ShowData(); 
      void setname(string name);
      void setdifficult_level(string difficult_level);
      string getname();

};

class exercises{
    private:
      string name;
      float time;
    public:
      void ShowData(); 
      void setname(string name);
      void settime(float time); 
      string getname(); 
};

class gym{
private:
  member mem[100];
  trainer train[100];
  int memcount;
  int traincount;
  equipment equip[50];
  exercises exer[60];
  int equipcount;
  int exercount;

public:
  gym();
  void add_member();
  void remove_member(int id);
  void add_trainer();
  void remove_trainer(int id);
  void show_members();
  void show_trainer();
  void add_equipment();
  void remove_equipment(string name);
  void add_exercises();
  void remove_exercises(string name);
  void show_equipment();
  void show_exercises();

};

