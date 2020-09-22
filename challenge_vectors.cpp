#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data_store{};
  char selection{};
  bool done{false};
  int num{};

  while (!done) {
    cout << "\nP - Print Numbers" << endl;
    cout << "A - Add a number." << endl;
    cout << "M - Display Mean or Average of List." << endl;
    cout << "S - Display Smallest Number" << endl;
    cout << "L - Display largest Number" << endl;
    cout << "Q - Quit." << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> selection;
    cout << endl;

    if (selection == 'p' || selection == 'P') {
      if (data_store.size() != 0) {
        cout << "================================" << endl;
        cout << "[ ";
        for (auto data : data_store) {
          cout << data << " ";
        }
        cout << "]" << endl;
        cout << "================================" << endl;
      } else {
        cout << "================================" << endl;
        cout << "[] - the list is empty" << endl;
        cout << "================================" << endl;
      }
    }

    else if (selection == 'a' || selection == 'A') {
      cout << "Enter an integer to add to list: ";
      cin >> num;
      data_store.push_back(num);
      cout << "================================" << endl;
      cout << "Added - " << num << endl;
      cout << "================================" << endl;
    }

    // Exit...
    else if (selection == 'q' || selection == 'Q') {
      cout << "================================" << endl;
      cout << "GoodBye...";
      cout << "Exit." << endl;
      cout << "================================" << endl;
      done = true;
    }

    // Finding average of list...
    else if (selection == 'm' || selection == 'M') {
      double mean{};
      int sum{};
      int total_size = data_store.size();
      if (data_store.size() == 0) {
        cout << "========================================" << endl;
        cout << "Unable to calculate mean -  is no !data" << endl;
        cout << "========================================" << endl;
      } else {
        for (auto data : data_store) {
          sum += data;
        }
        mean = static_cast<double>(sum) / total_size;
        cout << "================================" << endl;
        cout << "The mean is : " << mean << endl;
        cout << "================================" << endl;
      }
    }

    //  finding smallest number
    else if (selection == 's' || selection == 'S') {
      int smallest{};
      if (data_store.size() != 0) {
        smallest = *min_element(data_store.begin(), data_store.end());
        cout << "================================" << endl;
        cout << "Smallest number is: " << smallest << endl;
        cout << "================================" << endl;
      } else {
        cout << "================================" << endl;
        cout << "List is empty." << endl;
        cout << "================================" << endl;
      }
    }

    // finding largest Number
    else if (selection == 'l' || selection == 'L') {
      int largest{};
      if (data_store.size() != 0) {
        largest = *max_element(data_store.begin(), data_store.end());
        cout << "================================" << endl;
        cout << "Largest number is: " << largest << endl;
        cout << "================================" << endl;
      } else {
        cout << "================================" << endl;
        cout << "List is empty." << endl;
        cout << "================================" << endl;
      }
    }

    else {
      cout << endl;
      cout << "================================" << endl;
      cout << "Unknown Selection.";
      cout << "Please try again..." << endl;

      cout << "================================" << endl;
    }
  }

  return 0;
}

/*
    add functions::
      clean(); clear ();
      search(); and display
      don;t allow duplicate items ();
 */
