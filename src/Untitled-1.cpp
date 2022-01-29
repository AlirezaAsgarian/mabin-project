//Be name khoda
#include<iostream>
#include<string>
#include<ios> //used to get stream size
#include<limits> //used to get numeric limits
using namespace std;

void setandshow(string &s,char temp[])
{
	if(temp[1] == 'e')
	{
		char c=32;
		//cin>>c;
		char s2[10000];
		cin.ignore(numeric_limits<streamsize>::max(), ' ');
		cin.getline(s2,10000);
		s.assign(s2);
		//string a(" ";)
	//int found=s.find(a);
	//s.erase(0,1);
	}
	else
	{
		cout<<s<<endl;
	}
}
void lenght(string s)
{
	cout<<s.length()<<endl;
}
void insert(string &s)
{
	int index;
	cin>>index;
	string c;
	cin.ignore(numeric_limits<streamsize>::max(), ' ');
	getline(cin,c);
	//cout<<c;
	s.insert(index,c);
}
void append(string &s)
{
	string a;
	cin.ignore(numeric_limits<streamsize>::max(), ' ');
	getline(cin,a);
	s.append(a);
}
void find_f(string &s,char temp[])
{
	string c;
	cin.ignore(numeric_limits<streamsize>::max(), ' ');
	cin>>c;
	if(temp[5] == 'a')
	{
		int found=0;
		int counter=0;
	     while (found != string::npos)
	     {
	       found=s.find(c,found);
	       if(found == -1){break;}
	       else if(counter != 0){cout<<",";}
	       ++counter;
           cout <<found;
           //cout<<s[found]<<endl;
		   ++found;
	     }
	//     if(counter==0){cout<<found;}
	     cout<<endl;
}
if(temp[5] == 'f')
{
	int found=s.find(c);
	cout<<found<<endl;
}

}
void erase(string &s,int &flag,char temp[])
{
	string sub;
	cin.ignore(numeric_limits<streamsize>::max(), ' ');
	cin>>sub;
		int found=0;
		int counter=0;
	     while (found != string::npos)
	     {
	       found=s.find(sub,found);
	       if(found == -1){break;}
           s.erase(found,sub.length());
           //cout<<s<<endl;
		   found=0;
	     }
	 
}
void replace(string &s,char q[])
{
	if(q[2] == 'p')
	{
	string temp;
	cin.ignore(numeric_limits<streamsize>::max(), ' ');
	cin>>temp;
	//cin.ignore(numeric_limits<streamsize>::max(), ' ');
	string temp2;
	cin>>temp2;
	    int len=temp.length();
	    int found=0;
		int counter=0;
	     while (found != string::npos)
	     {
	     	
	       found=s.find(temp,found);
	       if(found == -1){break;}
	    
           s.replace(found,temp.length(),temp2);
    
		   ++found;
	     }
	 }
	 else
	 {
	 	char x;
	 	int a;
	 	
	 	cin>>a;
	 	//cin.ignore(numeric_limits<streamsize>::max(), ' ');
	 	cin>>x;
	 	s.resize(a,x);
	 }
	     //test = regex_replace(s, regex(temp), temp2);
	
}
int main()
{
    string s("welcome to the easiest question of this assignment");
    char temp[10];
    int flag=1;
    while(flag)
    {
      cin>>temp;
      switch(temp[0])
      {
         case 's' : setandshow(s,temp); break;
         case 'l' : lenght(s); break;
         case 'i' : insert(s); break;
         case 'a' : append(s); break;
         case 'f' : find_f(s,temp); break;         
		 case 'e' : if(temp[1] == 'n'){return 0; } erase(s,flag,temp); break;
         case 'r' : replace(s,temp); break;
         default :  flag=0; break;
      }
      


    }
 




}

