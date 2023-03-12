class rational {
public:
	int a, b;
	rational();
	rational(int a1, int b1);
	void set(int a1, int b1);
	void set_rat(int a1, int b1);
	void show();
	int nod(int a1, int b1);
	rational operator+(rational r);
	friend rational operator-(rational r0, rational r1);
	rational operator++();
	rational operator++(int);
	bool operator==(rational r);
	bool operator>(rational r);
	void operator=(rational r);
};