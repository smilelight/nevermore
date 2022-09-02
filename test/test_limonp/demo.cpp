#include <iostream>
#include <string>

#include "limonp/Config.hpp"
#include "limonp/Colors.hpp"
#include "limonp/Logging.hpp"

int main(int argc, char const *argv[])
{
    // 测试Config
    std::string cfg_path = "./test.cfg";
    limonp::Config config (cfg_path);
    int a = config.Get("a", 0);
    std::string b = config.Get("b", "null");
    std::cout << "a: " << a << ", b: " << b << std::endl;

    // 测试Color
    limonp::ColorPrintln(limonp::Color::GREEN, "green");

    // 测试Logging
    XLOG(INFO) << "info";

    return 0;
}
