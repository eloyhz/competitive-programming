class Matrix:
    def __init__(self, matrix_string):
        self.matrix = []

        # get a list of rows (string with numbers separated by spaces)
        r = matrix_string.split('\n')
        for s in r:
            # get a list of columns (numbers as strings)
            row = list(map(int, s.split()))
            self.matrix.append(row)

    def row(self, index):
        # return a slice of the whole list (copy) to avoid mutation
        return self.matrix[index - 1][:]

    def column(self, index):
        # return a column using list comprehension
        col = [self.matrix[i][index - 1] for i in range(len(self.matrix))]
        return col
