/*we will update this app to make it dynamic and smooth 
system 
1- name
2- subjects 
3- arrays & vectors 
4- conditions & switches 
5- loops 
6- great user friendly app 
7- اعمله حلو اوي وممكن ارفعه علي جت هب وممكن كمان علي لينكد ان */
#include<iostream>
#include<vector>
#include<array>
#include<string>
#include<cmath>
using namespace std;
// login user to the system
string username(string name ="Unknown")
{
    return"Hello "+name;
}
bool check_id(int id)
{
    cout<<"your Id consist of 8 numbers"<<endl;
  return (id >= 10000000 && id <= 99999999);

}
/*calculate degree system */
void addMark(vector<int>&marks)
{
    int value;
    cout<<"Enter mark"<<endl;
    cin>>value;
    marks.push_back(value);
}
void displayMarks(const vector<int>&marks)
{
    if(marks.empty())
    {
        cout << "No marks available\n";
        return;
    }

    for(int i : marks)
    {
        cout << "The mark is: " << i << endl;
    }
}

 int calculateAverage(const vector<int>&marks)
 {
    int result =0;
    for(int i : marks)
    {
        result+=i;
    }
    result/=marks.size();
    cout<<"the Average is: "<<result<<endl;
    return result;

 }
 void findHighestlowest(const vector<int>&marks)
 {
    int high =marks.at(0);
    for(int i: marks)
    {
        if(high<i)
        {
            high=i;
        }
 
    }
    cout<<"the Highest is: "<<high<<endl;
    int minVal
     =marks.at(0);
    for(int i: marks)
    {
        if(minVal>i)
        {
            minVal =i;
        }
    }
    cout<<"the lowest is: "<<minVal<<endl;
 }
