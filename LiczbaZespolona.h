#pragma once
class LiczbaZespolona
{
public:
	LiczbaZespolona();
	LiczbaZespolona(int, int);
	~LiczbaZespolona();
	void wypisz();
	int get_re() const;
	int get_im() const;
	LiczbaZespolona operator + (LiczbaZespolona);
	LiczbaZespolona operator - (LiczbaZespolona);
	LiczbaZespolona & operator =(LiczbaZespolona);
	friend ostream& operator<<(ostream& out, const LiczbaZespolona a);
	
private:
	int re, im;

};

