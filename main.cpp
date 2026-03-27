#include <iostream>
#include "src/raining.hpp"
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<string> businesses;
  string newName;
  string userChoice;
  bool adding = true;

  welcomeNote();

  while (adding) {
    cout << "Please enter the name of a business: ";

    getline(cin >> ws, newName);

    businesses.push_back(newName);

    sortedList(businesses);

    cout << "\nAdd another business? ";
    cin >> userChoice;

    if (!keepGoing(userChoice)) {
      adding = false;
    }

    cout << endl;
  }

  goodbyeNote();

  return 0;
}