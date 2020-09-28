#pragma once
class Array {
private:
	int Alenth;
	int * Marray;
public:
	Array(int length);
	~Array();
	Array(const Array& obj);
	void setData(int index, int value);
	int getindex(int value);
	void getArray();
};