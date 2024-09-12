#include <iostream>
#include <string.h>
using namespace std;

class Train
{
public:
  int trainNumber;
  char trainName[50];
  char source[50];
  char destination[50];
  char trainTime[10];
  static int tcount;

public:
  ~Train()
  {
    tcount--;
  }

  void settrianinput()
  {
    cout << "Enter train number: ";
    cin >> this->trainNumber;
    cout << "enter trian name:";
    cin >> this->trainName;
    cout << "enter source: ";
    cin >> this->source;
    cout << "enter destination: ";
    cin >> this->destination;
    cout << "enter train time: ";
    cin >> this->trainTime;
  }

  void datgeta()
  {
    cout << "train number: " << trainNumber << endl;
    cout << "train name: " << trainName << endl;
    cout << "source: " << source << endl;
    cout << "destination: " << destination << endl;
    cout << "trian time:" << trainTime << endl;
  }
};

int Train::tcount = 20;

class Railway
{
public:
  Train t1[100];
  int n = 0;

public:
  void traininput()
  {
    t1[n].settrianinput();

    n++;
  }

  void display()
  {
    for (int i = 0; i < n; i++)
    {
      t1[i].getdata();
      
    }
  }

  void search(int om)
  {
    for (int i = 0; i < n; i++)
    {
      t1[om].getdata();
      t1[i].settrianinput ;
    }
    
 }
};

int main()
{
  Railway r;
  int choies;
  int om;
  
  
    cout << "enter 1 for Car" << endl;
    cout << "enter 2 ElectricCar" << endl;
    cout << "enter 3 for Aircraft" << endl;
    cout << "enter 4 for FlyingCar" << endl;
    cout << "enter 5 for SportsCar" << endl;
    cout << "enter 6 for Sedan" << endl;
    cout << "enter 7 for  SUV" << endl;
    cout << "enter 8 for  exit" << endl;
    cout << "enter your choies";
    cin >> choies;

    switch (choies)
    {
      case 1:
      
    }
    



  }