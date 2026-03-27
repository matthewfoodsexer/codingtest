#include <iostream>
#include <ctime>

int main() {
    std::time_t now_c = std::time(nullptr);
    std::tm *seoul = std::gmtime(&now_c);
    seoul->tm_hour += 9;

    std::mktime(seoul);

    printf("%u-%02u-%02u", seoul->tm_year + 1900, seoul->tm_mon + 1, seoul->tm_mday);
}