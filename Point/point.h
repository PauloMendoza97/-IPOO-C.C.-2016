#include <iostream>
using namespace std;

class Point{
private:
    double x,y;
public:
    //constructores
    Point();
    Point(double a, double b);
    Point(Point &temp);

    //atributos
    double getX() const;
    double getY() const;
    void setX(double a);
    void setY(double b);
    void printPoint();
    void modifyPoint(double x, double y);

};

class PointArray{
private:
    int size;
    Point *points;
public:
    //cnstructores
    PointArray();
    PointArray(const Point Points_1[], const int Size_1);
    PointArray(const PointArray &pv);

    //atributos
    void resize(int newSize);
    int getSize() const;//Obtener el tamaño del arreglo
	void push_back(const Point &p);//Adicionar un POINT al final del arreglo
	void insert(const int pos, const Point &p);//Insertar un PUNTO en una posición del arreglo
	void remove(const int pos);//Eliminiar un punto en una posición esecífica
	void clear();//Eliminar todos lo elementos y setear en el tamaño cero
	Point *get(const int pos);
	const Point *get(const int pos) const;
	void printArray();

};
