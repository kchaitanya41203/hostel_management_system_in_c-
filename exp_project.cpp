// J.ganesh AP21110011196
// k.shyam sai manohar AP21110011197
// M.satya priya AP21110011198
// k.chaitanya AP21110011199
// T.Nikhil AP21110011200

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int c=1;
class hostel
{
    int hostel[9][12][4];
    string fname;
    string lname;
    string roll_no;
    string place;
    int floor;
    int b1=1,b2=2,b3=3,b4=4;
    public:
    void two_sharing();
    void three_sharing();
    void four_sharing();
    void display();
    void login();
    void display2();
    void display3();
    void display4();

};

void hostel::login()
{
    cout<<"********** LOGIN PROTAL *********\n";
    cout<<"\nLogin your account or else Create account ";
    cout<<"\n1.Create\n2.Login"<<endl;
    int k;
    string email,pass,name,mobile,e,p,n,m,em,pas;
    cout<<"Enter your choice: ";
    cin>>k;
    
    if(k==1)
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter mobile : ";
        cin>>mobile;
        cout<<"Enter email:";
        cin>>email;
        cout<<"Enter pass : ";
        cin>>pass;
        cout<<"\nYour account has been created."<<endl;
        ofstream myfile("myprg.txt",ios::app);
        myfile<<name<<" "<<mobile<<" "<<email<<" "<<pass<<endl;
        myfile.close();
    }

    else if(k==2)
    {
        int co;
        cout<<"Enter email:";
        cin>>e;
        cout<<"Enter pass : ";
        cin>>p;
        ifstream myfile1("myprg.txt");
        while(myfile1>>n>>m>>em>>pas)
        {
            if(em==e && pas==p)
            {
                cout<<"login ok"<<endl;
                co=1;
            } 
        }
        if(co==1)
        {
            cout<<"Login successfull"<<endl;
        }
        else
        {
            cout<<"\nSorry! incorrect id and password"<<endl;
            cout<<"\nTry again please"<<endl;
            exit(0);
        }
        myfile1.close();
    }
}

void hostel::two_sharing()
{
    int room;
    cout<<"\nTWO SHARING ROOM are only AVAILABLE in FLOOR 1, 2 AND 3.\n";
    cout<<"\nWhich floor do you prefer: ";
    cin>>floor;
    while(floor>3 || floor<1)
    {
        cout<<"\nInvalid option, please choose a valid floor number\n";
        cout<<"\nWhich floor do you prefer: ";
        cin>>floor;
    }
    cout<<"\nEnter a room number from 1 to 12: ";
    cin>>room;
    if(room<1 || room>12)
    {
        cout<<"\nInvalid room no. Please try again \n";
        cout<<"\nEnter a room number from 1 to 12: ";
        cin>>room;
    }
    else
    {
        if((hostel[floor][room][b1]==room+b1) && (hostel[floor][room][b2]==room+b2))
        {
            cout<<"\nSORRY!, Room is already booked, please book another \n";
        }
        else if(hostel[floor][room][b1] != room+b1)
        {
            c=floor*100+room;
            hostel[floor][room][b1] = room+b1;
            cout<<"Please enter your first name: ";
            cin>>fname;
            cout<<"\nEnter your last name: ";
            cin>>lname;
            cout<<"\nPlease enter your full roll number: ";
            cin>>roll_no;
            cout<<"\nEnter your place: ";
            cin>>place;
            cout<<"\nTHANK YOU, Your room is booked\n";
            cout<<"Your room number is : "<<c;

            ofstream myfile("2sharing.txt",ios::app);
            myfile<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
            myfile.close();
        }
        else if(hostel[floor][room][b2] != room+b2)
        {
            c=floor*100+room;
            hostel[floor][room][b2]=room+b2;
            cout<<"Enter your first name: ";
            cin>>fname;
            cout<<"\nEnter your last name: ";
            cin>>lname;
            cout<<"\nEnter your full roll no: ";
            cin>>roll_no;
            cout<<"\nEnter your place: ";
            cin>>place;
            cout<<"\nTHANK YOU, Your room is booked\n";
            cout<<"Your room number is : "<<c;

            ofstream myfile("2sharing.txt",ios::app);
            myfile<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
            myfile.close();
        }
    }
}

void hostel::display2()
{
    string mu;
    ifstream myfl("2sharing.txt");
    cout<<"\nDATA OF STUDENTS WHO ARE PRESENT IN 2 SHARING ROOMS\n";
    while(getline(myfl,mu))
    {
        cout<<mu<<endl;
    }
    myfl.close();
}

