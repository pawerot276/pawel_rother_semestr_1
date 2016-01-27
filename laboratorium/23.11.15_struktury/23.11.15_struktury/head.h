#pragma once

struct Complex
{
	float re;
	float im;
};

void wypisz(Complex z);

Complex liczba(float x, float y);

Complex dodaj(Complex x, Complex y);

Complex compare_modul(Complex x, Complex y);

struct Wheel
{
	enum class Type {letnie, zimowe};
};