
//Vector.cpp
#include"vector.h"
#include<iostream>
#include<math.h>

using namespace std;



Vector::Vector(double _startx ,double _starty ,double _endx ,double _endy){
	startx=_startx;
	endx=_endx;
	starty=_starty;
	endy=_endy;
	
}

double Vector::distance(){
	
	return sqrt(pow((startx-endx),2)+pow((starty-endy),2));
}