void hostel::three_sharing()
{
    int room;
    cout<<"\nTHREE SHARING Rooms are only AVAILABLE in FLOORS 4, 5 and 6"<<endl;
    cout<<"\nWhich floor do you prefer: ";
    cin>>floor;
    while(floor<4 || floor>6)
    {
        cout<<"\nInvalid option, please choose a valid floor number\n";
        cout<<"\nWhich floor do you prefer: ";
        cin >> floor;
    }
    cout<<"\nEnter a room number from 1 to 12: ";
    cin>>room;
    if(room<1 || room>12)
    {
        cout<<"\nInvalid room number, please try again: "<<endl;
        cin>>room;
    }
    else if((hostel[floor][room][b1]==room+b1) && (hostel[floor][room][b2]==room+b2) && (hostel[floor][room][b3]==room+b3))
    {
        cout<<"\nSORRY!, Room is already booked, Please book another room"<<endl;
    }
    else if(hostel[floor][room][b1]!=room+b1)
    {
        c=floor*100+room;
        hostel[floor][room][b1] = room+b1;
        cout<<"Please enter your first name: ";
        cin>>fname;
        cout<<"\nEnter your last name: ";
        cin>>lname;
        cout<<"\nPlease enter your full roll number: ";
        cin>>roll_no;
        cout<<"\nEnter your place: ";
        cin>>place;
        cout<<"\nTHANK YOU, Your room is booked\n";
        cout<<"\nYour room number is : "<<c;
        ofstream file("3sharing.txt",ios::app);
        file<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
        file.close();
    }
    else if(hostel[floor][room][b2]!=room+b2)
    {
        c=floor*100+room;
        hostel[floor][room][b2]=room+b2;
        cout<<"Enter your first name:";
        cin>>fname;
        cout<<"\nEnter your last name:";
        cin>>lname;
        cout<<"\nEnter your full roll no:";
        cin>>roll_no;
        cout<<"\nEnter your place: ";
        cin>>place;
        cout<<"\nTHANK YOU, Your room is booked\n";
        cout<<"\nYour room number is : "<<c;
        ofstream file("3sharing.txt",ios::app);
        file<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
        file.close();
    }
    else if(hostel[floor][room][b3]!=room+b3)
    {
        c=floor*100+room;
        hostel[floor][room][b3]=room+b3;
        cout<<"Enter your first name:";
        cin>>fname;
        cout<<"\nEnter your last name:";
        cin>>lname;
        cout<<"\nEnter your full roll no:";
        cin>>roll_no;
        cout<<"\nEnter your place: ";
        cin>>place;
        cout<<"\nTHANK YOU, Your room is booked\n";
        cout<<"\nYour room number is :  "<<c;
        ofstream file("3sharing.txt",ios::app);
        file<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
        file.close();
    }
}

void hostel::display3()
{
    string mun;
    ifstream file3("3sharing.txt");
    cout<<"\nDATA OF STUDENTS WHO ARE PRESENT IN 3 SHARING ROOMS\n";
    while(getline(file3,mun))
    {
        cout<<mun<<endl;
    }
    file3.close();
}

void hostel::four_sharing()
{
    int room;
    cout<<"\nFour sharing rooms are only available in floor 7, 8 and 9."<<endl;
    cout<<"\nWhich floor do you want to prefer: ";
    cin>>floor;
    while(floor<7 || floor>9)
    {
        cout<<"\nInvalid input please enter valid one "<<endl;
        cout<<"\nWhich floor do you want to prefer: ";
        cin>>floor;
    }
    cout<<"\nEnter a room no from 1 to 12: ";
    cin>>room;
    if(room<1 || room>12)
    {
        cout<<"\nInvalid room no, please try again "<<endl;
        cout<<"\nEnter a room no from 1 to 12: ";
        cin>>room;
    }
    else 
    {
        if((hostel[floor][room][b1] == room+b1)&&(hostel[floor][room][b2] == room+b2)&&(hostel[floor][room][b3] == room+b3)&&(hostel[floor][room][b4] == room+b4))
        {
            cout<<"\nSORRY! Room is already booked, please book another "<<endl;
        }
        else if(hostel[floor][room][b1] != room+b1)
        {
            c=floor*100+room;
            hostel[floor][room][b1] = room+b1;
            cout<<"\nPlease enter your first name: ";
            cin>>fname;
            cout<<"\nEnter your last name: ";
            cin>>lname;
            cout<<"\nplease enter your full roll number: ";
            cin>>roll_no;
            cout<<"\nEnter your place: ";
            cin>>place;
            cout<<"\nTHANK YOU, Your room is booked\n";
            cout<<"\nYour room number is : "<<c;

            ofstream fil("4sharing.txt",ios::app);
            fil<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
            fil.close();
        }
        else if(hostel[floor][room][b2]!=room+b2)
        {
            c=floor*100+room;
            hostel[floor][room][b2]=room+b2;
            cout<<"\nEnter your first name:";
            cin>>fname;
            cout<<"\nEnter your last name:";
            cin>>lname;
            cout<<"\nEnter your full roll no:";
            cin>>roll_no;
            cout<<"\nEnter your place: ";
            cin>>place;
            cout<<"\nTHANK YOU, Your room is booked\n";
            cout<<"\nYour room number is : "<<c;

            ofstream fil("4sharing.txt",ios::app);
            fil<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
            fil.close();
        }
        else if(hostel[floor][room][b3]!=room+b3)
        {
            c=floor*100+room;
            hostel[floor][room][b3]=room+b3;
            cout<<"\nEnter your first name:";
            cin>>fname;
            cout<<"\nEnter your last name:";
            cin>>lname;
            cout<<"\nEnter your full roll no:";
            cin>>roll_no;
            cout<<"\nEnter your place: ";
            cin>>place;
            cout<<"\nTHANK YOU, Your room is booked\n";
            cout<<"\nYour room number is : "<<c; 

            ofstream fil("4sharing.txt",ios::app);
            fil<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
            fil.close();
        }
        else if(hostel[floor][room][b4]!=room+b4)
        {
            c=floor*100+room;
            hostel[floor][room][b4]=room+b4;
            cout<<"\nEnter your first name:";
            cin>>fname;
            cout<<"\nEnter your last name:";
            cin>>lname;
            cout<<"\nEnter your full roll no:";
            cin>>roll_no;
            cout<<"\nEnter your place: ";
            cin>>place;
            cout<<"\nTHANK YOU, Your room is booked\n";
            cout<<"\nYour room number is : "<<c;

            ofstream fil("4sharing.txt",ios::app);
            fil<<fname<<"   "<<lname<<"   "<<roll_no<<"   "<<place<<"   "<<c<<endl;
            fil.close();
        }
    }
}

