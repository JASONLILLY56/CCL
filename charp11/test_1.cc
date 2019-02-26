///
///@file     test_1.cc
///@author     Jason(13933536151@163.com)
///@data     2019-02-26 03:53:1551182005
///
#include <iostream>
#include <iomanip>
#include <locale>
 
int main()
{
    std::cout.imbue(std::locale("en_US.utf8"));
    std::cout << "Left fill:\n" << std::left << std::setfill('*')
              << std::setw(12) << -1.23  << '\n'
              << std::setw(12) << std::hex << std::showbase << 42 << '\n'
              << std::setw(12) << std::put_money(123, true) << "\n\n";
 
    std::cout << "Internal fill:\n" << std::internal
              << std::setw(12) << -1.23  << '\n'
              << std::setw(12) << 42 << '\n'
              << std::setw(12) << std::put_money(123, true) << "\n\n";
 
    std::cout << "Right fill:\n" << std::right
              << std::setw(12) << -1.23  << '\n'
              << std::setw(12) << 42 << '\n'
              << std::setw(12) << std::put_money(123, true) << '\n';
}
