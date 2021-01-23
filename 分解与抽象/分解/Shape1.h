//���� 
class Point{
public:
	int x;
	int y;
};

//ֱ���� 
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

//������ 
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

//������ԭ�����û����������˻�Բ
//Բ�� 
class Circle{
	Point centre;
	int radius;
	
	Circle(const Point& centre,int radius)
	{
		this->centre = centre;
		this->radius = radius;
	} 
};
 

