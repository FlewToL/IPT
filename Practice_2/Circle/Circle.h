class Circle {

private:
    float radius, x_center, y_center;

public:
    Circle(float r, float x, float y); // конструктор объектов класса circle
    void set_circle(float r, float x, float y); // позволяет задать значения radius, x_center, y_center для объектов
    float square(); // возвращает площадь окружности
    void show(); // отобразить параметры окружности
    bool triangle_around(float a, float b, float c); // возвращает true, если вокруг треугольника со сторонами a, b и c можно описать данную окружность и false в противном случае;
    bool triangle_in(float a, float b, float c); // возвращает true, если в треугольник со сторонами a, b и c можно вписать данную окружность и false в противном случае;
    bool circle_check(float r, float x, float y); // возвращает true, если окружность радиуса r с координатами центра x_cntr и y_cntr пересекается с данной окружностью и false в противном случае.

};
