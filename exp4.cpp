#include<iostream>
class Rectangle
{
private:
double length;
double width;
public:
Rectangle():length(1.0),width(1.0){}
Rectangle(double len,double width):length(len),width(wid){}
~Rectangle(){
std::cout<<"Rectangle object destroyed
