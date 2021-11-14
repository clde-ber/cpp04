#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
    private:
        std::string _type;
    public:
        WrongAnimal( void );
        WrongAnimal( std::string type );
        WrongAnimal( WrongAnimal const & rhs);
        const WrongAnimal & operator=( WrongAnimal const &rhs) const;
        virtual ~WrongAnimal( void );
        void makeSound( void ) const;
        std::string getType( void ) const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat( void );
        WrongCat( std::string name );
        WrongCat( WrongCat const & rhs);
        const WrongCat & operator=( WrongCat const &rhs) const;
        ~WrongCat( void );
};

#endif