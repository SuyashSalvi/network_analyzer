#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <chrono>
#include <iostream>

// Logging utility
void logMessage(const std::string& message);

// Error handling utility
void handleError(const std::string& errorMessage);

// Time utility to get current timestamp
std::string getCurrentTimestamp();

#endif
