/* Programmer:Muhammad Ali 23K-0052
* Date: 26/02/24
* Descrption:roller coaster
*/

#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

class RollerCoaster {
public:
	string name;
	int height, length, currentNumRiders, capacity, speed;
	bool rideInProgress;

	RollerCoaster() : name("roller coaster"), height(500), length(200), capacity(20), speed(0), rideInProgress(false) {}

	RollerCoaster(string name, int height, int length, int capacity) 
	   : name(name), height(height), length(length), speed(0), rideInProgress(false) 
	{
		if (capacity%2==0 || capacity%3==0) this->capacity = capacity;
        else this->capacity = capacity + 1;
     
   	}

	// getter and setters
    string getName() { return name; }
    void setName(string name) { this->name = name; }

    int getHeight() { return height; }
    void setHeight(int height) { this->height = height; }

    int getLength() { return length; }
    void setLength(int length) { this->length = length; }

    int getSpeed() { return speed; }
    void setSpeed(int speed) { this->speed = speed; }

    int getCapacity() { return capacity; }
    void setCapacity(int capacity) { 
        if (capacity%2 || capacity%3) this->capacity = capacity;
        else this->capacity = capacity + 1;
    }

    int getCurrentNumRiders() { return currentNumRiders; }
    void setCurrentNumRiders(int currentNumRiders) { this->currentNumRiders = currentNumRiders; }

    bool isRideInProgress() { return rideInProgress; }
    void setRideInProgress(bool rideInProgress) { this->rideInProgress = rideInProgress; }

    int seatRiders(int riders) {
    	if (rideInProgress) {
    		cout << "Ride in progress" << endl;
    		return capacity;
    	}

        if (riders > capacity) {
        this->setCurrentNumRiders(capacity);
        return riders-capacity;
        }
        else {
        this->setCurrentNumRiders(riders);
        return 0;
        }
        
    }

    int start() {
    	if (rideInProgress) {
    		cout << "Ride in progress" << endl;
    		return -1;
    	}
    	this->setRideInProgress(true);
        if (currentNumRiders != capacity) return capacity - currentNumRiders;
        return 0;
    	
    }

    void stop() { if (rideInProgress) this->setRideInProgress(false); }

    void unloadRiders() { if (!rideInProgress) this->setCurrentNumRiders(0); }

    void accelerate() {
    	this->setSpeed(this->speed+2);//my roll number is 0052
    }

    void brake() {
    	this->setSpeed(this->speed-5);//my roll number is 0052
        if (this->speed < 0) this->speed == 0;//to not get neg
    }
};

int main()
{
    cout << "Name: Muhammad Ali" << endl << "ID: 23K-0052" << endl;
	RollerCoaster rc1;
	RollerCoaster rc2("roller coaster", 800, 1500, 37);

	cout << "name:" << rc2.getName() << endl;
    cout << "capacity:" << rc2.getCapacity() << endl;

	rc2.start();
	rc2.stop();

	cout << "not seated: " << rc2.seatRiders(39) << endl;
	cout << "riders: " << rc2.getCurrentNumRiders() << endl;
	cout << "empty seats: " << rc2.start() << endl;

    rc2.setSpeed(10);
    cout << "Speed before accelartion:" << rc2.getSpeed() << endl;
	rc2.accelerate();
    cout << "Speed after accelartion:" << rc2.getSpeed() << endl;

	cout << "Speed before braking:" << rc2.getSpeed() << endl;
	rc2.brake();
    cout << "Speed after after braking:" << rc2.getSpeed() << endl;
	
	rc2.stop();
	cout << "Ride status: " << rc2.isRideInProgress() << endl;
	rc2.unloadRiders();
	cout << "Current riders: " << rc2.getCurrentNumRiders() << endl;

	return 0;
}