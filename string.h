#pragma once
#include "object.h"
#include <stdlib.h>
#include <string.h>

/**
 * @brief String class implementation. A String is an Object. 
 * 
 */
class String: public Object {
    
    public:

        /**
         * @brief we have two local variables, size, and str_, which represent the string this String object holds and its size
         * 
         */
        size_t size;
        char* str_;

        /**
         * @brief Construct a new empty String object
         * 
         */
        String() {
            size = 0;
            str_ = nullptr;
        }

        /**
         * @brief Construct a new String object that holds the given string str
         * 
         * @param str - the string this object will hold
         */
        String(const char* str) {
            size = strlen(str);
            str_ = new char[size + 1];
            for(size_t i = 0; i < size; i++) {
                str_[i] = str[i];
            }

            str_[size] = '\0';
        }

        /**
         * @brief Destroy the String object
         * 
         */
        ~String() {
            size = 0;
            delete[] str_;
        }

        /**
         * @brief concatenates the this String's str_ to the other String's str_ and returns a new String object holding 
         * the concatenated strings
         * 
         * @param other - the other String
         * @return String* 
         */
        String* concat(String* other) {

            char* new_str_ = new char[size + other->size - 1];

            for(size_t i = 0; i < size; i++) {
                new_str_[i] = str_[i];
            }

            for(size_t i = size; i < size + other->size; i++) {
                new_str_[i] = other->str_[i-size];
            }

            return new String(new_str_);
        }

        /**
         * @brief determines whethere this String's str_ is lexographically higher than the other's str_ 
         * 
         * @param other - the other String
         * @return true - if this is lexographically greater
         * @return false - otherwise
         */
        bool lex_greater(String* other) {
            for(size_t i = 0; i < std::min(size, other->size); i++) {
                if(str_[i] - '0' < other->str_[i] - '0') {
                    return false;
                }
                else if(str_[i] - '0' > other->str_[i] - '0') {
                    return true;
                }
            }
            return size > other->size;
        }

        /**
         * @brief overriding the the parent's hash method - this simple implementation adds the ASCII values of the chars
         * in this String. We start with a prime number and multiply each ASCII value by 7 a prime number) which generates
         * more unique hashes and avoids collisions. We also multiply by i in order to make sure all permutations of a string 
         * dont have the same hash code. 
         * 
         * @return size_t 
         */
        virtual size_t hash() {
            size_t sum = 7;
            for(size_t i = 0; i < size; i++) {
                sum += str_[i] * 7 * (i + 1);
            }

            return sum;
        }

        /**
         * @brief overriding the parent's equals method - we use casting and then compare
         * 
         * @param other - another Object
         * @return true - if they're equal strings
         * @return false - otherwise
         */
        virtual bool equals(Object* other) {

            String* other_str = dynamic_cast <String *> (other);

            return (other_str && strcmp(str_, other_str->str_) == 0);
        }
};