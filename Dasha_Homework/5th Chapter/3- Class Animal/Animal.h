#pragma once
#include <string>

class Animal
{
public:
    Animal() {}
    ~Animal() {}

    virtual void Voice() = 0;

};

class Cat : public Animal 
{
public:
    Cat() {}
    ~Cat() {}

    void Voice() override;
};

class Dog : public Animal
{
public:
    Dog() {}
    ~Dog() {}

    void Voice() override;
};

class Cow : public Animal
{
public:
    Cow() {}
    ~Cow() {}

    void Voice() override;
};