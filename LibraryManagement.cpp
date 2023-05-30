// Library Managment
#include <fstream.h>
#include <process.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
class lib
{
    char bookname[100];
    int bookno;
    char author[100];
    char publications[100];
    char category[100];
    int isbn;

public:
    void enter()
    {
        cout << "\nEnter Book name:";
        gets(bookname);
        cout << "\nEnter category of the book:";
        gets(category);
        cout << "\nEnter book no.:";
        cin >> bookno;
        cout << "\nEnter author's name:";
        gets(author);
        cout << "\nEnter publishing press:";
        gets(publications);
        cout << "\nEnter the ISBN:";
        cin >> isbn;
    }
    void disp()
    {
        cout << "\nBook name:";
        puts(bookname);
        cout << "\nCategory:";
        puts(category);
        cout << "\nBook no.:" << bookno;
        cout << "\nAuthor of the book:";
        puts(author);
        cout << "\nPublishing press:";
        puts(publications);
        cout << "\nISBN:" << isbn;
    }
    void modify();
    int getbookno()
    {
        return bookno;
    }
};
void lib::modify()
{
    cout << "\nBook name:";
    puts(bookname);
    cout << "\nCategory:";
    puts(category);
    cout << "\nBook no.:" << bookno;
    cout << "\nAuthor of the book:";
    puts(author);
    cout << "\nPublishing press:";
    puts(publications);
    cout << "\nISBN:" << isbn;
    cout << "\nEnter new details:";
    char bname[30] = ".", cat[30] = ".", auth[30] = ".", publik[30] = ".";
    int is;
    cout << "\nEnter new book name:(Press '.' to retain old one)";
    gets(bname);
    cout << "\nEnter new category:(Enter '.' to retain old one):";
    gets(cat);
    cout << "\nEnter new author name:(Press '.' to retain old one):";
    gets(auth);
    cout << "\nEnter new publishing press:(Press '.' to retain old one):";
    gets(publik);
    cout << "\nEnter new ISBN no.:(Press '-1' to retain old one):";
    cin >> is;
    if (strcmp(bname, ".") != 0)
        strcpy(bookname, bname);
    if (strcmp(cat, ".") != 0)
        strcpy(category, cat);
    if (strcmp(auth, ".") != 0)
        strcpy(author, auth);
    if (strcmp(publik, ".") != 0)
        strcpy(publications, publik);
    if (is != -1)
        isbn = is;
}
void main()
{
    clrscr();
    char cho;
    cout << "\t\t\t*****************Menu******************";
    cout << "\n\n\t    A. ENTER new details(Previous details will be deleted if exists).";
    cout << "\n\n\t    B. ADD data(Previous records will not be overwritten).";
    cout << "\n\n\t    C. DISPLAY all information.";
    cout << "\n\n\t    D. DISPLAY information of a particular book.";
    cout << "\n\n\t    E. MODIFY details of the books.";
    cout << "\n\n\t    F. DELETE ";
    cout << "\n\n\t    G. EXIT";
    cout << "\n\nPlease select one of the options:";
    cin >> cho;
    switch (cho)
    {
    case 'A':
        ofstream fout("library.dat", ios::out | ios::binary);
        cout << "\nEnter details of books:" << endl;
        char op = 'y';
        lib l2;
        while (op == 'y' || op == 'Y')
        {
            l2.enter();
            fout.write((char *)&l2, sizeof(l2));
            cout << "\nData stored successfully.";
            cout << "\nWant to enter more?(y/n):";
            cin >> op;
        }
        fout.close();
        break;
    case 'B':
        ofstream fout1("library.dat", ios::app | ios::binary);
        char op1 = 'y';
        lib l3;
        cout << "\nEnter records to be appended:" << endl;
        while (op1 == 'y' || op1 == 'Y')
        {
            l3.enter();
            fout1.write((char *)&l3, sizeof(l3));
            cout << "\nRecord added successfully.";
            cout << "\nWant to enter more?(y/n):";
            cin >> op1;
        }
        fout1.close();
        break;
    case 'C':
        ifstream fin4("library.dat", ios::in | ios::binary);
        lib l5;
        fin4.read((char *)&l5, sizeof(l5));
        while (!fin4.eof())
        {
            l5.disp();
            fin4.read((char *)&l5, sizeof(l5));
        }
        break;
    case 'D':
        int bn;
        char found = 'n';
        ifstream fin("library.dat", ios::in | ios::binary);
        lib l1;
        cout << "\nEnter book no. to be searched for:";
        cin >> bn;
        while (!fin.eof())
        {
            fin.read((char *)&l1, sizeof(l1));
            if (l1.getbookno() == bn)
            {
                l1.disp();
                found = 'y';
                break;
            }
        }
        if (found == 'n')
            cout << "\nRecord not found in the file.";
        fin.close();
        break;
    case 'E':
        fstream fio("library.dat", ios::in | ios::out | ios::binary);
        int bo;
        long pos;
        char found1 = 'n';
        lib l4;
        cout << "\nEnter book no. whose record is to be modified:" << endl;
        cin >> bo;
        while (!fio.eof())
        {
            pos = fio.tellg();
            fio.read((char *)&l4, sizeof(l4));
            if (l4.getbookno() == bo)
            {
                l4.modify();
                fio.seekg(pos);
                fio.write((char *)&l4, sizeof(l4));
                cout << "\nData modified successfully.";
                found1 = 'y';
                break;
            }
        }
        if (found1 == 'n')
            cout << "\nBook no. not found in the file.";
        fio.close();
        break;
    case 'F':
        ifstream fio3("library.dat", ios::in | ios::binary);
        ofstream file("temp.dat", ios::out | ios::binary);
        int bno;
        lib l;
        char found2 = 'f';
        char confirm = 'n';
        cout << "\nEnter book number whose record is to be deleted:";
        cin >> bno;
        while (!fio3.eof())
        {
            fio3.read((char *)&l, sizeof(l));
            if (l.getbookno() == bno)
            {
                l.disp();
                found2 = 't';
                cout << "\nAre you sure you want to delete the record?(y/n):";
                cin >> confirm;
                if (confirm == 'n')
                    file.write((char *)&l, sizeof(l));
            }
            else
                file.write((char *)&l, sizeof(l));
        }
        if (found2 == 'f')
            cout << "Record not found. Press any key to exit.";
        else
            cout << "Record deleted successfully. Press any key to exit.";
        fio3.close();
        file.close();
        remove("library.dat");
        rename("temp.dat", "library.dat");
        break;
    case 'G':
        exit(0);
        break;
    default:
        cout << "\nWrong choice entered. Press any key to exit";
    }
    getch();
}
