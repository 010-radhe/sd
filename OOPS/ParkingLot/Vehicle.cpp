#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    private:
        string vehicleNumber;
    protected:
        Vehicle(){

        }
        Vehicle(string vehicleNumber){
            this->vehicleNumber=vehicleNumber;
            cout<<"Vehicle constructor"<<endl;
        }

    public:
    virtual int getParkingRate()=0;

    virtual ~Vehicle(){
        cout<<"Vehicle destructor"<<m endl;
    }
    string getVehicleNumber(){
        return vehicleNumber;
    }

};

class Car: public Vehicle{
    public:
    Car(string vehicleNumber):Vehicle(vehicleNumber){
        
        cout<<"Car constructor"<<endl;
    }
    int getParkingRate(){
        return 100;
    }
    ~Car(){
        cout<<"Car destructor"<<endl;
    }
};

class Bike: public Vehicle{
    public:
    Bike(string vehicleNumber):Vehicle(vehicleNumber){
         
        cout<<"Bike constructor"<<endl;
    }
    int getParkingRate(){
        return 100;
    }
    ~Bike(){
        cout<<"Bike destructor"<<endl;
    }
};

//Payment Service
class ParkingService{
    public:
    void parkVehicle(Vehicle *v){
        cout<<"Parking vehicle: "<<v->getVehicleNumber()<<endl;
    }
    void parkVehicle(Vehicle *v, int spotNumber){
        cout<<"Parking vehicle: "<<v->getVehicleNumber()<<" at spot: "<<spotNumber<<endl;
    }
    

};
class Money{
    public:
    int amount;
    Money(int amount){
        this->amount=amount;
        cout<<"Money constructor"<<endl;
    }
    ~Money(){
        cout<<"Money destructor"<<endl;
    }
    Money operator+(Money &other){
        return Money(this->amount+other.amount);
    }
};
// -------------- Parking Spot --------------
class ParkingSpot{
    private:
        int spotNumber;
        bool isAvailable;
    public:
    ParkingSpot(int spotNumber){
        this->spotNumber=spotNumber;
        this->isAvailable=true;
    }
    bool canPark();
    void park();
    void freeSpot();
    int getSpotNumber();
};
class ParkingTicket{
    private:
        int ticketNumber;
        string vehicleNumber;
        int spotNumber;
}

int main(){
    Vehicle *v1=new Car("1234");
    cout<<v1->getParkingRate()<<endl;
    delete v1;
}