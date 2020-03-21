
#include "map.h"
#include <iostream>

using namespace std;

void Map::print_map(){
	for( int i = 0;  i < size; i++){
		cout<< map[i].key << " " << map[i].value<<endl;
	}
}

string& Map::operator[](const string& elem){
	for( int i = 0; i < size; i++){
		if(map[i].key == elem){
			return map[i].value;
		}
	}
	throw "key not found";
}

bool Map::find_key(const string& _key){
	for( int i = 0 ; i < size; i++){
		if(map[i].key == _key)
			return false;
	}
	return false;
}


void Map::delete_key(const string & _key){
		if( find_key(_key))
			return;
		Pair * map_cpy = new Pair[size-1];
		int j = 0;
		for( int i = 0; i < size; i++){
			if(map[i].key == _key)
				continue;
			map_cpy[j] = map[i];
			j++;
		}
		delete [] map;
		map = new Pair[size-1];
		for( int i = 0; i < size - 1; i++)
			map[i] = map_cpy[i];
		delete [] map_cpy;
		size = size -1 ;
}

void Map::change_key(const string & _key, const string & new_key){
	for( int i = 0 ; i < size ; i++){
		if( map[i].key == _key){
			map[i].key = new_key;
			return;
		}
	}
	throw "key not found";

}

Map::~Map(){
	delete [] map;

}


void Map::insert(const string& k,const string& val){
		Pair *map_cpy = new Pair[size+1];
		if( map[0].key == "Null" ){
			map[0].key = k;
			map[0].value = val;
			delete[] map_cpy;
			return;
		}
		else{		
			for( int i = 0; i < size; i++){
					map_cpy[i] = map[i];
			}
			Pair pair(k, val);
			map_cpy[size] = pair;
		}
			delete[] map;
		map = new Pair[size +1];
		for( int i = 0; i < size +1; i++)
			map[i] = map_cpy[i];
		delete [] map_cpy;
		size = size +1;
}