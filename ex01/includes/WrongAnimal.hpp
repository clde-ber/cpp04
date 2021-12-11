#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal( void );
        WrongAnimal( std::string type );
        WrongAnimal( WrongAnimal const & rhs);
        WrongAnimal & operator=( WrongAnimal const &rhs);
        virtual ~WrongAnimal( void );
        void makeSound( void ) const;
        std::string const & getType( void ) const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat( void );
        WrongCat( std::string type );
        WrongCat( WrongCat const & rhs);
        WrongCat & operator=( WrongCat const &rhs);
        virtual ~WrongCat( void );
};

#endif