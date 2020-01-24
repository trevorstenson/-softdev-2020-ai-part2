#pragma once
#include "object.h"

class List : public Object {
    public:

        
        /**
         * @brief - compares this list to the other object for equality
         * 
         * @param other - what we are comparing this list to
         * @return true - if they are equal
         * @return false - if they are not equals
         */
        virtual bool equals(Object* other) {

        }

        /**
         * @brief hash code method for this list
         * 
         * @return size_t 
         */
        virtual size_t hash() {

        }

        /**
         * @brief - adds the object e to the list at index i
         * 
         * @param e - the object we are adding
         */
        virtual void add(size_t i, Object* e) {

        }

        /**
         * @brief - appends e to the end of this list
         * 
         * @param e - the object being added
         */
        virtual void push_back(Object* e) {

        }

        /**
         * @brief - adds all the elements in list l to this list ast index i
         * 
         * @param i - the index we are adding the elements at
         * @param l -  the other list
         */
        virtual void add_all(size_t i, List* l) {

        }

        /**
         * @brief - removes all of the elements from this list
         * 
         */
        virtual void clear() {

        }

        /**
         * @brief - returns the element at the given index
         *  
         * @param index - the index 
         * @return Object*
         */
        virtual Object* get(size_t index) {

        }

        /**
         * @brief - returns the index of the object e if it is in the list otherwise returns > size()
         * 
         * @param e - the object we are looking for
         * @return size_t 
         */
        virtual size_t index_of(Object* e) {

        }

        /**
         * @brief - removes the object at index i
         * 
         * @param i - the index
         * @return Object* - the object being removed
         */
        virtual Object* remove(size_t i) {

        }

        /**
         * @brief - sets the object at index i to e 
         * 
         * @param i - the index 
         * @param e - the new object
         * @return Object* - the original object at the given index
         */
        virtual Object* set(size_t i, Object* e) {

        }

        /**
         * @brief - get the size of this List
         * 
         * @return size_t - the size of this List
         */
        virtual size_t size() {

        }
};

/**
 * @brief A List of String (the methods return an object which can be cast to a String)
 * 
 */
class StrList : public List {
    public:

        /**
         * @brief - adds the object e to the list at index i
         * 
         * @param e - the object we are adding (should be a String)
         */
        void add(size_t i, Object* e) {

        }

        /**
         * @brief - appends e to the end of this list
         * 
         * @param e - the object being added (should be a String)
         */
        void push_back(Object* e) {

        }

        /**
         * @brief - adds all the elements in list l to this list ast index i
         * 
         * @param i - the index we are adding the elements at
         * @param l -  the other list (should be a StrList)
         */
        void add_all(size_t i, List* l) {

        }
};