///#1004

#include <iostream>
#include <math.h>
double Distance(int x1, int y1, int x2, int y2)
{
	return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
int main()
{
	int t;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		int x1, y1, x2, y2;
		int n;
		std::cin >> x1 >> y1 >> x2 >> y2 >> n;
		int cx, cy, r;
		int ans = 0;
		for (int j = 0; j < n; j++)
		{
			std::cin >> cx >> cy >> r;
			double d1 = Distance(x1, y1, cx, cy);
			double d2 = Distance(x2, y2, cx, cy);
			if ((d1 > r&&d2 < r) || (d2 > r&&d1 < r)) ans++;
		}
		std::cout << ans << std::endl;
	}
	return 0;
}