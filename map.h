#pragma once
#include "object.h"
#include "array.h"

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
         * If the key does not exist, return a nullptr.
         * 
         * @param key - the key to return the value for.
         * @return Object* - the value that corresponds to key
         */
        virtual Object* get(Object* key) {

        }
        
        /**
         * @brief - Put the given key-value pair in this map.
         * 
         * @param key - the key to insert, cannot be null
         * @param value - the value to insert
         * @return Object* - the previous value for the given key if exists, else nullptr
         */
        virtual Object* put(Object* key, Object* value) {
            
        }

        /**
         * @brief - Remove the key-value pair from this map.
         * 
         * @param key - the key to remove
         * @return Object* - the value of the key that was removed if exists, else nullptr
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
         * @return Array* - the list of keys present in this map.
         */
        virtual Array* keySet() {

        }

        /**
         * @brief - Get a list of the values present in this map.
         * 
         * @return Array* - the list of values present in this map.
         */
        virtual Array* values() {

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
 * @brief OSMap - Map from Object to String
 * 
 */
class OSMap : public Map {
    public:

        /**
         * @brief - Get the value for the key.
         * If the key does not exist, return a nullptr.
         * 
         * @param key - the key to return the value for.
         * @return String* - the value that corresponds to key
         */
        virtual String* get(Object* key) {

        }
        
        /**
         * @brief - Put the given key-value pair in this map.
         * 
         * @param key - the key to insert, cannot be null
         * @param value - the value to insert
         * @return String* - the previous value for the given key if exists, else nullptr
         */
        virtual String* put(Object* key, String* value) {
            
        }

        /**
         * @brief - Remove the key-value pair from this map.
         * 
         * @param key - the key to remove
         * @return String* - the value of the key that was removed if exists, else nullptr
         */
        virtual String* remove(Object* key) {

        }
};

/**
 * @brief SOMap - Map from String to Object
 * 
 */
class SOMap : public Map {
    public:

        /**
         * @brief - Does this map contain key?
         * 
         * @param key - the key to search for
         * @return true - if the key exists in this map
         * @return false - if the key does not exist in this map
         */
        bool containsKey(String* key) {

        }

        /**
         * @brief - Get the value for the key.
         * If the key does not exist, return a nullptr.
         * 
         * @param key - the key to return the value for.
         * @return Object* - the value that corresponds to key
         */
        virtual Object* get(String* key) {

        }
        
        /**
         * @brief - Put the given key-value pair in this map.
         * 
         * @param key - the key to insert, cannot be null
         * @param value - the value to insert
         * @return Object* - the previous value for the given key if exists, else nullptr
         */
        virtual Object* put(String* key, Object* value) {
            
        }

        /**
         * @brief - Remove the key-value pair from this map.
         * 
         * @param key - the key to remove
         * @return Object* - the value of the key that was removed if exists, else nullptr
         */
        virtual Object* remove(String* key) {

        }
};

/**
 * @brief SSMap - Map from String to String
 * 
 */
class SSMap : public SOMap {
    public:

        /**
         * @brief - Does this map contain value?
         * 
         * @param value - the value to search for
         * @return true - if the value exists in this map
         * @return false - if the value does not exist in this map
         */
        virtual bool containsValue(String* value) {

        }

        /**
         * @brief - Get the value for the key.
         * If the key does not exist, return a nullptr.
         * 
         * @param key - the key to return the value for.
         * @return Object* - the value that corresponds to key
         */
        virtual String* get(String* key) {

        }
        
        /**
         * @brief - Put the given key-value pair in this map.
         * 
         * @param key - the key to insert
         * @param value - the value to insert
         * @return Object* - the previous value for the given key if exists, else nullptr
         */
        virtual String* put(String* key, String* value) {
            
        }

        /**
         * @brief - Remove the key-value pair from this map.
         * 
         * @param key - the key to remove
         * @return Object* - the value of the key that was removed if exists, else nullptr
         */
        virtual String* remove(String* key) {

        }
};