void hostel::display4()
{
    string munn;
    ifstream file4("4sharing.txt");
    cout<<"\nDATA OF STUDENTS WHO ARE PRESENT IN 4 SHARING ROOMS\n";
    while(getline(file4,munn))
    {
        cout<<munn<<endl;
    }
    file4.close();
}

void hostel::display()
{
    int sharing2=0,sharing3=0,sharing4=0;
    cout<<"Current status of the hostel: "<<endl;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<13;j++)
        {
            if(i<4)
            {
                for(int k=1;k<3;k++)
                {
                    if(hostel[i][j][k]==j+k)
                    {
                        sharing2++;
                    }
                }
            }
            else if(i<7)
            {
                for(int k=1;k<4;k++)
                {
                    if(hostel[i][j][k]==j+k)
                    {
                        sharing3++;
                    }
                }
            }
            else
            {
                for(int k=1;k<5;k++)
                {
                    if(hostel[i][j][k]==j+k)
                    {
                        sharing4++;
                    }
                }
            }
        }
    }
    cout<<"\nNumber of beds occupied in 2 sharing catagory out of total 72 beds: "<<sharing2<<endl;
    cout<<"\nNumber of beds occupied in 3 sharing catagory out of total 108 beds: "<<sharing3<<endl;
    cout<<"\nNumber of beds occupied in 4 sharing catagory out of total 216 beds: "<<sharing4<<endl;
}

int main()
{
    cout<<"\n\n********** HOSTEL BOOKING **********\n\n"<<endl;
    hostel obj;
    
    obj.login();
    
    char ch='y';
    int choice;
    do
    {
        cout<<"\n********* WELCOME TO HOSTEL BOOKING ********* \n";
        cout<<"\nPress [ 1 ] to book a room.\nPress [ 2 ] to know how many beds are occupied.\nPress [ 3 ] to display 2 sharing students details.";
        cout<<"\nPress [ 4 ] to display 3 sharing students details.\nPress [ 5 ] to display 4 sharing students details.\nPress [ 6 ] to exit."<<endl;
        cout<<"\nEnter your choice : ";
        cin>>choice;
        while(choice<1 || choice>6)
        {
            cout<<"Invalid option, please choose a valid option "<<endl;
            cout<<"\nPress [ 1 ] to book a room.\nPress [ 2 ] to know how many beds are occupied.\nPress [ 3 ] to display 2 sharing students details.";
            cout<<"\nPress [ 4 ] to display 3 sharing students details.\nPress [ 5 ] to display 4 sharing students details.\nPress [ 6 ] to exit."<<endl;
            cout<<"\nEnter your choice : ";
            cin>>choice;
        }

        if(choice == 1)
        {
            int choice1;
            cout<<"\nwhat type of rooms would you like to choose: "<<endl;
            cout<<"\nPress [ 1 ] for two sharing room\nPress [ 2 ] for three sharing room\nPress [ 3 ] for four sharing room\nPress [ 4 ] to go back "<<endl;
            cout<<"\nEnter your choice: ";
            cin>>choice1;
            while((choice1<1) || (choice1>4))
            {
                cout<<"Invalid choice. Please choose a valid option "<<endl;
                cout<<"\nPress [ 1 ] for two sharing room\nPress [ 2 ] for three sharing room\nPress [ 3 ] for four sharing room\nPress [ 4 ] to go back "<<endl;
                cout<<"\nEnter your choice: ";
                cin>>choice1;
            }
            if(choice1==4)
            {
                ch = 'y';
            }
            else if(choice1==1)
            {
                obj.two_sharing();
            }
            else if(choice1==2)
            {
                obj.three_sharing();
            }
            else if(choice1==3)
            {
                obj.four_sharing();
            }
        }
        else if(choice==2)
        {
            obj.display();
        }
        else if(choice==3)
        {
            obj.display2();
        }
        else if(choice==4)
        {
            obj.display3();
        }
        else if(choice==5)
        {
            obj.display4();
        }
        else if(choice==6)
        {
            cout<<"\nTHANK YOU"<<endl;
            exit(0);
        }
    } while(1);
}

