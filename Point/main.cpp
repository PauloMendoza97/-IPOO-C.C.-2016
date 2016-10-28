#include "point.cpp"
#include "vector.cpp"

int main(){

	Point x;
	Point y;
	x.printPoint();

	cout<<"\n"<<endl;

	PointArray arrpoint;

	x.setX(5);
	x.setY(8);
	x.printPoint();

	cout<<"\n"<<endl;

	x.modifyPoint(4,7);
	x.printPoint();

	cout<<"\n"<<endl;

	y.setX(4);
	y.setY(9);
	y.printPoint();

	cout<<"\n"<<endl;

	arrpoint.getSize();

	cout<<"\n"<<endl;


	arrpoint.resize(5);
	arrpoint.insert(0,x);
	arrpoint.printArr();

	cout<<"\n"<<endl;

	arrpoint.getSize();

	cout<<"\n"<<endl;

	arrpoint.clear();
	arrpoint.getSize();

	cout<<"\n"<<endl;

	arrpoint.resize(3);
	arrpoint.push_back(y);
	arrpoint.printArr();

	cout<<"\n"<<endl;

	arrpoint.getSize();

	cout<<"\n"<<endl;


	arrpoint.printArr();
	arrpoint.remove(1);

	cout<<"\n"<<endl;

	arrpoint.printArr();

	cout<<"\n"<<endl;
	cout<<"///////////////////////////////////////////////////////////"<<endl;
	cout<<"\n"<<endl;

	Vector vec1;
	vec1.printVector();

	cout<<"\n"<<endl;

	Vector vec2(2.4, 3.4, 2.5, 3.7);
	vec2.printVector();

	cout<<"\n"<<endl;

	Vector vec3(vec2);
	vec3.printVector();

	cout<<"\n"<<endl;

	vec3.getStart();
	cout<<"\n"<<endl;
	vec3.getEnd();

	cout<<"\n"<<endl;

	vec3.setStart(4.5, 5.6);
	vec3.setEnd(7.8, 9.4);
	vec3.printVector();

	cout<<"\n"<<endl;

	vec3.modifyVector(1.2, 2.4, 4.8, 8.1);
	vec3.printVector();

	cout<<"\n"<<endl;

	VectorArray arrvec;
	arrvec.resize(5);
	arrvec.printArr();

	cout<<"\n"<<endl;

	arrvec.getSize();

	cout<<"\n"<<endl;

	arrvec.push_back(vec2);
	arrvec.printArr();

	cout<<"\n"<<endl;

	arrvec.clear();
	arrvec.getSize();

	cout<<"\n"<<endl;

	arrvec.resize(6);
	arrvec.insert(0, vec3);
	arrvec.printArr();

	cout<<"\n"<<endl;

	arrvec.remove(0);
	arrvec.printArr();

	return 0;

}
