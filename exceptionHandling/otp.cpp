#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include <string>  // for string operations

using namespace std;

// Function to generate a random OTP
string generateOTP() {
    const int OTP_LENGTH = 6; // Length of the OTP
    const string digits = "0123456789"; // Digits from which OTP will be generated
    string otp;

    // Initialize random number generator
    srand(time(0));

    for (int i = 0; i < OTP_LENGTH; ++i) {
        otp += digits[rand() % 10]; // Generate random digit and append to OTP
    }

    return otp;
}

// Function to send OTP to a phone number
void sendOTP(string phoneNumber, string otp) {
    // Replace this function with actual code to send OTP via SMS or any other method
    cout << "OTP: " << otp << " has been sent to " << phoneNumber << endl;
}

int main() {
    string phoneNumber;

    cout << "Enter your phone number: ";
    cin >> phoneNumber;

    // Generate OTP
    string otp = generateOTP();

    // Send OTP to the provided phone number
    sendOTP(phoneNumber, otp);

    return 0;
}
