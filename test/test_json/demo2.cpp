#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "nlohmann/json.hpp"

using namespace std;
// using json = nlohmann::json;

int main(int argc, char const *argv[])
{
    /* code */
    std::ifstream t("./db.json");
    nlohmann::json j;
    t >> j;
    cout << j << endl;
    cout << j["page"].size() << endl;
    return 0;
}


