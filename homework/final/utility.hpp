/* 	
Name: Spencer Owens
Class: F23 CS F301
Assignment: Final
Date Created: 2023-12-02
Date Updated: 2023-12-02
File Name: utility.hpp
File Function: 
*/

#ifndef FILE_UTILITY_HPP_INCLUDED
#define FILE_UTILITY_HPP_INCLUDED
//#endif // #ifndef FILE_DRAWCALENDAR_HPP_INCLUDED

#include <iostream>
// For cin, cout, streamsize
#include <limits>
// For numeric_limits

void pauseConsole() {
  std::cout << "Please press 'Enter' to continue...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cin.get();
}

#endif // #ifndef FILE_UTILITY_HPP_INCLUDED