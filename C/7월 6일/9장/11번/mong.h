#pragma once

int combi(int a, int b);

int combi(int a, int b)
{
	if (b == 0 || b == a)
		return 1;
	else
		return combi(a - 1, b - 1) + combi(a - 1, b);
}