#include <iostream>
#include <cmath> 

using namespace std;
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

int main() 
{
    string eventName, firstName, lastName;
    int numberOfGuests, numberOfMinutes;
    int numberOfServers;
    double costForOneServer, totalFoodCost, averageCostPerPerson, totalCost;


    cout << "Enter the name of the event: ";
    getline(cin, eventName);

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Enter the number of guests: ";
    cin >> numberOfGuests;

    cout << "Enter the duration of the event in minutes: ";
    cin >> numberOfMinutes;
    numberOfServers = ceil(static_cast<double>(numberOfGuests) / 20);
    double hours = numberOfMinutes / 60; 
    double minutes = numberOfMinutes % 60; 
    double cost1 = hours * CostPerHour;
    double cost2 = minutes * CostPerMinute;
    costForOneServer = cost1 + cost2;
    totalFoodCost = numberOfGuests * CostOfDinner;

    
    averageCostPerPerson = totalFoodCost / numberOfGuests;
    totalCost = totalFoodCost + (costForOneServer * numberOfServers);
    
    cout << "\n--- Event Cost Estimation ---\n";
    cout << "Event Name: " << eventName << "\n";
    cout << "Host Name: " << firstName << " " << lastName << "\n";
    cout << "Number of Guests: " << numberOfGuests << "\n";
    cout << "Duration of Event: " << numberOfMinutes << " minutes\n";
    cout << "Number of Servers Required: " << numberOfServers << "\n";
    cout << "Cost for One Server: " << costForOneServer << "\n";
    cout << "Total Food Cost: " << totalFoodCost << "\n";
    cout << "Average Cost Per Person: " << averageCostPerPerson << "\n";
    cout << "Total Cost: " << totalCost << "\n";

    return 0;
}

