/* 	
Name: Spencer Owens
Class: F23 CS F301
Assignment: Final
Date Created: 2023-11-12
Date Updated: 2023-11-12
File Name: drawcalendar.hpp
File Function: 
*/

#ifndef FILE_DRAWCALENDAR_HPP_INCLUDED
#define FILE_DRAWCALENDAR_HPP_INCLUDED
//#endif // #ifndef FILE_DRAWCALENDAR_HPP_INCLUDED

#include <iostream>
// For std::cin, std::cout
using std::cout; using std::cin;
#include <chrono>
// For std::time_t, std::tm, std::local_time, std::chrono
#include <iomanip>
// For std::setw
#include <map>
// For std::map
#include <string>
// For std::string

void calendar_Month() {
  // Set todays date
  auto now = std::chrono::system_clock::now();
  std::time_t t_now = std::chrono::system_clock::to_time_t(now);
  std::tm tm_now = *std::localtime(&t_now);
  int year = tm_now.tm_year + 1900; // tm_year is years since 1900
  int month = tm_now.tm_mon + 1; // tm_mon is months since January (0-11)


  // Find what day of the week the first day of the month is
  int current_day = tm_now.tm_mday; // Days since sunday (0-6)
  tm_now.tm_mday = 1; // Set to first day of the month
  mktime(&tm_now); // Normalize the tm structure
  int first_weekday = tm_now.tm_wday; // Days since sunday (0-6)

  // Determine days in month
  int days_in_month = 31;
  switch (month) {
    case 4: case 6: case 9: case 11:
      days_in_month = 30;
      break;
    case 2:
      days_in_month = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
      break;
  }
  int day = 1 - first_weekday;

  // Print Monthly Calendar
  // cout << "\033[35m6.\033[0m \033[36mExit\033[0m\n\n";
  cout << "\033[36m" << std::setw(3)<< "  " << std::put_time(&tm_now, " %B %Y") << "\033[0m" << std::endl;
  cout << " Mo Tu We Th Fr Sa Su" << std::endl;
  for (int week = 0; week < 6; ++week) {
    for (int weekday = 0; weekday < 7; ++weekday, ++day) {
      if (day > 0 && day <= days_in_month) {
        if (day == current_day) std::cout << "\033[35m"; // Highlight today on calendar
        cout << std::setw(3)  << day;
        if (day == current_day) std::cout << "\033[0m"; // Reset highlight
      } else {
        cout << "   ";
      }
    }
    cout << "\n";
    if (day > days_in_month) break;
  }
}

void calendar_Week() {
  // Draw the weeks calendar
  cout << "Drawing this week's calendar\n";
}

void calendar_Day() {
  // Draw a day's calendar
  cout << "Drawing today's calendar\n";
}

void calendar_Today() {
  // Draw today's calendar
  cout << "Drawing today's calendar\n";
}

void calendar_Draw(int choice_t) {
  // Print calendar of choice
  // Clear the screen and move the cursor to the top-left corner
  cout << "\033[2J\033[1;1H";
  switch(choice_t) {
    // Month
    case 1:
      calendar_Month();
      break;
    // Week
    case 2:
      calendar_Week();
      break;
    // Today
    case 3:
      calendar_Day();
      break;
    case 4:
      calendar_Today();
      break;
    default:
      break;
  }

  // Pause before returning to menu
  cout << "\n";
  pauseConsole();
}

#endif // #ifndef FILE_DRAWCALENDAR_HPP_INCLUDED