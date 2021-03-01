class Dialogue:
    name = "Codingeek"

    def say(self):
        print("It's a beautiful day to save lives")


x = Dialogue()
print(x.name)
x.say()
print(Dialogue)
del Dialogue
print(Dialogue)