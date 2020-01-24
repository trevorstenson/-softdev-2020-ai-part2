#pragma once
#include <iostream>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Object class implementation
 * 
 */
class Object {

    /**
     * @brief Object class
     * 
     */
    public:

        /**
         * @brief Construct a new Object object
         * 
         */
        Object(){}

        ~Object() {}
        
        /**
         * @brief check if this object is equal to other by checking if have the same memory address
         * 
         * @param other - the other object
         * @return true - if they're equal
         * @return false - if they're not equal 
         */
        virtual bool equals(Object* other) {
            
        }

        /**
         * @brief - get the hash of this object - returns the memory address of this object casted to a size_t
         * 
         * @return size_t 
         */
        virtual size_t hash() {
            
        }
};
    

