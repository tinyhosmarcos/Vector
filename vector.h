//vector.h

class Point{
	
private:
	double x;
	double y;
	
public:
	Point(double _x , double _y);
	
};


class Vector{

public:
	Vector(double _startx , double _starty , double _endx , double _endy);
	double distance();
private:
	double a,b,c,d;
	double startx,starty,endx,endy;
	Point start(double startx,double endx);
	Point  end(double starxy,double endy);
};

 
