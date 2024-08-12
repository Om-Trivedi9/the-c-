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

  void getdata()
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
      t1[i].settrianinput == om;
    }
    
 }
};

int main()
{
  Railway r;
  int choies;
  int om;
  do
  {
    cout << "enter 1 for new recods of trian" << endl;
    cout << "enter 2 for all recods of trian" << endl;
    cout << "enter 3 for search Train By Number of trian" << endl;
    cout << "enter 4 for exit" << endl;
    cout << "enter your choies";
    cin >> choies;

    switch (choies)
    {

    case 1:
      r.traininput();
      break;
    case 2:
      r.display();
      break;

    case 3:
      cout << "enter the number of trian you want to search";
      cin >> om;
      r.search(om);
      break;

    case 4:
      cout << "thank you,visit again";
    default:
      cout << "invalid choice";
      break;
    }

  } while (choies != 4);
}
