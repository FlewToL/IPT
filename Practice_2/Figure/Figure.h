class Figure
{
private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float P, S;
	float side_1, side_2, side_3, side_4;

public:
	Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4); // конструктор объектов класса figure
	float side(float x1, float x2, float y1, float y2); // вычисляет сторону четырёхугольника 
	void show(); // выводит параметры четырёхугольника на экран, в том числе площадь и периметр
	bool is_prug(); // возвращает true, если четырёхугольник прямоугольник и false в противном случае
	bool is_square(); // возвращает true, если четырёхугольник квадрат и false в противном случае
	bool is_romb(); // возвращает true, если четырёхугольник ромб и false в противном случае
	bool is_in_circle(); // возвращает true, если четырёхугольник можно вписать в окружность и false в противном случае
	bool is_out_circle(); // возвращает true, если в четырёхугольник может быть вписана окружность и false в противном случае
};