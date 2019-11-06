#ifndef UNIQUE_ID
#define UNIQUE_ID

#include <iostream>
#include <fstream>

static unsigned int id;
const unsigned int system_id = 4294967295;

void initialize() {
    std::ifstream uid; 
    uid.open("uid.dat");
    if (!uid) {
        std::cout << "" << std::endl;
    }
    else {
        std::string line;
        std::getline(uid,line);
        std::cout << line << std::endl;
        uid.close();
    }
}


#endif