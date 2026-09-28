#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double replacementCost;

    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    double insurance = replacementCost * 0.80;

    cout << fixed << setprecision(2);
    cout << "The minimum amount of insurance you should purchase is: $"
         << insurance << endl;

    return 0;
}