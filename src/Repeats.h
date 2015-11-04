#include <iostream>
#include <string>
#include <map>

using namespace std;

std::map<std::string, int> repeatCounts(long int pos, const std::string& seq, int maxsize);
bool isRepeatUnit(const std::string& seq, const std::string& unit);
