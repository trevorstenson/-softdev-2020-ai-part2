#pragma once
#include "object.h"
#include "list.h"

/**
 * Map - data structure that is to be used for our project which maps an Object to an Object
 */ 
class Map: public Object {
    public:
        /**
         * @brief Basic initialization of an empty Map
         */
        Map();

        /**
         * @brief Deletes a Map including all private data structures, such as buckets
         * NOTE: Objects inside the Map will NOT be freed
         */
        ~Map();

        /**
         * @brief - Get the size of this map.
         * 
         * @return size_t - the size of this map.
         */
        virtual size_t size() {

        }

        /**
         * @brief - Is this map empty?
         * 
         * @return true - if this map is empty
         * @return false: if this map is not empty
         */
        virtual bool isEmpty() {

        }

        /**
         * @brief - Does this map contain key?
         * 
         * @param key - the key to search for
         * @return true - if the key exists in this map
         * @return false - if the key does not exist in this map
         */
        virtual bool containsKey(Object* key) {

        }

        /**
         * @brief - Does this map contain value?
         * 
         * @param value - the value to search for
         * @return true - if the value exists in this map
         * @return false - if the value does not exist in this map
         */
        virtual bool containsValue(Object* value) {

        }

        /**
         * @brief - Get the value for the key.
         * 
         * @param key - the key to return the value for.
         * @return Object* - the value that corresponds to key
         */
        virtual Object* get(Object* key) {

        }
        
        /**
         * @brief - Put the given key-value pair in this map.
         * 
         * @param key - the key to insert
         * @param value - the value to insert
         * @return Object* - the previous value for the given key
         */
        virtual Object* put(Object* key, Object* value) {
            
        }

        /**
         * @brief - Remove the key-value pair from this map.
         * 
         * @param key - the key to remove
         * @return Object* - the value of the key that was removed
         */
        virtual Object* remove(Object* key) {

        }

        /**
         * @brief - Put all the contents of other into this map.
         * 
         * @param other - the other map to load all the contents from
         */
        virtual void putAll(Map* other) {

        }

        /**
         * @brief - Clear the contents of this map so it is empty.
         * 
         */
        virtual void clear() {

        }

        /**
         * @brief - Get a list of the keys present in this map.
         * 
         * @return List* - the list of keys present in this map.
         */
        virtual List* keySet() {

        }

        /**
         * @brief - Get a list of the values present in this map.
         * 
         * @return List* - the list of values present in this map.
         */
        virtual List* values() {

        }

        /**
         * @brief - Does this map equal other?
         *  
         * @param other - the object to compare this map to
         * @return true - if this map equals other
         * @return false - if this map does not equal other
         */
        virtual bool equals(Object* other) {

        }

        /**
         * @brief - Get the hash of this map.
         * 
         * @return size_t - the hash of this map
         */
        virtual size_t hash() {

        }
};

/**
 * @brief SOMap - Map from String to Object
 * 
 */
class SOMap : public Map {
    public:
        /**
         * @brief - Put the given key-value pair in this map.
         * Validate that the key is of type String.
         * 
         * @param key - the key to insert
         * @param value - the value to insert
         * @return Object* - the previous value for the given key
         */
        virtual Object* put(Object* key, Object* value) {
                
        }

        /**
         * @brief - Get a list of the keys present in this map.
         * 
         * @return List* - the list of keys present in this map (should be an StrList)
         */
        virtual List* keySet() {

        }
};

/**
 * @brief SSMap - Map from String to String
 * 
 */
class SSMap : public SOMap {
    public:
        /**
         * @brief - Put the given key-value pair in this map.
         * Validate that both the key and the value are of type String.
         * 
         * @param key - the key to insert
         * @param value - the value to insert
         * @return Object* - the previous value for the given key
         */
        virtual Object* put(Object* key, Object* value) {
            
        }

        /**
         * @brief - Get a list of the values present in this map.
         * 
         * @return List* - the list of values present in this map (should be an StrList)
         */
        virtual List* values() {

        }
};
