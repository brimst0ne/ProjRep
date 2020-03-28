#include <iostream>
#include "Transport.h"
#include "Air.h"
#include "Ground.h"
#include "Car.h"
#include "Bike.h"
#include "Plane.h"
#include "Helicopter.h"

using namespace std;

void main()
{
	Transport newTransport;
	newTransport.Setpassengers(15);
	newTransport.Setrange(1500);
	newTransport.Setweight(100);
	cout << "passengers = " << newTransport.Getpassengers() << endl;
	cout << "range = " << newTransport.Getrange() << endl;
	cout << "weight = " << newTransport.Getweight() << endl;

	Ground newGround;
	newGround.Setwheels(4);
	newGround.Setspecial(false);
	newGround.Setpurpose(1);

	cout << "newGround is performing: " << newGround.Voice() << endl;

	Car newCar;
	cout << "newCar is performing: " << newCar.Voice() << endl;
	cout << "range = " << newCar.Getrange() << endl;

	Bike newBike;
	cout << "newBike is riding nearby: " << newBike.Voice() << endl;
	cout << "range = " << newBike.Getrange() << endl;

	Air newAir;
	newAir.Setpassengers(120);
	newAir.Setrange(1500000);
	newAir.Setweight(2000);
    
	cout << "newAir is performing: " << newAir.Voice() << endl;

	Plane newPlane;
	cout << "newPlane is performing: " << newPlane.Voice() << endl;
	cout << "range = " << newPlane.Getrange() << endl;

	Helicopter newHeli;
	cout << "newHeli is performing: " << newHeli.Voice() << endl;
	cout << "range = " << newHeli.Getrange() << endl;

	Ground** Vehicles = 0;
	int Vehicles_num = 0;
	cout << "Vehicles_num = " << endl;
	cin >> Vehicles_num;

	Vehicles = new Ground * [Vehicles_num];
	for (int i = 0; i < Vehicles_num; i++)
	{
		cout << "What is it?" << endl;
		int a;
		cin >> a;
		if (a == 0)
			Vehicles[i] = new Car();
		else
			Vehicles[i] = new Bike();
		cout << "range = " << Vehicles[i]->Getrange() << endl;
		cout << "vehicle " << i << " is riding: " << Vehicles[i]->Voice() << endl;
	}

	Air** Vehicles_1 = 0;
	int Vehicles_num_1 = 0;
	cout << "Vehicles_num_1 = " << endl;
	cin >> Vehicles_num_1;

	Vehicles_1 = new Air * [Vehicles_num_1];
	for (int i = 0; i < Vehicles_num_1; i++)
	{
		cout << "What is it?" << endl;
		int b;
		cin >> b;
		if (b == 0)
			Vehicles_1[i] = new Helicopter();
		else
			Vehicles_1[i] = new Plane();
		cout << "range = " << Vehicles_1[i]->Getrange() << endl;
		cout << "vehicle " << i << " is riding: " << Vehicles_1[i]->Voice() << endl;
	}


}