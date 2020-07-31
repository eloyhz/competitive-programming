# Game status categories
# Change the values as you see fit
STATUS_WIN = "win"
STATUS_LOSE = "lose"
STATUS_ONGOING = "ongoing"


class Hangman:
    def __init__(self, word):
        self.remaining_guesses = 9
        self.status = STATUS_ONGOING
        self.word = word
        self.mask = ['_'] * len(self.word)

    def guess(self, char):
        if self.status == STATUS_LOSE or self.status == STATUS_WIN:
           raise ValueError("Game Over")
        underscores = 0
        guessed = False
        for i in range(len(self.word)):
            if char == self.word[i] and self.mask[i] == '_':
                self.mask[i] = char
                guessed = True
            if self.mask[i] == '_':
                underscores += 1
        if not guessed:
            self.remaining_guesses -= 1
        if underscores == 0:
            self.status = STATUS_WIN
        if self.remaining_guesses < 0:
            self.status = STATUS_LOSE

    def get_masked_word(self):
        return ''.join(self.mask)

    def get_status(self):
        return self.status
