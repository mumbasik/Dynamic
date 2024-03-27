

#include <iostream>
using namespace std;

class Transport {
public:
    virtual void Print() = 0;
    virtual void Oil() = 0;
    virtual void Pay() = 0;
    virtual void SetPay() = 0;
    virtual void Cary() = 0;
    virtual void Seats() = 0;
};
class  Car : public Transport {
    int oil;
    int pay;
    int carry;
    int seats;
public:
    Car() {
        oil = 0;
        pay = 0;
        carry = 0;
        seats = 0;

    }
    Car(int oil, int pay, int carry, int seats) {
        this->oil = oil;
        this->pay = pay;
        this->carry = carry;
        this->seats = seats;
    }
    void Oil() {
        cout << "Oil of the car " << oil << endl;
    }
    void Pay() {
        cout << "First pay " << pay << endl;

    }
    void SetPay() {
        cout << "Hom much this car costs? " << endl;
        cin >> pay;
        Pay();

   }
    void Cary() {
        cout << "Carrying capacity:  " << carry << endl; 
    }
    void Seats() {
        cout << "Count of the seats " << seats << endl;
    }
    void Print() {
        cout << "Overall data of the Car: " << endl;
        Oil();
        Pay();
        SetPay();
        Cary();
        Seats();
    }
};
class Truck : public Transport {
    int oil;
    int pay;
    int carry;
    int seats;
public:
    Truck() {
        oil = 0;
        pay = 0;
        carry = 0;
        seats = 0;

    }
    Truck(int oil, int pay, int carry, int seats) {
        this->oil = oil;
        this->pay = pay;
        this->carry = carry;
        this->seats = seats;
    }
    void Oil() {
        cout << "Oil of the truck " << oil << endl;
    }
    void Pay() {
        cout << "First pay " << pay << endl;

    }
    void SetPay() {
        cout << "Hom much this truck costs? " << endl;
        cin >> pay;
        Pay();

    }
    void Cary() {
        cout << "Carrying capacity:  " << carry << endl;
    }
    void Seats() {
        cout << "Count of the seats " << seats << endl;
    }
    void Print() {
        cout << "Overall data of the Truck: " << endl;
        Oil();
        Pay();
        SetPay();
        Cary();
        Seats();
    }
};
class Plane : public Transport {
    int oil;
    int pay;
    int carry;
    int seats;
public:
    Plane() {
        oil = 0;
        pay = 0;
        carry = 0;
        seats = 0;

    }
    Plane(int oil, int pay, int carry, int seats) {
        this->oil = oil;
        this->pay = pay;
        this->carry = carry;
        this->seats = seats;
    }
    void Oil() {
        cout << "Oil of the plane " << oil << endl;
    }
    void Pay() {
        cout << "First pay " << pay << endl;

    }
    void SetPay() {
        cout << "Hom much this plane costs? " << endl;
        cin >> pay;
        Pay();

    }
    void Cary() {
        cout << "Carrying capacity:  " << carry << endl;
    }
    void Seats() {
        cout << "Count of the seats " << seats << endl;
    }
    void Print() {
        cout << "Overall data of the Plane: " << endl;
        Oil();
        Pay();
        SetPay();
        Cary();
        Seats();
    }
};

int main()
{
    
    Transport* arr[3] = { new Car(2500, 4000 , 45, 4), new Truck(1500, 5000, 90, 2), new Plane(2000, 6700, 560, 140)};
    for (int i = 0; i < 3; i++) {
        arr[i]->Print();
    }
    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    
}


