class Figure
{
private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float P, S;
	float side_1, side_2, side_3, side_4;

public:
	Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4); // ����������� �������� ������ figure
	float side(float x1, float x2, float y1, float y2); // ��������� ������� ��������������� 
	void show(); // ������� ��������� ��������������� �� �����, � ��� ����� ������� � ��������
	bool is_prug(); // ���������� true, ���� �������������� ������������� � false � ��������� ������
	bool is_square(); // ���������� true, ���� �������������� ������� � false � ��������� ������
	bool is_romb(); // ���������� true, ���� �������������� ���� � false � ��������� ������
	bool is_in_circle(); // ���������� true, ���� �������������� ����� ������� � ���������� � false � ��������� ������
	bool is_out_circle(); // ���������� true, ���� � �������������� ����� ���� ������� ���������� � false � ��������� ������
};