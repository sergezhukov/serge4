#include  <iostream>
void main()
{
	int t, u, k = 6, r = 5e-7, x = 0.095;
	t = tan(x)+r*(1-log(x));
	u = t/(x^3+1)/(1-exp(k-4));
	std::cout << "t=" << t;
	std::cout << "  u=" << u;
	std::cout << "xzxz";
	system("PAUSE");
}
