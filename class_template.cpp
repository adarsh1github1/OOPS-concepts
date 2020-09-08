#include <bits/stdc++.h>
using namespace std;

// program to create an array dynamically without using malloc or allocate etc

template<typename T, int N>
class Array{
private:
	T m_array[N];
public:
	int getsize()const {return N;}
};


int main(){
	//print("string");
	Array<int, 5> array;
	cout << array.getsize();
	return 0;
} 

// stl (standard template library work similarly to this)