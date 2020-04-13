#pragma once

#include <iostream>


typedef char * PCHAR;

class MyString
{
private:
    PCHAR _buffer;
    int _length;
    int _size;

protected:
    void _init(PCHAR input);
    void _move(PCHAR input);

public:
    MyString(PCHAR input = nullptr);

    int getLength() const ;
    int getSize() const; 
    void reserve(int i);
    void empty();
    void free();
    char getAt(int i) const ;
    void setAt(int i, char a);
    
    char operator [] (int i) const;
    friend std::ostream & operator << (std::ostream& os, const MyString & str);

    ~MyString();
};

namespace cus
{
    int strlen(PCHAR str);
    int strlen(MyString str);
} // namespace std

