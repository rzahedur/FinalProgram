// FinalProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Helmet System Class
class HelmetSystem {
public:
    int speed;
    int fuel;
    string timeOfDay;

    void displayHUD() {
        cout << "=== Heads-Up Display ===" << endl;
        cout << "Speed: " << speed << " mph" << endl;
        cout << "Fuel Level: " << fuel << "%" << endl;
        cout << "Time: " << timeOfDay << endl;
        cout << "========================" << endl;
    }
};

// Rider Behavior Class
class RiderBehavior {
public:
    int speedingCount;

    void checkBehavior(int speed) {
        if (speed > 70) {
            speedingCount++;
            cout << " Warning: You are riding too fast!" << endl;
        }

        if (speedingCount >= 3) {
            cout << " You often ride at high speed. Please ride safely!" << endl;
        }
    }
};

// Environmental Alert Class
class EnvironmentalAlerts {
public:
    void checkWeather() {
        string weatherOptions[] = { "Clear", "Rain", "Storm", "Fog" };
        int index = rand() % 4;
        cout << " Weather Alert: " << weatherOptions[index] << endl;
    }

    void checkRoadConditions() {
        string roadOptions[] = { "Good", "Wet", "Potholes", "Slippery" };
        int index = rand() % 4;
        cout << " Road Condition: " << roadOptions[index] << endl;
        if (roadOptions[index] != "Good") {
            cout << " Caution: Bad road condition detected!" << endl;
        }
    }
};

int main() {
    srand(time(0)); // 

    HelmetSystem helmet;
    RiderBehavior rider;
    EnvironmentalAlerts alerts;

    // Simulate random values
    helmet.speed = rand() % 100; // Random speed from 0 to 99
    helmet.fuel = 20 + rand() % 80; // Random fuel between 20% to 99%
    helmet.timeOfDay = "2:45 PM";

    helmet.displayHUD();
    rider.checkBehavior(helmet.speed);
    alerts.checkWeather();
    alerts.checkRoadConditions();

    return 0;
}
