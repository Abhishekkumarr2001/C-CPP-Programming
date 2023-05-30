// School Magazine
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<iomanip.h>
#include<conio.h>
#include<stdio.h>
class teach
	{
	char name[30];
	long int ern;
	long int bpay;
	int ph;
	public:
		void enter()
			{
			char ch;
			cin.get(ch);
			cout<<"\nEnter registration no.";
			cin>>ern;
			cout<<"\nEnter Basic pay:";
			cin>>bpay;
			cout<<"\nEnter Teacher's name:";
			gets(name);
			cout<<"\nEnter phone no.:";
			cin>>ph;
			}
		void disp()
			{
			cout<<"\nregistration no."<<ern;
			cout<<"\nBasic pay:"<<bpay;
			cout<<"\nTeacher Name:";
			puts(name);
			cout<<"\nphone no.:"<<ph;
			}
		void modify();
		int getern()
			{
			return ern;
			}
	};

void teach::modify()
		{
			cout<<"\nregistration no.:"<<ern;
			cout<<"\nBasic pay:"<<bpay;
			cout<<"\nTeacher name:";
			puts(name);
			cout<<"\nphone no."<<ph<<endl;
			cout<<"\nEnter new details:";
			char nm[30]=".";
			int pnp,nbp;
			cout<<"\nNew Basic pay:(Press -1 to retain old one)";
			cin>>nbp;
			cout<<"\nNew name of teacher:(Enter '.' to retain old one):";
			cin>>nm;
			cout<<"\nNew phone no.:(Press -1 to retain old one):";
			cin>>pnp;
			if(nbp!=-1)
				bpay=nbp;
			if(strcmp(nm,".")!=0)
				strcpy(name,nm);
			if(pnp!=-1)
				ph=pnp;
		}

void main()
	{
        clrscr();
        teach s;
        char cho;
        cout<<setw(44)<<"**Main Menu**\n";
        cout<<"\n\t\t\t****1.Enter your records****\n";
        cout<<"\n\t\t\t****2.Append your records****\n";
        cout<<"\n\t\t\t****3.Search your records****\n";
        cout<<"\n\t\t\t****4.Modify your records****\n";
        cout<<"\n\t\t\t****5.Delete your records****\n";
        cout<<"\n\t\t\t****6.Project credits****\n";
        cout<<"\n\t\t\t****7.Exit****\n"<<endl;
        cout<<"\nEnter your choice :(1 2 3 4 5 6 7 )";
        cin>>cho;
        switch(cho)
            {
                case '1':ofstream fout("teach.txt");
                        cout<<"\nEnter details of Teacher:"<<endl;
                        char op='y';
                        while(op=='y'||op=='Y')
                            {
                            s.enter();
                            fout.write((char*)&s,sizeof(s));
                            cout<<"\nYour Data is stored ";
                            cout<<"\nDo you Want to enter more records?(y/n):";
                            cin>>op;
                            }
                        fout.close();
                        break;
                
                case '2':ofstream fout1("teach.txt",ios::app);
                        char op1='y';
                        cout<<"\nEnter records to be appended:"<<endl;
                        while(op1=='y'||op1=='Y')
                            {
                            s.enter();
                            fout1.write((char*)&s,sizeof(s));
                            cout<<"\nRecord is added";
                            cout<<"\nWant to enter more?(y/n):";
                            cin>>op1;
                            }
                        fout1.close();
                        break;
                
                case '3':int rn;
                        char found='n';
                        ifstream fin("teach.txt");
                        cout<<"\nEnter registration no. to be searched for:";
                        cin>>rn;
                        while(!fin.eof())
                            {
                            fin.read((char*)&s,sizeof(s));
                            if(s.getern()==rn)
                                {
                                s.disp();
                                found='y';
                                break;
                                }
                            }
                        if(found=='n')
                            cout<<"\nSORRY! registration no. not found in the file.";
                        fin.close();
                        break;
                
                case '4':fstream fio("teach.txt",ios::in|ios::out|ios::binary);
                        int ro;
                        long pos;
                        char found1='n';
                        cout<<"\nEnter registration no. of the teacher whose record is to be modified:"<<endl;
                        cin>>ro;
                        while(!fio.eof())
                            {
                            pos=fio.tellg();
                            fio.read((char*)&s,sizeof(s));
                            if(s.getern()==ro)
                                {
                                s.modify();
                                fio.seekg(pos);
                                fio.write((char*)&s,sizeof(s));
                                cout<<"\nData is modified";
                                found1='y';
                                break;
                                }
                            }
                        if(found1=='n')
                            cout<<"\nregistration. not found in the file.";
                        fio.close();
                        break;
                
                case '5': ifstream fins("teach.txt",ios::in);
                        ofstream file("temp.txt",ios::out);
                        int rno;
                        char fund='f',confirm='n';
                        cout<<"\nEnter the registration no of the teacher whose data you want to delete:";
                        cin>>rno;
                        while(!fins.eof())
                        {
                        fins.read((char*) &s,sizeof(s));
                        if(s.getern()==rno)

                        {
                            s.disp();
                            fund='t';
                            cout<<"\nAre you sure to delete this record:";
                            cin>>confirm;
                            if(confirm=='n')
                            file.write((char*) &s, sizeof(s));
                        }
                        else
                            file.write((char*) &s, sizeof(s));
                        }
                        if(fund=='f')
                        cout<<"\nRecord not found:";
                        fins.close();
                        file.close();
                        remove("teach.txt");
                        rename("temp.txt","teach.txt");
                        fins.open("teach.txt",ios::in);
                        /*cout<<"\nNow the file contain:\n";
                        while(!fins.eof())
                    {
                        fins.read((char*) &s, sizeof(teach));
                        if(fins.eof())
                        break;
                        s.disp();
                    }*/
                    fins.close();
                    break;
                
                case '6':cout<<setw(45);
                    cout<<"\nCPP Project Work By"<<"\t"<<"\n******ABHISHEK KUMAR******";
                    cout<<"\nAll copyrights reserved";
                        break;
                
                case '7':exit(0);
                        break;
                
                default: cout<<"\nSORRY! You press wrong key Press any key to exit";
            }
        getch();
	}
