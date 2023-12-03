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

#include "utility.hpp"

#include <iostream>
// For cout, cin, endl
#include <chrono>
// For time_t, local_time, chrono::system_clock, tm
#include <iomanip>
// For setw, put_time
#include <map>
// For map

void calendar_Draw(int choice) {
  // Set todays date
    auto now = std::chrono::system_clock::now();
    time_t t_now = std::chrono::system_clock::to_time_t(now);
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

  // Clear Screen
  std::cout << "\033[2J\033[1;1H"; 

  // Print Monthly Calendar
  if (choice == 1) {
    std::cout << "\033[36m" << std::setw(3)<< "  " << std::put_time(&tm_now, " %B %Y") << "\033[0m" << std::endl;
    std::cout << " Mo Tu We Th Fr Sa Su" << std::endl;
    for (int week = 0; week < 6; ++week) {
      for (int weekday = 0; weekday < 7; ++weekday, ++day) {
        if (day > 0 && day <= days_in_month) {
          if (day == current_day) std::cout << "\033[35m"; // Highlight today on calendar
          std::cout << std::setw(3)  << day;
          if (day == current_day) std::cout << "\033[0m"; // Reset highlight
        } else {
          std::cout << "   ";
        }
      }
      std::cout << "\n";
      if (day > days_in_month) break;
    }
  }

  // Draw the weeks calendar
  if (choice == 2) {
    std::cout << "Drawing this week's calendar\n";
  }


  // Draw a day's calendar
  if (choice == 3) {
    std::cout << "Drawing today's calendar\n";
  }

  // Draw today's calendar
  if (choice == 4) {
    std::cout << "Drawing today's calendar\n";
  }

  // Pause before returning to menu
  std::cout << "\n";
  pauseConsole();
}

void calendar_DisplayMenu() {
  // Clear screen 
  std::cout << "\033[2J\033[1;1H";

  // Draw calendar menu
  std::cout << "\033[35m1.\033[0m View month calendar\n";
  std::cout << "\033[35m2.\033[0m View week calendar\n";
  std::cout << "\033[35m3.\033[0m View a specific day calendar\n";
  std::cout << "\033[35m4.\033[0m View todays calendar\n";
  std::cout << "\033[35m5.\033[0m \033[36mExit\033[0m\n\n";
  std::cout << "\033[0mPlease enter your choice: ";
}

void calendar_Main() {
  // Print calendar of choice
  int calendar_choice;
  while (calendar_choice != 5) {
    calendar_DisplayMenu();
    std::cin >> calendar_choice;
    if (calendar_choice != 5) calendar_Draw(calendar_choice);
  }
}

#endif // #ifndef FILE_DRAWCALENDAR_HPP_INCLUDED