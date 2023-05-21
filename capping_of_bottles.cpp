#include <iostream>
#include <vector>
using namespace std;

class Bottle {
private:
    bool isCapped;

public:
    Bottle() {
        isCapped = false;
    }

    void cap() {
        isCapped = true;
    }

    bool isCappedBottle() {
        return isCapped;
    }
};

int main() {
    int numBottles;
    cout << "Enter the number of bottles: ";
    cin >> numBottles;

    vector<Bottle> bottles(numBottles);

    // Capping some random bottles for demonstration
    bottles[2].cap();
    bottles[4].cap();
    bottles[7].cap();

    int cappedCount = 0;

    // Read & Display
    cout << "Bottles:\n";
    for (int i = 0; i < numBottles; i++) {
        cout << "Bottle " << i + 1 << ": ";
        if (bottles[i].isCappedBottle()) {
            cout << "Capped\n";
            cappedCount++;
        } else {
            cout << "Uncapped\n";
        }
    }

    // Display only Uncapped bottles
    cout << "\nUncapped Bottles:\n";
    for (int i = 0; i < numBottles; i++) {
        if (!bottles[i].isCappedBottle()) {
            cout << "Bottle " << i + 1 << "\n";
        }
    }

    // Count total number of capped bottles
    cout << "\nTotal number of capped bottles: " << cappedCount << endl;

    return 0;
}