 #include<ds.h>
void main()
{
	clrscr();

	int flag=0;
	char d[50], *ff,*ss;
	tmatch k;
	tdetail x;
	ven v;
	date t;
	point s;
	int a,e,i;
	cap l;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{  flag=0;
	   cout<<"                               IPL RECORD 2016 \n";
	   cout<<"\n1. Points Table \n2. Qualifiers   \n3. Venues \n4. Purple/Orange cap \n5. Player Detail \n6. Winner Of The Season \n7. Top Records\n8. Team Details \n9. Team Captains";
	   cout<<"\n\nEnter the choice :";
	   cin>>a;
	   switch(a)
	   {
		case 1:{
			  cout<<"\n";
			  ifstream fi("point.dat");
			  s.udisplay();
			  cout<<endl;
			  while(fi.read((char*)&s,sizeof(s)))
			{   s.display();
			    cout<<endl;
			}
			   break;
			}
	case 2:{  ifstream a("tmdetail.dat");
			  i=0;
		  while(a.read((char*)&k,sizeof(k)))
			{
			     if((i==1)||(i==2)||(i==3))
			    { cout<<"\n---------------------------------------------------\n\n"; }
			    else
			    {cout<<"\n\n";}
			      i++;
			       k.display();
			      getch();

		       }
			break;
	       }


	case 3:{ int y=1;
		ifstream fi("venue.dat");
		while(fi.read((char*)&v,sizeof(v)))
		{    cout<<endl;
		     cout<<y<<". ";
		     v.display();
		     y++;
		}
		fi.close();
		 break;
		 }
	case 4:{ cout<<"CAPS: ";
		cout<<"\n1.Purple Cap\n2.Orange Cap\n";
		cout<<"Enter The Choice : ";
		cin>>a;
		cout<<endl;
		ifstream fi("cap1.dat");
		fi.read((char*)&l,sizeof(l));
		switch(a)
		{
		case 1: l.displaypc();
			break;
		case 2: l.displayoc();
			 break;
		default: cout<<"Wrong Choice ";
		}

		break;
		}
	case 5:{   cout<<"Enter the name of the player: ";
		   gets(d);
		   ifstream fi ("tdetail.dat");
		   while(fi.read((char*)&x,sizeof(x)))
		{   for(i=0;i<10;i++)
		    { if(strcmpi(x.tp(i),d)==0)

		     { cout<<"Player belongs to "<<x.tn();
		      flag=1;
		      break;
		     }
		    }

		 }
		    if(flag==0)
		    { ifstream f("tdetail.dat");
		    while(f.read((char*)&x,sizeof(x)))
		    { if(strcmpi(x.tc(),d)==0)
		      {  cout<<"Player belongs to "<<x.tn();
			 flag=1;
		      }
		    }
		    }
		    if(flag==0)
		    {cout<<"No record found ! ";
		    }
		fi.close();
		fi.close();
		 break;
		 }
	case 6: {cout<<"\nSUNRISRERS HYDERABAD\n ";
		ifstream fi("tdetail.dat");
		ifstream f("point.dat");
	       while(fi.read((char*)&x,sizeof(x)))
	       {  if(strcmp(x.tn(),"Sunrisers Hyderabad")==0)
		  {
		  x.udisplay();
		  }
	       }
		 break;
		 }
	case 7:{ cout<<"Top records \n";
		cout<<"1. Maximum Sixes\n2. Highest Individual Scores\n3. Highest Strike Rate\n4. Most Runs In A Over\n5. Most Hat-Tricks \nEnter The Choice : ";
		cin>>a;
		switch(a)
		{
		case 1: cout<<"\nMaximum Sixes : Virat Kholi - 38 sixes";              break;
		case 2: cout<<"\nHighest Individual Score : AB DE Villers - 129";      break;
		case 3: cout<<"\nHighest Strike Rate : Krunal Pandya - 191.12";        break;
		case 4: cout<<"\nMost Run In Over : Virat Kholi - 30 runs ";          break;
		case 5: cout<<"\nMost Hat Tricks : Axar Patel - 1 hat trick";          break;
		default : cout<<"You Entered a Wrong choice ";                       break;
		}
		 break;
		 }
	case 8: {cout<<"Enter the name of the team :";
		gets(d);
		flag=0;
		ff=scut(d);
		ifstream fi ("tdetail.dat");
		while(fi.read((char*)&x,sizeof(x)))
		{   if((strcmpi(x.tn(),ff)==0)||(strcmpi(x.tn(),d)==0))
		   {   x.display();
		     flag=1;
		   break;
		  }
		}
		if(flag==0)
		{ cout<<"No record Found ! ";
		}
		 getch();
		  break;
		  }
	case 9:{   ifstream fi("tdetail.dat");
		    int y=1;
		   while(fi.read((char*)&x,sizeof(x)))
		   {    cout<<endl<<y<<"."<<x.tn();
			i=strlen(x.tn());
			while(i<27)
			{ cout<<" ";
			  i++;
			}
			cout<<" : "<<x.tc();
			y++;
		   }
		   getch();
		   break;
	       }
	default : cout<<"WRONG CHOICE";
	} cout<<"\n\nWant to seek more information (y/n)??";
	cin>>ch;
	clrscr();
	}

}



