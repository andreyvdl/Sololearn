/*
"map object" is used to hold key/value pairs they can be anything (objects and primitive values);
"new.Map([iterable])" iterable is an array or any other object;
it's preferable to use map instead of object:
1- keys can be any type;
2- You can get the size;
3- Can iterate directly;
4- Better performance;
/*----------------------------------*\
the map methods are:
"set(key, value)" adds the key/value pair to the map, if the key exists the value will be changed;
"get(key)" gets the value of the key, if the key don't exist return undef;
"has(key)" return true or false if the key exist or not;
"delete(key)" delete the key and return true or false if the key doesn't exist;
"clear()" removes all keys/values from the map;
"values()" returns an iterator of values in the map for each element;
"keys()" returns an iterator of keys in the map for each element;
"entries()" returns an iterator of "array[key,value]" in the map for each element; 
/*----------------------------------*\
"Set object" is used to hold unique values, without repetitions, the value can be anything;
"new Set([iterable])" Creates a new Set object, the iterable is an array or any other iterable object of value;
The methods are:
"add(value)" adds a new element with the value;
"delete(value)" delete a specified value from the set;
"has(value)" returns true or false if the values exist or not;
"clear()" clears the set;
"values()" returns an iterator of values in the set;
*/

let map = new Map();
map.set('k1', 'v1').set('k2', 'v2');
console.log(map.get('k1'));
console.log(map.get('k2'));
for (let kv of map.entries())
	console.log(kv[0] + ":" + kv[1]);
let set = new Set();
set.add(5).add(9).add(59).add(9);
console.log(set.has(9));
for (let v of set.values())
	console.log(v);