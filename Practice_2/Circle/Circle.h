class Circle {

private:
    float radius, x_center, y_center;

public:
    Circle(float r, float x, float y); // ����������� �������� ������ circle
    void set_circle(float r, float x, float y); // ��������� ������ �������� radius, x_center, y_center ��� ��������
    float square(); // ���������� ������� ����������
    void show(); // ���������� ��������� ����������
    bool triangle_around(float a, float b, float c); // ���������� true, ���� ������ ������������ �� ��������� a, b � c ����� ������� ������ ���������� � false � ��������� ������;
    bool triangle_in(float a, float b, float c); // ���������� true, ���� � ����������� �� ��������� a, b � c ����� ������� ������ ���������� � false � ��������� ������;
    bool circle_check(float r, float x, float y); // ���������� true, ���� ���������� ������� r � ������������ ������ x_cntr � y_cntr ������������ � ������ ����������� � false � ��������� ������.

};
