#pragma once
class Point {
private:
	double longitude, latitude;
	friend class Node;
	friend class KD_Tree;
public:
	Point() {};
	Point(double longitutde, double latitude);


};