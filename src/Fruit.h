#ifndef _FRUIT_
#define _FRUIT_

class Fruit
{
private:
	float weight;
public:
	Fruit() {};
	~Fruit() {};
	void Set(float weight);
	float Get();
};

#endif // !_FRUIT_