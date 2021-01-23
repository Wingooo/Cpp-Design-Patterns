//点类 
class Point{
public:
	int x;
	int y;
};

//直线类 
class Line{
public:
	Point start;
    Point end;

	Line(const Point& start, const Point& end)
	{
        this->start = start;
        this->end = end;
    }
};

//矩形类 
class Rect{
public:
	Point leftUp;
    int width;
	int height;

	Rect(const Point& leftUp, int width, int height)
	{
        this->leftUp = leftUp;
        this->width = width;
		this->height = height;
    }
};

//现在在原来的用户需求增加了画圆
//圆类 
class Circle{
	Point centre;
	int radius;
	
	Circle(const Point& centre,int radius)
	{
		this->centre = centre;
		this->radius = radius;
	} 
};
 

