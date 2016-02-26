/* 
 * File:   throw-catch-sigsegv.cpp
 * Author: Ivan Kold <openwrt@coolspot.33mail.com>
 *
 */

#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout << "Before try-catch one" << std::endl;
    try {
	throw std::runtime_error("Error one of two");
    } catch(const std::exception& e) {
	std::cout << "Exception 1 of 2 catched: " << e.what() << std::endl;
    }
    
    
    // second needed because even when first one causes SIGSEGV 
    // it still prints what is in the catch block
    std::cout << "Before try-catch two" << std::endl;
    try {
	throw std::runtime_error("Error two of two");
    } catch(const std::exception& e) {
	std::cout << "Exception 2 of 2 catched: " << e.what() << std::endl;
    }
    
    std::cout << "SUCCESS" << std::endl;

    std::cout << "All tests finished." << std::endl;
    
    return 0;
}
