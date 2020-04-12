#include "MyString.h"
#include <cassert>

MyString::MyString(PCHAR input){
    _init(input);

}

void MyString::_init(PCHAR input){
    _buffer = new char [cus::strlen(input)];
    
    _length = cus::strlen(input);
    _size = _length;

    for(int i = 0; i < _length; i++){
        _buffer[i] = input[i];
    }
}

int MyString::getLength() const {
    return _length;
}

void MyString::reserve(int i){
    _size += i;

    PCHAR temp;
    temp = new char [_size];

    for(int i = 0; i < _length; i++){
        temp[i] = _buffer[i];
    }

    delete [] _buffer;
    _buffer = temp;
}

void MyString::empty(){
    _length = 0;
    _buffer[0] = '\0';
}

void MyString::free(){
    empty();
    _size = 0;

    delete[] _buffer;
}

char MyString::getAt(int i) const {
    assert(_length >= i);
    return _buffer[i];
}

void MyString::setAt(int i, char a){
    assert(_size >= i);
    if(_length > i){
        _length = i;
        for(int j = i ; j < _length; j++){
            _buffer[j] = ' ';
        }
    }

    _buffer[i] = a;
}

char MyString::operator[](int i) const {
    assert(_length >= i);
    return getAt(i);
}

int cus::strlen(PCHAR str){
    for(int i = 0; ; i++){
        if(str[i] == '\0')
            return i;
    }
}

int cus::strlen(MyString str){
    for(int i = 0; ; i++){
        if(str[i] == '\0')
            return i;
    }
}