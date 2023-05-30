// Program To Enter The Details Of Players Participate In Minor Trophy
#include<fstream.h>
#include<iostream.h>
#include<process.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
class bad
	{
        char name[50];
        int rank;
        int age;
        int rfee;
        public:
            void enter()
                {
                char ch;
                cin.get(ch);
                cout<<"\nEnter Ranking in India.";
                cin>>rank;
                cout<<"\nEnter Age of player:";
                cin>>age;
                cout<<"\nEnter Player name:";
                gets(name);
                cout<<"\nEnter Registration fee:";
                cin>>rfee;
                }
            void disp()
                {
                cout<<"\nRanking in India."<<rank;
                cout<<"\nAge of player"<<age;
                cout<<"\nPlayer Name:";
                puts(name);
                cout<<"\nRegistration fee:"<<rfee;
                }
            void modify();
            int getrank()
                {
                return rank;
                }
	};

void bad::modify()
		{
			cout<<"\nRanking in India:"<<rank;
			cout<<"\nAge of player"<<age;
			cout<<"\nPlayer name:";
			puts(name);
			cout<<"\nRegistration Fee"<<rfee<<endl;
			cout<<"\nEnter new details:";
			char nm[50]=".";
			int cl,adm;
			cout<<"\nNew Age of player:(Press -1 to retain old one)";
			cin>>adm;
			cout<<"\nNew name of player(Enter '.' to retain old one):";
			cin>>nm;
			cout<<"\nChanged Registration fee(Press -1 to retain old one):";
			cin>>cl;
			if(adm!=-1)
				age=adm;
			if(strcmp(nm,".")!=0)
				strcpy(name,nm);
			if(cl!=-1)

				rfee=cl;
		}

void main()
	{
	// clrscr();
        bad s;
        char cho;
        char pass[20];
        for(int i=0;i<7;i++)
        {
            cout<<"\nEnter your password"<<endl;
            cin.getline(pass,20);
            if(strcmp(pass,"manpreet"))
                cout<<"\nSORRY INCORRECT PASSWORD!!!"<<endl;
            else
                {
                    cout<<"\t\t\tWelcome To Minjar Trophy"<<endl;
                    break;
                }
        }
        cout<<"$$$$\t\tPlease Select Your Choice from your Main Menu\t\t$$$$"<<endl;
        cout<<"\nPress\t\t 1.\t\tIf you want to Enter your Records"<<endl;
        cout<<"\nPress\t\t 2.\t\tIf you want to Append your records"<<endl;
        cout<<"\nPress\t\t 3.\t\tIf you want to Search your records"<<endl;
        cout<<"\nPress\t\t 4.\t\tIf you want to modify your records"<<endl;
        cout<<"\nPress\t\t 5.\t\tIf you don't want to do any thing"<<endl;
        cout<<"\nPress your task key which you want to perform on this software:";
        cin>>cho;
        
        switch(cho)
            {
            case '1':ofstream fout("Player.txt");
                cout<<"\nEnter details of Player"<<endl;
                char op='y';
                while(op=='y'||op=='Y')
                    {
                    s.enter();
                    fout.write((char*)&s,sizeof(s));
                    cout<<"\nYour changes are stored ";
                    cout<<"\nDo you Want to enter more records?(y/n):";
                    cin>>op;
                    }
                fout.close();
                break;
            case '2':ofstream fout1("Player.txt",ios::app);
                char op1='y';
                cout<<"\nEnter the records to be appended:"<<endl;
                while(op1=='y'||op1=='Y')
                    {
                    s.enter();
                    fout1.write((char*)&s,sizeof(s));
                    cout<<"\ndetail is added";
                    cout<<"\nDo you want to enter more records?(y/n):";
                    cin>>op1;
                    }
                fout1.close();
                break;
            case '3':int rn;
                char found='n';
                ifstream fin("Player.txt");
                cout<<"\nEnter Rank of person to be searched for:";
                cin>>rn;
                while(!fin.eof())
                    {
                    fin.read((char*)&s,sizeof(s));
                    if(s.getrank()==rn)
                        {
                        s.disp();
                        found='y';
                        break;
                        }
                    }
                if(found=='n')
                    cout<<"\nSORRY! Enter rank is not available.";
                fin.close();
                break;
            case '4':fstream fio("Player.txt",ios::in|ios::out|ios::binary);
                int ro;
                long pos;
                char found1='n';
                cout<<"\nEnter Rank of the Player whose record is to be modified:"<<endl;
                cin>>ro;
                while(!fio.eof())
                    {
                    pos=fio.tellg();
                    fio.read((char*)&s,sizeof(s));
                    if(s.getrank()==ro)
                        {
                        s.modify();
                        fio.seekg(pos);
                        fio.write((char*)&s,sizeof(s));
                        cout<<"\nDetail is modified";
                        found1='y';
                        break;
                        }
                    }
                if(found1=='n')
                    cout<<"\nDesired Rank is not found in the file.";
                fio.close();
                break;
            case '5':exit(0);
                break;
            default: cout<<"\nSORRY! You press wrong key Press any key to exit";
            }
        getch();
	}