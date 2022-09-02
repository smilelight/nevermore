#include <iostream>

#include "nlohmann/json.hpp"

using namespace std;
// using json = nlohmann::json;

int main(int argc, char const *argv[])
{
    /* code */
    nlohmann::json j;
    j["pi"] = 3.14;
    j["hello"] = "world";
    cout << j << endl;
    return 0;
}
