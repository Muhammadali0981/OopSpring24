/* Programmer:Muhammad Ali 23K-0052
* Date: 05/05/24
* Descrption:Drone software through absract classes 
*/

#include <iostream>
#include <cmath>
#include <cstdlib> 

using namespace std;

class drone{
protected:
    float lat,lon,alt,speed;

public:
    drone(float x, float y, float a, float s) : lat(x), lon(y), alt(a), speed(s) {}
    float adjustAlt(float meters) {return this->alt += meters;}
    void setSpeed(float speed) {this->speed = speed;}
};

class flyable{
protected:

    virtual void takeoff() = 0;
    virtual void land() = 0;
    virtual void navigateTo(float latitude, float longitude, float altitude) = 0;
    virtual void scanArea(float r) = 0;
    
};

class ReconDrone : public drone, public flyable{
private:
    float cameraResoution, maxFlightTime;
    
public:
    ReconDrone(float x, float y, float a, float s) : drone(x, y, a, s) {}
    
    void setRes(float res) {cameraResoution = res;}
    void setmaxtime(float t) {maxFlightTime = t;}

    void takeoff(){
        cout << "taking off" << endl;
    }


    virtual void land(){
        cout << "landing" << endl;
    }

    void navigateTo(float latitude, float longitude, float altitude){
        float distance, time;
        int error = 0;
        error = rand() % 10;
        distance = sqrt(pow((latitude - lat),2) + pow(longitude-lon,2) + pow(altitude,alt));
        cout << "distance between current position and inputted position: " << distance << " meters" << endl;
        time = speed * distance;
        cout << "time needed:" << time << endl;
        
        if(error == 1 || error == 5 || error == 9) cout << "GPS error" << endl;
        if(time > maxFlightTime) cout << "error! time needed is greater than max flight time" << endl;
        else takeoff();
    } 

    void scanArea(float r){

        int error = 0;
        error = rand() % 10;
        float area;
        float objects = 1.f;
        area = 3.14*pow(r,2);
        objects = area * 10;
        if(error == 1 || error == 5 || error == 9) cout << "hardware fault" << endl;
        if(area > cameraResoution) cout << "error in scanning camera resolution too low" << endl;
        
        else if(error != 1 || error != 5 || error != 9){
            cout << "scanning area......" << "objects found" << objects << endl;
        }
    }

};

int main()
{
    ReconDrone D_01(0.f,0.f,0.f, 50.f);
    D_01.setmaxtime(30);
    D_01.setRes(10);

    D_01.navigateTo(2,2,2);
    D_01.scanArea(10);

    return 0;
}
