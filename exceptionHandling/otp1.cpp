#include <aws/core/Aws.h>
#include <aws/sns/SNSClient.h>
#include <aws/sns/model/PublishRequest.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
using namespace Aws;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;

string generateOTP() {
    const int OTP_LENGTH = 6;
    const string digits = "0123456789";
    string otp;
    srand(time(0));
    for (int i = 0; i < OTP_LENGTH; ++i) {
        otp += digits[rand() % 10];
    }
    return otp;
}

void sendOTP(string phoneNumber, string otp) {
    Aws::SDKOptions options;
    Aws::InitAPI(options);
    
    // Set your AWS credentials
    Aws::Auth::AWSCredentials credentials("YOUR_ACCESS_KEY_ID", "YOUR_SECRET_ACCESS_KEY");
    
    // Specify your AWS Region
    Aws::Client::ClientConfiguration clientConfig;
    clientConfig.region = "YOUR_AWS_REGION";
    
    // Create an SNS client
    SNSClient snsClient(credentials, clientConfig);
    
    // Compose the message
    Aws::String message = "Your OTP is: " + Aws::String(otp.c_str());
    
    // Set up the publish request
    PublishRequest publishRequest;
    publishRequest.SetPhoneNumber(Aws::String(phoneNumber.c_str()));
    publishRequest.SetMessage(message);
    
    // Publish the message
    auto publishOutcome = snsClient.Publish(publishRequest);
    
    if (publishOutcome.IsSuccess()) {
        std::cout << "OTP has been sent to " << phoneNumber << std::endl;
    } else {
        std::cout << "Failed to send OTP: " << publishOutcome.GetError().GetMessage() << std::endl;
    }
    
    Aws::ShutdownAPI(options);
}

int main() {
    string phoneNumber;
    
    cout << "Enter your phone number: ";
    cin >> phoneNumber;
    
    string otp = generateOTP();
    
    sendOTP(phoneNumber, otp);
    
    return 0;
}