double GPA(vector<int> &marks)
{
  if(marks.empty())
  {
    return 0.0;
  }
  double total =0;
  for(int mark : marks)
  {
    total+=mark;
  }
  double Average = total / marks.size();
double yGpa = (Average / 100.0f) * 4.0;
  return yGpa;
}
/*mini dataBase*/
void addStudent(vector<string>&students)
{
    cout<<"Enter names: ";
    string name;
    cin>>name;
    students.push_back(name);
}
void add_id(vector<int>&id)
{
    cout<<"enter id's that consist of 8 digits"<<endl;
    int iD;
    cin>>iD;
    if(iD >= 10000000 && iD <= 99999999)
    {
        cout<<"Valid"<<endl;
        id.push_back(iD);
    }
    else
    {
        cout<<"ERROR"<<endl;
    }
}
void DeleteRecord(vector<int>&id,vector<string>&students)
{
   
    if(!(id.empty()))id.pop_back();
    if(!(students.empty()))students.pop_back();
}
void DisplayStudents(vector<string>&students,vector<int>&id)
{
    for(int i=0;i<students.size();i++)
    {
        cout<<"the Student Name is: "<<students.at(i)<<endl;
        if(i<id.size())
        {
            cout<<"ID: "<<id.at(i)<<endl;
        }
        cout<<"==================="<<endl;

    }
   
}
/*Course Registration System*/
// 1- view
void view()
{
    vector<string>subjects ={"digital","statistics","CS","IS","programming"};
    for(int i =0;i<subjects.size();i++)
    {
        cout<<"the subjects is: "<<subjects.at(i)<<endl;
    }
}
// 2- check gpa (add or not )
bool checkGpa(int id)
{
    vector<int>marks;
    if(id >= 10000000 && id <= 99999999)
    {
        cout<<"Enter your Marks";
        for(int i=0;i<6;i++)
        {
            addMark(marks);
        }
        cout<<"your Gpa is: "<<GPA(marks)<<endl;
        if(GPA(marks)>=2.00)
        {
            cout<<"you can register five subjects"<<endl;
            return true;
        }
        else
        {
            cout<<"you can register three subjects"<<endl;
            return false;
        }
        
    }
    return false;
}
//3-add courses
void AddSubjects(string add)
{
    vector<string>subjects ={"digital","statistics","CS","IS","programming"};
    cout<<"add your subjects"<<endl;
    int choice;
    cout<<"1=>digital,2=>statistics,3=>CS,4=>IS,5=>programming"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"you added digital"<<endl;
        break;
        case 2:
        cout<<"you added statistics"<<endl;
        break;
        case 3:
        cout<<"you added CS"<<endl;
        break;
        case 4:
        cout<<"you added IS"<<endl;
        break;
        case 5:
        cout<<"you added programming"<<endl;
        break;
        default:
        cout<<"Invalid"<<endl;
    }
}
//4-remove
void remSubjects(int rem)
{
    vector<string>subjects ={"digital","statistics","CS","IS","programming"};
    cout<<"remove your subjects"<<endl;

    for(int i=0;i<subjects.size();i++)
    {
        cout<<i<<"is equal subject : "<<subjects.at(i)<<endl;
    }
    for(int i=0;i<2;i++)
    {
        if(subjects.at(rem)==subjects.at(i))
        {
            subjects.erase(subjects.begin() + i);
        }
    }
}
int main()
{
    vector<int>marks;
    vector<string>students;
    vector<int>id;
    cout<<"==============Welcome to the college official web site========================="<<endl;
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    // check the ID
    int ID ;
    cout<<"\nEnter your ID: "<<endl;
    cin>>ID;
  if(check_id(ID))
  {
      cout<<username(name)<<endl;  
  }
  else
  {
    cout<<"Your ID is invalid"<<endl;
  }
  /*main Menu to user */
 int mainMenu =0;
 cout<<"Welcome to our main menu "<<name<<endl;
 cout<<"1=> Gpa ,2=>data base,3=>Academic registeration 4=>Exiting"<<endl;
 do
 {
    cin>>mainMenu;
    switch(mainMenu)
    {
        case 1:
        /*GPA menu*/
        int Options;
       do
    {   
        cout<<"1 for add , 2 for display , 3 for calculate average , 4 find highest&lowest , 5 GPA , 6 exit"<<endl;
        cin>>Options;
        switch(Options)
        {
            case 1:
            addMark(marks);
            break;
            case 2: 
            displayMarks(marks);
            break;
            case 3:
            calculateAverage(marks);
            break;
            case 4: 
            findHighestlowest(marks);
            break;
            case 5:
            GPA(marks);
            break;
            case 6:
            cout<<"Exiting ...."<<endl;
            break;
            default:
            cout<<"invalid"<<endl;

        }
    } while (Options!=6);
    break;
    case 2:
    {
         /*mini data base */
    int choices;
    cout<<"1=>add students , 2=> add_id , 3=> delete record , 4=> display record, 5=> exiting"<<endl;
    do
    {
        cin>>choices;
        switch(choices)
        {
            case 1: 
            addStudent(students);
            break;
            case 2:
            add_id(id);
            break;
            case 3:
            DeleteRecord(id,students);
            break;
            case 4:
            DisplayStudents(students,id);
            break;
            case 5:
            cout<<"Exiting....."<<endl;
            break;
            default:
            cout<<"invalid"<<endl;
            break;
        }
        
    } while (choices!=5);
    break;
    }
   
    case 3:
    {
    int input;
    cout<<"1=>View,2=>Check your registeration,3=>Add subjects,4=>remove subjects"<<endl;
    int rem =0;
   string add ="";
    do
    {
        cin>>input;
      switch(input)
      {
        case 1: 
        view();
        break;
        case 2:
        checkGpa(ID);
        break;
        case 3:
        cout<<"add your subjects"<<endl;
        cin>>add;
        AddSubjects(add);
        break;
        case 4:
        cout<<"remove your subjects"<<endl;
        cin>>rem;
        remSubjects(rem);
        break;
        case 5:
        cout<<"Exiting...."<<endl;
        break;

      }
    } while (input!=5);
    break;
    }
    case 4:
    cout<<"Exiting......."<<endl;
    break;
}

} while (mainMenu!=4);

}