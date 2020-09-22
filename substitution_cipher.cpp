#include <bits/stdc++.h>

using namespace std;

int main() {
  cout << boolalpha;
  string alphabet{"abcdefghijklmnopqr stuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{"XZNLWEBGJHQDYVTKFUOMPCIAS0Rx znlwebgjhqdyvtkfuomciasr"};

  string message{};
  string encrypted{};
  string decrypted{};

  cout << "Enter your secret message: " << endl;

  getline(cin, message);

  if (message.length() == 0) {
    cout << "No message Found!!!";
    return 0;
  }
  cout << "====================" << endl;
  cout << "Original Message: " << message << endl;
  cout << "====================" << endl;
  cout << endl;

  for (auto item : message) {
    size_t alpha_position = alphabet.find(item);
    if (alpha_position != string::npos) {
      char new_char = key.at(alpha_position);
      encrypted += new_char;

    } else {
      encrypted += item;
    }
  }

  // for (size_t i = 0; i < message.length(); i++) {
  //   if (alphabet.find(message[i]) != string::npos) {
  //     size_t alpha_position = alphabet.find(message[i]);
  //     char key_position = key[alpha_position];
  //     // cout << message[i] << " " << key_position << endl;
  //     encrypted += key_position;
  //   } else {
  //     encrypted += message[i];
  //   }
  // }

  // cout << "Both Length: " << (encrypted.length() == message.length()) <<
  // endl;

  cout << "-----------------------" << endl;
  cout << endl;
  cout << "Encrypted Message: " << encrypted << endl;
  cout << endl;
  cout << "----------------------" << endl;

  for (size_t i = 0; i < encrypted.length(); i++) {
    if (key.find(encrypted[i]) != string::npos) {
      size_t key_position = key.find(encrypted[i]);
      char alpha_position = alphabet[key_position];
      decrypted += alpha_position;
    } else {
      decrypted += encrypted[i];
    }
  }
  // cout << "Both Length: " << (decrypted.length() == encrypted.length()) <<
  // endl;

  cout << endl;
  cout << "Decrypted Message: " << decrypted << endl;
  cout << endl;
  cout << "----------------------- " << endl;
  return 0;
}
