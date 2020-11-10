#include <iostream>
#include<cstring>
#include<string.h>
#define MAX 100

using namespace std;
int n=0,y=0;
char co[25];
class Antarang
{
protected:

        static int si,t,h,o,k,d;
public:


    Antarang()
    {


    }
    virtual void details()
    {
        cout<<"**Vision of Antarang**\nBlind and Partially Sighted youth of Belagavi must enjoy a dignified life in an inclusive society.\n"<<endl;
        cout<<"**Mission of Antarang**\nTo build the capacity of blind and partially sighted youth so that they are empowered to claim and utilize their rights.\n"<<endl;
        cout<<"**Goal of Antarang**\nTo improve the living standards of blind and partially sighted youth by increasing access to blind-friendly education, health and employment services.\n"<<endl;
         cout<<"**Objectives of Antarang**\n#First Music school of Belagavi run by the blind teachers.\n#Antarang is first blind orchestra of behavior.\n#Create stage for blind friends to support in their mobility, education, sports, music, computer training,etc"<<endl;
        cout<<"#To carry out advocacy on our own, or through networking with others to secure the rights of blind and partially sighted people.\n#To increase access to education for blind and partially sighted people."<<endl;
         cout<<"#To promote the employment and self-employment of the blind and partially sighted\n"<<endl;
    }





};
int Antarang::si=0;
int Antarang::t=0;
int Antarang::h=0;
int Antarang::o=0;
int Antarang::k=0;
int Antarang::d=0;
class Courses: public Antarang
{
public:

    void details()
    {
            cout<<"The following courses are available:"<<endl;
            cout<<"1.Classical: Vocal,Tabla & Harmonium \n2.Western:Octapad,Keyboard & Drums."<<endl;
            cout<<"Number of students for each course:\nVocal(singing)="<<si<<"\nTabla="<<t<<"\nHarmonium="<<h<<"\nOctapad="<<o<<"\nKeyboard="<<k<<"\nDrums="<<d<<endl;
            cout<<"Course Fees= \u20B9 0 (For Blind Students)"<<endl;
            cout<<"Course Fees= \u20B9 500 (For Normal Students)"<<endl;
            cout<<"Course Duration= 1 month:3days/week"<<endl;
    }

};
class Student:public Antarang
{
private:
    char name[25],course[25];
    int age,fees,id;
public:

    void details()
    {

        cout<<"Student's Name:"<<name<<endl;
        cout<<"Student's Age:"<<age<<endl;
        cout<<"Course registered by the student:"<<course<<endl;
        cout<<"Fees paid by the student:"<<fees<<endl;
        cout<<endl;

    }
    void stud_reg()
    {
        int x;
        cout<<"Enter the following details-"<<endl;
        cout<<"Name:";
        cin>>name;
        cout<<"Age:";
        cin>>age;
        cout<<"Choose a Course\n1.Vocal(singing)\n2.Tabla\n3.Harmonium\n4.Octapad\n5.Keyboard\n6.Drums\nChoice:";
        cin>>x;
        switch(x)
        {
            case 1 :strcpy(course,"Vocal(singing)");si=si+1;break;
            case 2 :strcpy(course,"Tabla");t=t+1;break;
            case 3:strcpy(course,"Harmonium");h=h+1;break;
            case 4:strcpy(course,"Octapad");o=o+1;break;
            case 5:strcpy(course,"Keyboard");k=k+1;break;
            case 6:strcpy(course,"Drums");d=d+1;break;
        }
        cout<<"Fees- \n1.Blind Student:\u20B9 0\n2.Normal Student:\u20B9 500\nChoice:";
        cin>>x;
        fees=(x==1)?0:500;
        cout<<"The Student id is "<<n+1<<endl;




    }
    void stud_del()
    {
        if(!strcmp(course,"Vocal(singing)"))
            si=si-1;

        else if(!strcmp(course,"Tabla"))
            t=t-1;
            else if(!strcmp(course,"Harmonium"))
                    h=h-1;
                else if(!strcmp(course,"Octapad"))
                        o=o-1;
                    else if(!strcmp(course,"Keyboard"))
                            k=k-1;
                        else
                            d=d-1;
    }
};
class Instructors:public Antarang
{
public:
    void details()
    {
        cout<<"Following are the instructors of Antarang:\n"<<endl;
        cout<<"1.Name:Umesh Kundekar\nQualification:Sangeet Visharad\nInstrument(s) played by the instructor:Drum, Octapad & Harmonium.\nDesignation:Principal\n"<<endl;
        cout<<"2.Name:Narayan Kudremani\nQualification:Sangeet Visharad\nInstrument(s) played by the instructor:Keyboard, Tabla & Harmonium.\nDesignation:Vice-Principal\n"<<endl;
        cout<<"3.Name:Monika Rane\nDesignation:Singing Teacher\n"<<endl;
        cout<<"4.Name:Sonali Chikhalkar\nInstrument(s) played by the instructor:Keyboard & Harmonium.\nDesignation:Singing Teacher\n"<<endl;


    }
};




int main()
{
    Antarang A;
    Courses C;
    Student *S[MAX];
    Instructors I;
    int a[MAX];


    int choice,i,id;


    cout <<"ANTARANG:MUSIC SCHOOL AND ORCHESTRA-For the Blind and to the Blind"<< endl;
    while(1)
    {
        cout<<"MENU:\n1.Information about Antarang.\n2.Information About the Courses.\n3.Student Registration\n4.Instructor Details.\n5.Student Details.\n6.Deleting a Student\n7.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                A.details();
                break;
            case 2:
                C.details();
                break;
            case 3:
                S[n]=new Student;
                S[n]->stud_reg();
                n=n+1;
                break;
            case 4:
                I.details();
                break;
            case 5:
                if(n!=0)
                {
                    cout<<"Enter the Student Id:";
                    cin>>id;

                    if(id<=n)
                    {
                        for(i=0;i<=n;i++)
                        {
                            if(a[i]==id)
                            {
                                cout<<"The following registration has been deleted"<<endl;
                                S[id-1]=NULL;
                            }
                        }
                        if(S[id-1]==NULL)
                            break;
                        cout<<"Student Details are:\n";

                        S[id-1]->details();
                        break;
                    }
                    else cout<<"Invalid Id"<<endl;
                    break;

                }
                else cout<<"No Students Registered Yet!"<<endl;
                break;

            case 6:
                cout<<"Enter the Student Id:";
                cin>>a[y];
                id=a[y];
                if(id<=n)
                {
                    S[id-1]->details();
                    S[id-1]->stud_del();

                y=y+1;
                cout<<"The above Student's Registration is Deleted\n";
                break;

                }
                else {cout<<"Invalid Id"<<endl;break;}

            case 7: exit(0);
        }
    }
    return 0;
}
