#ifndef MARKER_H
#define MARKER_H

#include <string>

class Marker{
    private:
        std::string name;
        std::string color;
        int year;
        int price;
    public:
        Marker(std::string name,std::string color,int year,int price);
};

#endif