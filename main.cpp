//main.cpp

#include <iostream>

#include "Vector.cpp"

using namespace std;

int main(){
	
	Vector vec1=Vector(2,4,2,1);
	
	double distance = vec1.distance();
	cout<<distance<<endl;
}
