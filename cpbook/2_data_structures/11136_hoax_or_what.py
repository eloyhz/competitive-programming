# UVa 11136 - Hoax or what
# https://onlinejudge.org/external/111/11136.pdf


def test_case(n):
	bills = []
	total_amount = 0
	for _ in range(n):
		today = [int(x) for x in input().split()]
		k = today.pop(0)
		bills += today
		lowest_bill = min(bills)
		bills.remove(lowest_bill)
		highest_bill = max(bills)
		bills.remove(highest_bill)
		total_amount += highest_bill - lowest_bill
	print(total_amount)



if __name__ == "__main__":
	while True:
		n = int(input())
		if n == 0:
			break
		test_case(n)
