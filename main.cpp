#include<iostream>
#include"gym.h"
using namespace std;

void magic_func()
{
     gym gym;
     
     
     int choice;
     do{
    cout<<"*----------- Welcome to our GEM ----------*"<<endl;
    cout<<"\n ------ system options ------"
          "\n1- press 1 to add a new Member."
          "\n2- press 2 to add a new Trainer."
          "\n3- press 3 to add a new Exercises. "
          "\n4- press 4 to add a new Equipment. "
          "\n5- press 5 to show data. "
          "\n6- press 6 to Delete. "
          "\n7- press 7 to Exit.  \n \n";
          
   cout<<"Please,enter your choice!"<<endl;
   cin>> choice;
   cout<<"\n*******************************"<<endl;
   
   switch(choice){
       case 1:
          gym.add_member();
          break;
       
       case 2:
          gym.add_trainer();
          break;
        
       case 3:
          gym.add_exercises();
          break;
          
       case 4:
          gym.add_equipment();
          break;
       
       case 5:
       {
           int To_show;
           cout<<"\n [please, Enter the number You want to show data about....."
                 "\n1-  Members."
                 "\n2-  Trainers."
                 "\n3-  Exercises."
                 "\n4-  Equipment. "
                 "\n5-  all the above. \n \n ";
            cin>>To_show; 
            
            if(To_show==1)
            {
                gym.show_members();
                break;
            }
            
           else if(To_show==2)
            {
                 gym.show_trainer();
                break;
            }
            
            else if(To_show==3)
            {
                gym.show_exercises();
                break;
            }
            
            else if(To_show==4)
            {
                gym.show_equipment();
                break;
            }
            
            else
            {
                gym.show_members();
                cout<<endl;
                cout<<"*******************************"<<endl;
                gym.show_trainer();
                cout<<endl;
                cout<<"*******************************"<<endl;
                gym.show_exercises();
                cout<<endl;
                cout<<"*******************************"<<endl;
                gym.show_equipment();
                
            }
            
       }
       case 6:
       {
           int To_delete;
           int id;
           string name;
           
           cout<<"\n [please, Enter the number You want to delet the data from....."
                 "\n1-  Members."
                 "\n2-  Trainers."
                 "\n3-  Exercises."
                 "\n4-  Equipment. "
                 "\n5-  all the above. \n \n ";
            cin>>To_delete; 
            
            if(To_delete==1)
            {
                gym.remove_member(id);
                break;
            }
            
           else if(To_delete==2)
            {
                 gym.remove_trainer(id);
                break;
            }
            
            else if(To_delete==3)
            {
                gym.remove_exercises(name);
                break;
            }
            
            else if(To_delete==4)
            {
                gym.remove_equipment(name);
                break;
            }
            
            else
            {
                gym.remove_member(id);
                cout<<endl;
                cout<<"*******************************"<<endl;
                gym.remove_trainer(id);
                cout<<endl;
                cout<<"*******************************"<<endl;
                gym.remove_exercises(name);
                cout<<endl;
                cout<<"*******************************"<<endl;
                gym.remove_equipment(name);
            }
           
       }
       
          
       case 7:
           break;
           
       default:
           cout<<"Please,enter a correct choice!"<<endl;
           cout<<"Try again!"<<endl<<endl;
           magic_func();
           
     }
   } while(choice!=7);
   
}
int main()
{

   magic_func();


    return 0;
}
