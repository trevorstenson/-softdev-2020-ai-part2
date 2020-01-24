#Data Structure We Chose To Implement: Map

map.h contains the classes Map, SOMap, and SSMap.

Map:
Map is the general Map class which inherits from Object, which means it overrides equals and hash. Its general purpose is to store a key-value pair, where in this class both the key and the value are Objects. The method put takes in a key and value and stores it in the Map. The method get takes in a key and returns the value for that key in the Map, null if there is no value for that key. There is other functionality of the Map for gettings its size, checking if it is empty, removing a value, checking if a key exists, checking if a value exists, adding all the key-value pairs of another Map, getting a List of all keys (unordered), and getting a List of all values (unordered).

SOMap:
SOMap inherits from Map and stands for String-Object Map, which means that it stores its keys as type String and its values as type Object. This means that when a put operation is called, the method should return an error if the key passed in is not a String. In addition, when the keySet method is called, the return type should be able to be cast to a StrList.

SSMap:
SSMap inherits from SOMap and stands for String-String Map, which means that it stores both its keys and values as type String. This means that when a put operation is called, the method should return an error if the key passed in is not a String. Also, when the get operation is called, the return value should be able to be cast to a String. In addition, the methods keySet and values, which return all the keys and values of the SSMap respectively, should be able to be cast to a StrList.


Other Classes:

object.h contains the class Object.
Object:
Object is what every other class inherits from. Its methods include equals, which checks whether another Object is equal to it, and hash, which represents itself as a type size_t.

list.h contains the classes List and StrList.
List:
List inherits from Object, which means it overrides equals and hash. In addition, it provides functionality for adding elements of type Object. The main difference between this class and Map is that accessing elements must be done by an size_t index, not a custom key. In addition, the List is ordered by the index, while the Map (when getting the keys and values) is not meant to be ordered.

StrList:
StrList inherits from List and requires that the elements stored are of type String. This means that when adding elements, it will throw an error if the elements are not of type String. In addition, this means that when this StrList returns elements, they will be able to be cast to a String.
