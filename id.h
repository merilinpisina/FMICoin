#ifndef UNIQUE_ID
#define UNIQUE_ID

#include <iostream>
#include <fstream>
#include <sstream>

static unsigned int id = -1;
const unsigned int system_id = 4294967295;

void initialize() {
    if (id != -1){
        return;
    }
    std::ifstream uid; 
    // File should be config.dat
    uid.open("uid.dat");
    if (!uid) {
        std::cout << "Not opened\n";
        //handle it
    }
    else {
        std::string line;
        std::getline(uid,line);

        std::stringstream value(line);
        value.clear();
        if (!value)
        {
            std::cout << "Not opened\n";
        }
        
        value >> id;
        uid.close();
    }
}

unsigned int getAndIncrease() {
    // but this does not work -  the last number is wrong
    return (id == system_id ? ++id : id++);
}

#endif