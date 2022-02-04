//
//  HTTPRequest
//

#include <iostream>
#include <fstream>
#include "HTTPRequest.h"

int main(int argc, const char* argv[])
{
   try
{
    http::Request request{"URL"};
    const std::string body = "BODY";
    const auto response = request.send(
        "GET", body, {
        "Content-Type: application/json",
        "Authorization: TOKEN"
    });
    std::cout << std::string{response.body.begin(), response.body.end()} << '\n'; // print the result
}
catch (const std::exception& e)
{
    std::cerr << "So'rov yuborishda xato: " << e.what() << '\n';
}
    return 0;
}
