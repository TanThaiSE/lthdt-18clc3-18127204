#include"Line.h"
Line::Line()
{
	Point start1(0, 0), end1(3, 4);
	_start = start1;
	_end = end1;
}
Line::Line(Point x, Point y)
{
	_start = x;
	_end = y;
	
}
Line::~Line()
{

}
string Line::Tostring()
{
	stringstream write;
	write << "Point start:(" << _start.X() << "," << _start.Y() << ")"<<endl<<"Point end:(" << _end.X() << "," << _end.Y()<<")\n";
	return write.str();
	
}
// s = "(1, 2); (3, 4)";

Line* Line::Parse(string s)
{
	vector<string> v = Tokenizer::Parse(s,";");
	
	//v[0]="(1, 2)"
	//v[1]=" (3, 4)"
	Point* p1 = Point::Parse(v[0]);
	v[1] = v[1].substr(1);
	Point* p2 = Point::Parse(v[1]);
	Line* line1 = new Line(*p1, *p2);
	return line1;
	
}

void Line::dosomething()
{
	
	Line* line1 = Line::Parse("(3, 4); (5, 9)");
	string s = line1->Tostring();
	cout << s;
}