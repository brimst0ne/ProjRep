#ifndef _Transport_h_
#define _Transport_h_

class Transport {
protected:
	int passengers;
	int weight;
	int range;
public:
	Transport();

	int Getpassengers();
	int Getweight();
	int Getrange();

	void Setpassengers(int p);
	void Setweight(int w);
	void Setrange(int r);

	virtual const char* Voice();
};
#endif