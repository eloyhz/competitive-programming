# Problem E. Even or Odd

if __name__ == "__main__":
	n = int(input())
	if n % 2 != 0:
		print("Either")
	elif n == 2 or n == 6 or n == 10:
		print("Odd")
	else:
		print("Even")
