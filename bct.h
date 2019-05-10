#pragma once
class bct
{
	int value;
	bct *left;
	bct *right;

public:
	bct();
	bct(int a);
	~bct();
	void append(int a);
};

