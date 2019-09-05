#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>

class tdetail
{	char tname[50],tcaptain[30];
	char tplayer[10][30];
	public:
	void getdata(void);
	void display(void);
	char* tn()
	{return tname;}
	char* tp(int i)
	{
	  return tplayer[i];
	}
	char* tc()
	{ return tcaptain;
	}
	void udisplay();
};
void tdetail::getdata(void)
	{    cout<<"Enter the team name: ";
	     gets(tname);
	     for(int i=0;i<10;i++)
		{	cout<<"\nEnter name of player: ";
			gets(tplayer[i]);
		}
	     cout<<"Enter the team captain :";
	     gets(tcaptain);
	}
void tdetail::display(void)
       {     cout<<"\nName of the team is: "<<tname;
	     cout<<"\nPlayers: ";
	     for(int i=0;i<10;i++)
	     {  cout<<"\n"<<i+1<<"."<<tplayer[i];
	     }
	     cout<<"\nTeam captain: "<<tcaptain;
       }
void tdetail::udisplay(void)
       {
	     cout<<"\nPlayers: ";
	     for(int i=0;i<10;i++)
	     {  cout<<"\n"<<i+1<<"."<<tplayer[i];
	     }
	     cout<<"\nTeam captain: "<<tcaptain;
       }


class date
{
	int d,m,y;
	public: void getdata()
		{  cout<<"Enter Date : ";
		   cin>>d;
		   cout<<"Enter month : ";
		   cin>>m;
		   y=2016;
		}

		void display()
		{
		   cout<<"\ndate : ";
		   cout<<d<<"/";
		   if(m==4)
		   {  cout<<"April";}
		    else
		   {  cout<<"May";}
		   cout<<"/"<<y;
		}
		int mo()
		{     return m;   }
	       int da()
		{ return d;}


};
class ven
{
   char ven[50];
   public:

   void getdata()
   {  cout<<"Enter venue :";
      gets(ven);
   }

   void display()
   {
      cout<<ven;
   }
   char* ve()
   { return ven;}
};
char* scut(char a[]);
class tmatch
{
   char team1[50],team2[50],won[50];
   public:
   date a;
     void getdata()
   {
      cout<<"Enter team 1: ";
      gets(team1);
      cout<<"Enter team 2: ";
      gets(team2);
      a.getdata();
      cout<<"Won: ";
      gets(won);
   }
   void display()
   {  cout<<scut(team1)<<" VS "<<scut(team2);
      a.display();
      cout<<"\nWon by: "<<scut(won)<<endl;
   }
   char* t1()
   { return team1;
   }
   char* t2()
   {  return team2;
   }
   char* wn()
   { return won;
   }
};
class cap
{    char oc[50],pc[50];
     public:
     void getdata()
     {  cout<<"Enter the orange cap winner ";
	gets(oc);
	cout<<"Enter the purple cap winner ";
	gets(pc);
     }
     void displayoc()
     { cout<<"Orange cap winner :"<<oc;
     }
     void displaypc()
     { cout<<"Purple cap winner :"<<pc;
     }
};
class point
{
  int mat,win,lose,po;
  char tname[50];
  public:
  void getdata()
  {   cout<<"Enter team name :";
      gets(tname);
      cout<<"Enter the matches ";
      cin>>mat;
      cout<<"Enter win :";
      cin>>win;
      cout<<"Enter lose ";
      cin>>lose;
      cout<<"Enter points ";
      cin>>po;
  }
  void display();
  void udisplay()
  {   cout<<"                           ";
      cout<<"Tot. Match   Wins   Losses   Points";
  }
};
void point::display()
 {
       cout<<tname;
       int a;
       a=strlen(tname);
       while(a<28)
       {  cout<<" ";
       a++;
       }
       cout<<"    "<<mat<<"        "<<win<<"      "<<lose<<"        "<<po;
  }

char* scut(char a[])
{   if(strcmpi(a,"KKR")==0)
    { return "Kolkata Knight Riders" ; }
    if(strcmpi(a,"DD")==0)
    { return "Delhi Daredevils";
    }
    if(strcmpi(a,"MI")==0)
    { return "Mumbai Indians";
    }
    if(strcmpi(a,"SRH")==0)
    { return "Sunrisers Hyderabad";
    }
    if(strcmpi(a,"RPS")==0)
    { return "Raising Pune Supergiants";
    }
    if(strcmpi(a,"GL")==0)
     {return "Gujrat Lions";
    }
    if(strcmpi(a,"KXIP")==0)
    { return "Kings XI Punjab";
   }
    if(strcmpi(a,"RCB")==0)
    { return "Royal Challengers Bangalore";
   }
   else return 0;
}
char* fcut(char a[])
{  if(strcmpi(a,"Kolkata Knight Riders")==0)
    { return "KKR" ;
    }
    if(strcmpi(a,"Delhi Daredevils")==0)
    { return "DD";
    }
    if(strcmpi(a,"Mumbai Indians")==0)
    { return "MI";
    }
    if(strcmpi(a,"Sunrisers Hyderabad")==0)
    { return "SRH";
    }
    if(strcmpi(a,"Raising Pune Supergiants")==0)
    { return "RPS";
    }
    if(strcmpi(a,"Gujrat Lions")==0)
    {return "GL";
    }
    if(strcmpi(a,"Kings XI Punjab")==0)
    { return "KXIP";
    }
    if(strcmpi(a,"Royal Challengers Bangalore")==0)
    { return "RCB";
    }
    else return 0;
}