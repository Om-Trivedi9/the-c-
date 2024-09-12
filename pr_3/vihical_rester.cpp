#include <iostream>
#include <string.h>
using namespace std;

class vehicle
{

protected:
  char manufacturer[70];
  char model[70];
  int year;
  static int totalvehical;

public:
  int vehicleID;
  vehicle()
  {
    cout << ": enter car information :" << endl;
  }

  void setvehicledata()
  {
    cout << "Enter vehicle ID: ";
    cin >> vehicleID;
    fflush(stdin);
    cout << "Enter manufacturer: ";
    gets(manufacturer);
    fflush(stdin);
    cout << "Enter model: ";
    gets(model);
    cout << "enter car year :";
    cin >> year;
  }

  void getvehicledata()
  {
    cout << "Vehicle ID: " << vehicleID << endl;
    cout << "manufacturer :" << manufacturer << endl;
    cout << " car model :" << model << endl;
    cout << "car launch year :" << year << endl;
  }
};

int vehicle::totalvehical = 70;

class car : public vehicle
{
private:
  int fuel;

public:
  void setcardata()
  {
    cout << "enter car fuel types :";
    cin >> fuel;
  }

  void getcardata()
  {
    cout << "car fuel types :" << fuel << endl;
  }
};

class electriccar : public car
{
  int batteryCapacity;

public:
  void setelectriccardata()
  {
    cout << "Enter battery capacity: ";
    cin >> batteryCapacity;
  }

  void getelectriccardata()
  {
    cout << "Battery capacity: " << batteryCapacity << endl;
  }
};

class aircraft : public car, public electriccar
{
  int flightrange;

public:
  void setaircraftdata()
  {
    cout << "Enter flight range: ";
    cin >> flightrange;
  }

  void getaircaraftdata()
  {
    cout << "Flight range: " << flightrange << endl;
  }
};

class flyingcar : public car, public aircraft
{
  car C1;
  aircraft A1;

public:
  void getflyingcardata()
  {
    C1.setcardata();
    A1.setaircraftdata();
  }
};

class sportcar : public electriccar
{
  int topspeed;

public:
  void setdata()
  {
    cout << "Enter top speed: ";
    cin >> topspeed;
  }
  void getsportcardata()
  {
    cout << "sport car top speed :" << topspeed << endl;
  }
};

class sedan : public car
{
  int vehicleID;
  char manufacturer[70];
  char model[70];

public:
  void setdata()
  {
    cout << "Enter vehicle ID: ";
    cin >> vehicleID;
    cout << "Enter manufacturer: ";
    cin.getline(manufacturer, 50);
    cout << "Enter model: ";
    cin.getline(model, 50);
  }
  void getsedancardata()
  {
    cout << "Vehicle ID: " << vehicleID << endl;
    cout << "manufacturer : " << manufacturer << endl;
    cout << "model : " << model << endl;
  }
};

class suv : public car
{
  int vehicleID;
  char manufacturer[70];
  char model[70];

public:
  void setdata()
  {
    cout << "Enter vehicle ID: ";
    cin >> vehicleID;
    cout << "Enter manufacturer: ";
    cin.getline(manufacturer, 70);
    cout << "Enter model: ";
    cin.getline(model, 70);
  }

  void getsedancardata()
  {
    cout << "Vehicle ID: " << vehicleID << endl;
    cout << "manufacturer : " << manufacturer << endl;
    cout << "model : " << model << endl;
  }
};

class vehicleregistry
{
public:
  vehicle v1[100];
  int n = 0;
  void addvehicle()
  {
    v1[n].setvehicledata();
    n++;
  }
  void display()
  {
    for (int i = 0; i < n; i++)
    {
      v1[i].getvehicledata();
    }
  }

  void search(int a)
  {
    for (int i = 0; i < n; i++)
    {
      if (a == v1[i].vehicleID)
      {
        v1[i].getvehicledata();
      }
    }
  }
};
main()
{
  vehicle v1;
  int choies;
  int om;
   vehicleregistry v2;
  int cho = 1, z, a;




 for (; cho != 8;)
  {
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

}





} 