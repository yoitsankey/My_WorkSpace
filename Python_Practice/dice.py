import random
class Dice:
    def roll(self):
        self.x = random.randint(1,6)
        self.y = random.randint(1,6)
        return self.x, self.y
pass1 = Dice()
print(pass1.roll())
