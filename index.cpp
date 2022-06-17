#include<bits/stdc++.h>
using namespace std;
void register_user()
{
    cout<<"Welcome"<<endl;
               string name,usn,phone;
               cout<<"Enter your Name :";
               cin>>name;
               do{
               cout<<"Enter your USN :";
               cin>>usn;
               }while(usn.length()!=10);
               do{
                cout<<"Enter your phone number :";
                cin>>phone;
               }while(phone.length()!=10);
               ofstream f2;
               f2.open("Users.txt",ios_base::app);
               f2<<name<<"|"<<usn<<"|"<<phone<<endl;
               f2.close();
}
void login()
{
    string usn;
    cout<<"Enter your usn :";
    cin>>usn;
}
int main()
{
    int choice;
    for(int i=1;i<=55;i++)
    cout<<"=";
   cout<<"\n\t\t\tWELCOME "<<endl;
   for(int i=1;i<=55;i++)
      cout<<"=";
   cout<<"\n1.View the menu \n2.Order Food \n3.Exit\n Enter your choice :";
   cin>>choice;
   switch(choice)
   {
   case 1:
      ifstream f("menu.txt");
      if(f.is_open())
        cout<<f.rdbuf();
        int ch;
        f.close();
        cout<<"\n1.Order Food \n2.Exit\n Enter your choice :";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"1.Register if new user \n2.Log in \n Enter your choice :";
            int option;
            cin>>option;
            if(option==1)
            {
                register_user();
            }
            else{
                cout<<"Place ur order";
                login();
                }
        }


      break;

   }

  return 0;
}
