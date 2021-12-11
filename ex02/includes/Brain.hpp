#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain( void );
    Brain( std::string idea );
    Brain( Brain const & rhs);
    Brain & operator=( Brain const &rhs);
    ~Brain( void );
};

#endif