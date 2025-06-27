#include "ElectricCar.h"
#include "GasolineCar.h"
#include "HybridCar.h"

int main() {

    // Create an electric car
    ElectricCar electricCar("Tesla", "Model S", 2022, 80000.0, 400);
    electricCar.Display(); // Display the details of the electric car
    cout << endl;

    // Create a gasoline car
    GasolineCar gasolineCar("Toyota", "Camry", 2022, 30000.0, 2000);
    gasolineCar.Display(); // Display the details of the gasoline car
    cout << endl;

    // Create a hybrid car
    HybridCar hybridCar("Toyota", "Prius", 2022, 35000.0, 1500, 50);
    hybridCar.Display(); // Display the details of the hybrid car

    return 0;
}
