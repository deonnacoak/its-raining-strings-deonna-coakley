#include "raining.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void welcomeNote() {
   cout << "Welcome to the Business Sorting Program!" << endl << endl;
}

void goodbyeNote() {
   cout << "Thank you for using the Business Sorting Program!" << endl;
}

void sortedList(vector<string>& businesses) {
   sort(businesses.begin(), businesses.end());

   cout << "\nYour business" << (businesses.size() > 1 ? "es are:" : " is:") << "\n" << endl;

   for (const string& name : businesses) {
      cout << "    " << name << endl;
   }
}

bool keepGoing(const string& input) {
   return (input == "y" || input == "Y" || input == "yes" || input == "Yes");
}