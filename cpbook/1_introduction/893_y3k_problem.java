// UVa 00893 - Y3K Problem
// https://onlinejudge.org/external/8/893.pdf

import java.util.*;

class Main
{
	public static void main(String args[])
	{
		Scanner scanner = new Scanner(System.in);
		int n, d, m, y;

		while (true)	
		{
			n = scanner.nextInt();
			d = scanner.nextInt();
			m = scanner.nextInt();
			y = scanner.nextInt();
			if (n == 0 && d == 0 && m == 0 && y == 0)
				break;
			Calendar cal = Calendar.getInstance();
			cal.set(y, m - 1, d);
			cal.add(Calendar.DATE, n);
			System.out.println(cal.get(Calendar.DATE) + " "
								+ (1 + cal.get(Calendar.MONTH)) + " "
								+ cal.get(Calendar.YEAR));
		}
		
	}
}
