#include <iostream>
#include <fstream>
#include <string>
#include <boost/json.hpp>
#include <boost/json/src.hpp>

int
main()
{
    auto fin = std::ifstream("demo.log");

    std::string inbuf;
    std::getline(fin, inbuf);
    fin.close();

    std::cout << "parsing\n...";

    auto jval = boost::json::parse(inbuf);

    std::cout << "serialising\n...";

    std::string outbuf = boost::json::serialize(jval);

    std::cout << "serialised: " << outbuf.size() << " chars\n";
    return 0;
}
