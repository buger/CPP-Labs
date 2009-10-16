class massiv
{
public:
	int count;
	int *num;
	massiv(int);
	virtual int Count();
	void Print();
	void Add(int, int);
};

class stek: public massiv
{
public:
	int top;
	stek(int);
	virtual int Count();
	void pop(int);
};

class squeue: public massiv
{
public:
	int top;
	squeue(int);
	virtual int Count();
	void add(int);
};
