#include<iostream>
#include"Fruit.h"


void Fruit::Set(float weight)
{
	this->weight = weight;
}
float Fruit::Get()
{
	return this->weight;
}