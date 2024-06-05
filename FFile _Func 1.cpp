#include <iostream>
#include<fstream>
#include<string>

using namespace std;

void createFile(string filename)
{
    fstream  myFile;
    myFile.open(filename+".txt",ios::out);
    if(myFile.fail())
    {
        cout<< "Error opening file" << endl;
    }
    else
    {
        cout<< "File created" << endl;
    }

    myFile.close();
}
void writeFile(string filename)
{
    fstream myFile;
    myFile.open(filename+".txt",ios::out);
    if(myFile.is_open())
    {
      myFile << "Hello world" << endl;
      myFile.close();
    }
    else
    {
        cout<< "unable to open file"<< endl;
    }

}
void readFile(string filename)
{
  fstream myFile;
  myFile.open(filename+".txt", ios::in);
  if(myFile.fail())
  {
      cout << "unable to open file for reading"<< endl;
  }
  else
  {
  string message;

  getline(myFile, message);
  cout<< message << endl;

  myFile.close();
  }
}

int main()
{
    string filename;
    int option;
    int choice;


    do{
    cout << "Enter the Filename:" <<endl;
    cin >> filename;

    cout << "1 create file" <<endl;
    cout << "2 write to file" << endl;
    cout << "3 Read a file" <<endl;
    cout << "Select option :";
    cin >>option;

    switch(option)
    {
    case 1:
        createFile(filename);
        break;

    case 2:
        writeFile(filename);
        break;

    case 3:
        readFile(filename);
        break;

    default :
        cout << "invalid option"<<endl;
        break;
    }
    cout << " select 1 to continue"<< endl;
    cout << "select 0 to quit"<< endl;
    cin >> choice;
    }
    while(choice==1);

}
