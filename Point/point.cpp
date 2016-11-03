#include "point.h"

//Clase point: CONSTRUCTORES
Point::Point(){
    x = 0.0;
    y = 0.0;
}

Point::Point(double a, double b){
    x = a;
    y = b;
}

Point::Point(Point &temp){
    x = temp.x;
    y = temp.y;
}

//Clase point: ATRIBUTOS
double Point::getX() const{
    return x;
}

double Point::getY() const{
    return y;
}

void Point::setX(double a){
    x = a;
}

void Point::setY(double b){
    y = b;
}

void Point::printPoint(){
    cout<<"("<<x<<" , "<<y<<")"<<endl;
}

void Point::modifyPoint(double a, double b){
    x = a;
    y = b;
}

//Clase PointArray: CONSTRUCTORES
PointArray::PointArray(){
    size = 0;
    points=new Point[0];
}

PointArray::PointArray (const Point ptsToCopy[], const int toCopySize){

    size = toCopySize ;
    points = new Point [ toCopySize ];
    for(int i = 0; i < toCopySize ; ++i)
        points [i] = ptsToCopy [i];

}


PointArray::PointArray(const PointArray &pv){

    size = pv.size;
    points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = pv.points[i];
}

//Clase PointArray: ATRIBUTOS
void PointArray::resize(int newSize){

	Point *pts = new Point[newSize];
	int minSize = (newSize > size ? size : newSize);
	for(int i = 0; i < minSize; i++)
		points[i] = points[i];
		delete[] points;
		size = newSize;
		points = pts;

}

int PointArray::getSize() const{

	cout<<size<<endl;

	return 0;

}

void PointArray::clear(){

	resize(0);

}

void PointArray::push_back(const Point &p){

	resize(size + 1);
	points[size - 1] = p;

}

void PointArray::insert(const int pos, const Point &p){

	resize(size + 1);

	for(int i = size - 1; i > pos; i--)
		points[i] = points[i - 1];

	points[pos] = p;
}

void PointArray::remove(const int pos){

	if(pos >= 0 && pos < size){
		for(int i = pos; i < size - 2; i++) {
			points [i] = points [i + 1];
		}
		resize (size - 1);
	}

}

Point *PointArray::get(const int pos){

	return pos >= 0 && pos < size ? points + pos : NULL;

}

const Point *PointArray::get(const int pos) const{

	return pos >= 0 && pos < size ? points + pos : NULL;

}

void PointArray::printArray(){

	for(int i=0; i < size; i++)
		cout << "point[" << i << "]: " << "( " << points[i].getX() << ", " << points[i].getY()<< " )" << endl;

}
